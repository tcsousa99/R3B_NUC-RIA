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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/neuland/shared/G__R3BNeulandSharedDict.cxx -rmf /work/R3BRoot/build/lib/libR3BNeulandShared.rootmap -rml R3BNeulandShared.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bbase -I/work/R3BRoot/neuland/shared -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include ClusteringEngine.h ElasticScattering.h Filterable.h TCAConnector.h Validated.h IsElastic.h R3BNeulandGeoPar.h R3BNeulandContFact.h R3BNeulandVisualizer.h R3BNeulandCommon.h NeulandSharedLinkDef.h
