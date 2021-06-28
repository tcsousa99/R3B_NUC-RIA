#!/usr/bin/python
#
# A general purpose macro compiler. Beta version. GNU/Linux/gcc only
#
# Compling a ROOT macro (using a stand-alone compiler, not root macro.C+)
# involves two tasks:
# - figuring out which headers the macros author forgot to include
# - work out which libraries you will have to link against
#
# We do both heuristically. First, we scan the usual include directories 
# for any ROOTesque prefixed header files like TFoo.h, FairFoo.h, R3BFoo.h.
# Then, we grep the macro for any mentions of TFoo, etc and include
# the corresponding header files if we find it.
#
# After that step, we try to compile our source. 
#
# For the libs, the process is similar. We search in LD_LIBRARY_PATH et al
# for shared objects and remember any symbols they happen to export.
#
# Then, we look for undefined symbols in our object file. If they match any
# in our symbol dictionary, we add the corresponding library to the linker
# call. Then we hope for the best.
#
# We use CXXFLAGS for compiling and LDFLAGS for linking, so you can add
# additional stuff to them. 
#
# Hints for debugging ROOT stuff with gdb in general:
# - ROOT captures SIGSEGV to display its kindergarden stack trace, so
#   you won't get core dumps. Nothing stopping you from running in gdb, though. 
# - Broken call stacks are sometimes due to string-defined TF1s and friends.
#   a good check might be to break on TROOT::ProcessLine.
#   or you can examine the stack with e.g. x/80xg $sp, search for pointers
#   to shared objects (info shared), and use info symbol 0xpointer to get more
#   info. Good Luck!

import sys, os, subprocess, re
from subprocess import check_call, check_output
import operator, json, time, traceback
from os.path import basename
from functools import partial

car=lambda x:x[0]
cadr=lambda x:x[1]
#fairlibdir points to R3BROOT_build directory
cachefile="%s/.compile_cache.json"%os.environ["FAIRLIBDIR"]
headers_base=None
incpath=None
symbols=None

flatstring=partial(reduce, lambda a,b:"%s %s"%(a,b))

def run(arglist):
    return check_output(flatstring(arglist), shell=True)

class filenames:
    def __init__(self, base):
        m=re.match("(.*)[.]C", base)
        if m:
            macrobase=m.group(1)
        else:
            macrobase=base
        self.base=os.path.split(macrobase)
        if (self.base[0]==""):
            self.base=(".", self.base[1])
    def macro(self):
        return "%s/%s.C"%self.base
    def header(self):
        return "%s/.%s.autocompile.h"%self.base
    def cxx(self):
        return "%s/.%s.autocompile.cxx"%self.base
    def obj(self):
        return "%s/.%s.autocompile.o"%self.base
    def elf(self):
        return "%s/%s.elf"%self.base

