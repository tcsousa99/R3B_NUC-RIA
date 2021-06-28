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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/neuland/reconstruction/G__R3BNeulandReconstructionDict.cxx -rmf /work/R3BRoot/build/lib/libR3BNeulandReconstruction.rootmap -rml R3BNeulandReconstruction.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bbase -I/work/R3BRoot/neuland/shared -I/work/R3BRoot/neuland/reconstruction -I/work/R3BRoot/neuland/reconstruction/multiplicity -I/work/R3BRoot/neuland/reconstruction/neutrons -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include multiplicity/R3BNeulandMultiplicityBayes.h multiplicity/R3BNeulandMultiplicityBayesPar.h multiplicity/R3BNeulandMultiplicityBayesTrain.h multiplicity/R3BNeulandMultiplicityCalorimetric.h multiplicity/R3BNeulandMultiplicityCalorimetricPar.h multiplicity/R3BNeulandMultiplicityCalorimetricTrain.h multiplicity/R3BNeulandMultiplicityCheat.h multiplicity/R3BNeulandMultiplicityFixed.h neutrons/R3BNeulandNeutronsCheat.h neutrons/R3BNeulandNeutronsRValue.h R3BNeulandReconstructionContFact.h R3BNeulandNeutronReconstructionMon.h R3BNeulandNeutronReconstructionStatistics.h NeulandReconstructionLinkDef.h
