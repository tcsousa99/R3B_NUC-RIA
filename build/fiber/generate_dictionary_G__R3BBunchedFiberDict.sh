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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/fiber/G__R3BBunchedFiberDict.cxx -rmf /work/R3BRoot/build/lib/libR3BBunchedFiber.rootmap -rml R3BBunchedFiber.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/fiber -I/work/R3BRoot/tcal -I/work/R3BRoot/r3bdata -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BBunchedFiberMapped2CalPar.h R3BBunchedFiberMapped2Cal.h R3BBunchedFiberCal2Hit.h R3BBunchedFiberHitModulePar.h R3BBunchedFiberHitPar.h R3BFiberContFact.h R3BBunchedFiberSPMTTrigMapped2CalPar.h R3BBunchedFiberSPMTTrigMapped2Cal.h R3BBunchedFiberSPMTTrigDigitizerCal.h BunchedFiberLinkDef.h
