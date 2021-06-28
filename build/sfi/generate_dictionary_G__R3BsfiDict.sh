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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/sfi/G__R3BsfiDict.cxx -rmf /work/R3BRoot/build/lib/libR3Bsfi.rootmap -rml R3Bsfi.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/psp -I/work/R3BRoot/fi4 -I/work/R3BRoot/fi6 -I/work/R3BRoot/fi5 -I/work/R3BRoot/sfi -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/calData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/trackerData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3Bsfi.h R3BsfiDigitizer.h sfiLinkDef.h
