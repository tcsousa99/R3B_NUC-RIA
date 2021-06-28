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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/tracking/G__R3BTrackingDict.cxx -rmf /work/R3BRoot/build/lib/libR3BTracking.rootmap -rml R3BTracking.so  -inlineInputHeader -c   -I/work/R3BRoot/tracking -I/work/R3BRoot/field -I/work/R3BRoot/tof -I/work/R3BRoot/passive -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/pspData -I/work/R3BRoot/r3bdata/fibData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BTPropagator.h R3BTGeoPar.h R3BFragmentTracker.h R3BFragmentFitterGeneric.h R3BFragmentFitterChi2.h R3BTrackingDetector.h R3BTrackingParticle.h R3BTrackingSetup.h TrackingLinkDef.h
