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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/r3bgen/G__R3BGenDict.cxx -rmf /work/R3BRoot/build/lib/libR3BGen.rootmap -rml R3BGen.so  -inlineInputHeader -c   -I/work/R3BRoot/field -I/work/R3BRoot/generators -I/work/R3BRoot/r3bgen -I/work/R3BRoot/r3bdata -I/opt/fairsoft/include/Geant4 -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BSpecificGenerator.h R3BReadKinematics.h R3BCDGenerator.h R3BBeamInfo.h R3BBackTracking.h R3BBackTrackingStorageState.h R3BAsciiGenerator.h R3BCosmicGenerator.h R3BCryAsciiGenerator.h R3Bp2pGenerator.h R3BLandGenerator.h R3BCALIFATestGenerator.h R3BParticleGenerator.h R3BIonGenerator.h R3BGammaGenerator.h R3BPhaseSpaceGenerator.h R3BDistribution1D.h R3BDistribution2D.h R3BDistribution3D.h R3Bp2pevtGenerator.h R3BParticleSelector.h R3BBeamProperties.h R3BGenLinkDef.h
