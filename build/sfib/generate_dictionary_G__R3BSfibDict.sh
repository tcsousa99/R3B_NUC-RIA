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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/sfib/G__R3BSfibDict.cxx -rmf /work/R3BRoot/build/lib/libR3BSfib.rootmap -rml R3BSfib.so  -inlineInputHeader -c   -I/work/R3BRoot/sfib -I/work/R3BRoot/r3bbase -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/sfibData -I/work/R3BRoot/tcal -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BSfibMapped2Cal.h R3BSfibMapped2CalPar.h R3BSfibCal2Hit.h SfibLinkDef.h
