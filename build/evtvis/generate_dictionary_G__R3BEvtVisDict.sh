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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/evtvis/G__R3BEvtVisDict.cxx -rmf /work/R3BRoot/build/lib/libR3BEvtVis.rootmap -rml R3BEvtVis.so  -inlineInputHeader -c   -I/work/R3BRoot/field -I/work/R3BRoot/geane -I/work/R3BRoot/califa -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/eventdisplay -I/work/R3BRoot/r3bdata -I/work/R3BRoot/evtvis -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BEventManager.h R3BEventManagerEditor.h R3BCalifaEventDisplay.h R3BCalifaHitEventDisplay.h R3BMCTracks.h R3BIonName.h R3BEventDisplayLinkDef.h
