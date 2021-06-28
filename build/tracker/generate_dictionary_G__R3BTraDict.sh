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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/tracker/G__R3BTraDict.cxx -rmf /work/R3BRoot/build/lib/libR3BTra.rootmap -rml R3BTra.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/xball -I/work/R3BRoot/califa -I/work/R3BRoot/tracker -I/work/R3BRoot/r3bdata -I/work/R3BRoot/tcal -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/r3bdata/dchData -I/work/R3BRoot/r3bdata/gfiData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/trackerData -I/work/R3BRoot/tracker/unpackams -I/work/R3BRoot/r3bdata/amsData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BTra.h R3BGeoTra.h R3BGeoTraPar.h R3BTraContFact.h R3BTraDigiPar.h R3BTraDigitizer.h R3BTargetDigiPar.h R3BTargetDigitizer.h R3BTra2pDigiPar.h R3BTra2pDigitizer.h R3BTraFraDigiPar.h R3BTraFraDigitizer.h R3BTarget2pDigiPar.h R3BTarget2pDigitizer.h R3BTraHitFinder.h unpackams/R3BAmsStripCalPar.h unpackams/R3BAmsMappingPar.h unpackams/R3BAmsMapped2StripCalPar.h unpackams/R3BAmsMapped2StripCal.h unpackams/R3BAmsStripCal2Hit.h unpackams/R3BAmsOnlineSpectra.h unpackams/R3BAmsCalifaCorrelatedOnlineSpectra.h TraLinkDef.h
