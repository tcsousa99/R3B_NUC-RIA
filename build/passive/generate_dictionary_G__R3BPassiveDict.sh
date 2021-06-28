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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/passive/G__R3BPassiveDict.cxx -rmf /work/R3BRoot/build/lib/libR3BPassive.rootmap -rml R3BPassive.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/field -I/work/R3BRoot/passive -I/work/R3BRoot/tracking -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BCave.h R3BGeoCave.h R3BGeoGDML.h R3BGeoMagnet.h R3BGeoPassivePar.h R3BGeoPipe.h R3BGeoVacVesselCool.h R3BGeoTarget.h R3BAladinMagnet.h R3BGladMagnet.h R3BNeutronWindowAndSomeAir.h R3BPassiveContFact.h R3BPipe.h R3BVacVesselCool.h R3BTarget.h R3BCollimator.h PassiveLinkDef.h
