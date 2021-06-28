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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/ctn/data/G__EnsarHPGeDetDataDict.cxx -rmf /work/R3BRoot/build/lib/libEnsarHPGeDetData.rootmap -rml EnsarHPGeDetData.so  -inlineInputHeader -c   -I/opt/fairsoft/include/root6 -I/opt/fairroot/include -I/work/R3BRoot/ctn/data -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include EnsarHPGeDetHit.h EnsarHPGeDetPoint.h EnsarHPGeDetDataLinkDef.h
