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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/music/G__R3BMusicDict.cxx -rmf /work/R3BRoot/build/lib/libR3BMusic.rootmap -rml R3BMusic.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/music -I/work/R3BRoot/tracking -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/musicData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BMusic.h R3BMusicCalPar.h R3BMusicHitPar.h R3BMusicContFact.h R3BMusicMapped2Cal.h R3BMusicCal2Hit.h R3BMusicOnlineSpectra.h MusicLinkDef.h
