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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/pdc/G__R3BPdcDict.cxx -rmf /work/R3BRoot/build/lib/libR3BPdc.rootmap -rml R3BPdc.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/pdc -I/work/R3BRoot/tcal -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/trackerData -I/work/R3BRoot/r3bdata/pdcData -I/work/R3BRoot/tracking -I/work/R3BRoot/r3bsource -I/work/R3BRoot/r3bsource/ext -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BGeoPdcPar.h R3BPdcContFact.h R3BPdcMapped2CalPar.h R3BPdcMapped2Cal.h R3BPdcCal2Hit.h PdcLinkDef.h
