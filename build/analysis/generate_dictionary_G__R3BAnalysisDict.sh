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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/analysis/G__R3BAnalysisDict.cxx -rmf /work/R3BRoot/build/lib/libR3BAnalysis.rootmap -rml R3BAnalysis.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/analysis -I/work/R3BRoot/los -I/work/R3BRoot/rolu -I/work/R3BRoot/sci2 -I/work/R3BRoot/sci8 -I/work/R3BRoot/tof -I/work/R3BRoot/tcal -I/work/R3BRoot/fiber -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/beammonitorData -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/r3bdata/startrackData -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/r3bdata/roluData -I/work/R3BRoot/r3bdata/sci2Data -I/work/R3BRoot/r3bdata/sci8Data -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/pdcData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/fibData -I/work/R3BRoot/r3bdata/ptofData -I/work/R3BRoot/r3bdata/sampData -I/work/R3BRoot/r3bdata/sfibData -I/work/R3BRoot/r3bdata/musicData -I/work/R3BRoot/r3bdata/frsData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BAnalysisIncomingFrs.h R3BAnaLinkDef.h