def generate_cache():
    print "generating cache, this may take a while"
    ## headers ######################################################
    def goodheader(x):
        basename, dirname=x
        # for root and FairRoot, we enforce class prefixes.
        # for R3BROOT, people don't care, so we don't.
        classbypath={"root6":"T", "R3BRoot":"", "FairRoot":"Fair"}
        ok=False
        for k,v in classbypath.items():
            ok |= dirname.find(k)!=-1 and basename.startswith(v)
        # header files in the macros subdir are probably autogenerated
        # by us, ignore them. 
        ok &= dirname.find("/macros/")==-1
        if not ok:
            print "Ignoring header %s" % (x,)
        return ok
    
    include_search_pathes=[os.environ["SIMPATH"]+"/include",\
                           os.environ["VMCWORKDIR"]+"/"]\
                           +os.environ["ROOT_INCLUDE_PATH"].split(":")
    r=check_output(["find"]+include_search_pathes+["-name","*.h"])
    headers=map(os.path.split, r.split("\n"))
    if headers[-1]==("", ""): 
        del headers[-1] #results from trailing newline of find
    headers_base=dict(map(lambda x:(x[1].split(".")[0], x[0]), headers))
    headers_base=dict(filter(goodheader, headers_base.items()))
    incpath=set() ###############################################
    # note for future self (again):
    # for $P/foo/bar/baz.h, $P in include_search_pathes
    # we want $P, $P/foo and $P/foo/bar in incpath
    # as we do not know if a header might include
    # foo/bar/baz.h, bar/baz.h or baz.h.
    # So we start at $P/foo/bar and move up until we pass $P
    def rec_add_path(p):
        if not reduce(operator.__or__,
                      map(p.startswith, include_search_pathes)):
            return
        if not p in incpath:
            incpath.add(p)
            rec_add_path(os.path.dirname(p)+"/")
    map(rec_add_path, headers_base.values())
    symbols=dict() ##################################################
    library_search_pathes=[os.environ["SIMPATH"]+"/lib"]\
                           +os.environ["LD_LIBRARY_PATH"].split(":")
    libs=check_output(["find"]+library_search_pathes+["-iname","*.so"])\
          .split("\n")[:-1]
    libs=set(map(os.path.realpath, libs))
    ignore_syms=set(["__bss_start", "_edata", "_end", "_fini","_init"])
    for s in ignore_syms:
        symbols[s]=None
    start=time.time()
    for l in libs:
        print "scanning %s (%d symbols so far, %f/s)"\
            %(l, len(symbols.keys()),
              len(symbols.keys())/(time.time()-start))
        try:
            for s in check_output(["nm", "--defined-only", "-D", l])\
                .split("\n")[:-1]:
                addr,t,sym=s.split(" ")
                if sym in symbols:
                    if (symbols[sym] and t not in "uvVW"):
                        print "symbol %40s is in (%s, %s)" %(sym,
                                                             symbols[sym][0],
                                                             symbols[sym][1])
                        print " %40s and also in (%s, %s)"%("", l, t)
                        symbols[sym]=None
                else:
                    symbols[sym]=(l,t)
        except subprocess.CalledProcessError:
            pass
    cache=open(cachefile, "w")
    d={"headers_base":list(headers_base), "incpath":list(incpath),
       "symbols":symbols}
    cache.write(json.dumps(d, indent=4))
    cache.close()
    
def load_cache():
    global headers_base, incpath, symbols
    print "loading symbol/header cache from %s"%cachefile
    cache=open(cachefile, "r")
    d=json.load(cache)
    headers_base=d["headers_base"]
    incpath=d["incpath"]
    symbols=d["symbols"]
    cache.close()

def init_cache():
    try:
        load_cache()
    except:
        print "load_cache failed:"
        exc_type, exc_value, exc_traceback=sys.exc_info()
        traceback.print_exception(exc_type, exc_value, exc_traceback,
                                  limit=2, file=sys.stdout)
        print "now trying to regenerate cache"
        generate_cache()
        load_cache()

def generate_header(base):
    macrotext=open(base.macro(), "r").read()
    header=open(base.header(), "w")
    for h in headers_base:
        if macrotext.find(h)!=-1\
           or (h[0]=='T' and macrotext.find("g%s"%h[1:])!=-1): #globals
            header.write("#include <%s.h>\n"%h)
    header.close()

def generate_cxx(base):
    cxx=open(base.cxx(), "w")
    cxx.write('#include "%s"\n'%basename(base.header()))
    cxx.write('using namespace std;\n')
    #cxx.write('#define __CINT__ 1\n') # after the includes only
    cxx.write('#include "%s"\n'%basename(base.macro()))
    cxx.write('int main(){%s(); return 0;}\n'%base.base[1])
    cxx.close()
    
def try_compile(base):
    r=run(["g++",  "-g", "-O0", "-D__AUTOCOMPILE__=1",
           "--std=c++11","-c", base.cxx(),
           "-o", base.obj()]
          +os.environ.get("CXXFLAGS", "").split()
          +map(lambda x:"-I%s"%x, incpath))

def try_link(base):
    nmre=re.compile("[ ]*[^ ] (.*)")
    neededlibs=set()
    for s in run(["nm", "--undefined-only", base.obj()])\
        .split("\n")[:-1]:
        sym=nmre.match(s).group(1)
        if sym in symbols:
            neededlibs.add(symbols[sym][0])
    r=run(["g++", "-g", "-o", base.elf(), "--std=c++11", base.obj()]
          +os.environ.get("LDFLAGS", "").split()
          +map(lambda x:"%s"%x, neededlibs))

#precompile_header("run_sim")
if __name__=="__main__":
    if len(sys.argv)==1:
        print "usage: %s macro.C" % sys.argv[0]
        print "read py file for more info."
        exit(0)
    base=filenames(sys.argv[1])
    init_cache()
    generate_header(base)
    generate_cxx(base)
    try_compile(base)
    try_link(base)
    print "%s generated." %base.elf()
