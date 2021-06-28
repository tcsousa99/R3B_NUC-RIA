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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/fi6/G__R3BFi6Dict.cxx -rmf /work/R3BRoot/build/lib/libR3BFi6.rootmap -rml R3BFi6.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/fi4 -I/work/R3BRoot/fi6 -I/work/R3BRoot/fiber -I/work/R3BRoot/r3bbase -I/work/R3BRoot/r3bdata -I/work/R3BRoot/tcal -I/work/R3BRoot/tracking -I/work/R3BRoot/r3bdata/calData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/fi4Data -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/trackerData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BFi6.h R3BFi6Mapped2CalPar.h R3BFi6Mapped2Cal.h R3BFi6Cal2Hit.h R3BFi6ContFact.h Fi6LinkDef.h
