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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/land/G__R3BLandDict.cxx -rmf /work/R3BRoot/build/lib/libR3BLand.rootmap -rml R3BLand.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/land -I/work/R3BRoot/los -I/work/R3BRoot/r3bdata/ -I/work/R3BRoot/r3bdata/caloData -I/work/R3BRoot/r3bdata/dchData -I/work/R3BRoot/r3bdata/gfiData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/r3bdata/trackerData -I/work/R3BRoot/tcal -I/work/R3BRoot/neuland/unpack -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BLand.h R3BGeoLand.h R3BGeoLandPar.h R3BLandContFact.h R3BLandDigitizer.h R3BLandDigitizerQA.h R3BNeutronTracker.h R3BLandDigiPar.h R3BNeuLandCluster.h R3BNeuLandClusterFinder.h R3BNeutronCalibr2D.h R3BPrimPart.h R3BNeutronTracker2D.h R3BNeutHit.h LandLinkDef.h
