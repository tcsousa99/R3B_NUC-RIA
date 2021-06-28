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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/califa/G__R3BCalifaDict.cxx -rmf /work/R3BRoot/build/lib/libR3BCalifa.rootmap -rml R3BCalifa.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/califa -I/work/R3BRoot/tracking -I/work/R3BRoot/califa/online -I/work/R3BRoot/califa/calibration -I/work/R3BRoot/califa/ana -I/work/R3BRoot/califa/pars -I/work/R3BRoot/califa/sim -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/wrData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include -I/opt/fairsoft/include ./sim/R3BCalifa.h ./sim/R3BCalifaDigitizer.h ./pars/R3BCalifaContFact.h ./pars/R3BCalifaGeometry.h ./pars/R3BCalifaMappingPar.h ./pars/R3BCalifaCrystalCalPar.h ./pars/R3BCalifaTotCalPar.h ./pars/R3BCalifaHitPar.h ./pars/R3BCalifaCrystalPars4Sim.h ./calibration/R3BCalifaMapped2CrystalCalPar.h ./calibration/R3BCalifaCrystalCal2TotCalPar.h ./calibration/R3BCalifaMapped2CrystalCal.h ./calibration/R3BCalifaCrystalCal2Hit.h ./calibration/R3BCalifaCrystalCal2CrystalCalPID.h ./online/R3BCalifaOnlineSpectra.h ./online/R3BCalifaDemoOnlineSpectra.h ./ana/R3BCalifaCrystalCalDataAnalysis.h CalifaLinkDef.h
