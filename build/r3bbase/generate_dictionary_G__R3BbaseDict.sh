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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/r3bbase/G__R3BbaseDict.cxx -rmf /work/R3BRoot/build/lib/libR3Bbase.rootmap -rml R3Bbase.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/beammonitorData -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/r3bdata/startrackData -I/work/R3BRoot/los -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/rolu -I/work/R3BRoot/r3bdata/roluData -I/work/R3BRoot/sci2 -I/work/R3BRoot/r3bdata/sci2Data -I/work/R3BRoot/sci8 -I/work/R3BRoot/r3bdata/sci8Data -I/work/R3BRoot/tof -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/pdcData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/tcal -I/work/R3BRoot/r3bdata/ptofData -I/work/R3BRoot/fiber -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/sampData -I/work/R3BRoot/r3bdata/sfibData -I/work/R3BRoot/r3bdata/musicData -I/work/R3BRoot/r3bdata/frsData -I/work/R3BRoot/r3bdata/hpgeData -I/work/R3BRoot/tracker_rene -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BModule.h R3BDetector.h R3BEventHeader.h R3BEventHeaderCal2Hit.h R3BOnlineSpectra.h R3BOnlineSpectraDec2019.h R3BOnlineSpectraPdc.h R3BOnlineSpectraSfib.h R3BGlobalAnalysis.h R3BGlobalAnalysisS454.h R3BTrackS454.h R3BTrackerTestS454.h R3BOnlineSpillAnalysis.h R3BOnlineSpectraFiberTofds515.h R3BOnlineSpectraLosStandalone.h R3BOnlineSpectraSci2.h R3BOnlineSpectraLosVsSci2.h R3BFileSource.h R3BLinkDef.h
