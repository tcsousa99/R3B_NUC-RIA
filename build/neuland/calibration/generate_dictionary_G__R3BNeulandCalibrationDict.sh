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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/neuland/calibration/G__R3BNeulandCalibrationDict.cxx -rmf /work/R3BRoot/build/lib/libR3BNeulandCalibration.rootmap -rml R3BNeulandCalibration.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bbase -I/work/R3BRoot/neuland/shared -I/work/R3BRoot/neuland/calibration -I/work/R3BRoot/neuland/shared -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/tcal -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BNeulandMappedHist.h R3BNeulandMapped2Cal.h R3BNeulandMapped2CalPar.h R3BNeulandTacquilaMapped2Cal.h R3BNeulandTacquilaMapped2CalPar.h R3BNeulandTacquilaMapped2QCalPar.h R3BNeulandHitHist.h R3BNeulandHitPar.h R3BNeulandCosmicTracker.h R3BNeulandHitCalibrationEngine.h R3BNeulandHitCalibrationBar.h R3BNeulandTSyncer.h LSQR.h R3BNeulandCal2HitPar.h R3BNeulandParFact.h R3BNeulandCal2Hit.h R3BNeulandHitModulePar.h R3BNeulandQCalPar.h R3BNeulandQCalFiller.h NeulandCalibrationLinkDef.h
