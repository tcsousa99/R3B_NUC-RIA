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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/psp/G__R3BPspDict.cxx -rmf /work/R3BRoot/build/lib/libR3BPsp.rootmap -rml R3BPsp.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/psp -I/work/R3BRoot/psp/par -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/calData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/trackerData -I/work/R3BRoot/tracking -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BPsp.h R3BGeoPsp.h R3BPspDigiPar.h R3BPspDigitizer.h R3BPspxMapped2Precal.h R3BPspxPrecal2Cal.h R3BPspxCal2Hit.h R3BPspxOnlineSpectra.h par/R3BPspxMappedPar.h par/R3BPspxPrecalPar.h par/R3BPspxCalPar.h par/R3BPspxHitPar.h par/R3BPspxContFact.h PspLinkDef.h
