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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/strawtubes/G__R3BStrawtubesDict.cxx -rmf /work/R3BRoot/build/lib/libR3BStrawtubes.rootmap -rml R3BStrawtubes.so  -inlineInputHeader -c   -I/work/R3BRoot/strawtubes -I/work/R3BRoot/r3bdata/strawtubesData -I/work/R3BRoot/tcal -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BStrawtubesMapped2Cal.h R3BStrawtubesMapped2CalPar.h R3BStrawtubesCal2Hit.h StrawtubesLinkDef.h
