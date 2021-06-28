#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/opt/fairsoft/lib/root::/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib
export DYLD_LIBRARY_PATH=/opt/fairsoft/lib/root::/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib
export ROOTSYS=/opt/fairsoft

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/fi9/G__R3BFi9Dict.cxx -rmf /work/R3BRoot/build/lib/libR3BFi9.rootmap -rml R3BFi9.so  -inlineInputHeader -c   -I/work/R3BRoot/fi9 -I/work/R3BRoot/fiber -I/work/R3BRoot/r3bbase -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/tcal -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BFi9Cal2Hit.h R3BFi9Mapped2Cal.h Fi9LinkDef.h
