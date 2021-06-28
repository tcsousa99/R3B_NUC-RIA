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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/fi2b/G__R3BFi2bDict.cxx -rmf /work/R3BRoot/build/lib/libR3BFi2b.rootmap -rml R3BFi2b.so  -inlineInputHeader -c   -I/work/R3BRoot/fi2b -I/work/R3BRoot/fiber -I/work/R3BRoot/r3bbase -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/tcal -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BFi2bCal2Hit.h R3BFi2bMapped2Cal.h Fi2bLinkDef.h