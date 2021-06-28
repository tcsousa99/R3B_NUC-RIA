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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/field/G__FieldDict.cxx -rmf /work/R3BRoot/build/lib/libField.rootmap -rml Field.so  -inlineInputHeader -c   -I/work/R3BRoot/field -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BFieldConst.h R3BFieldContFact.h R3BFieldMap.h R3BFieldPar.h R3BFieldCreator.h R3BGladFieldMap.h R3BFieldInterp.h R3BAladinFieldMap.h FieldLinkDef.h
