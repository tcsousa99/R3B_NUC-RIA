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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/startrack/G__R3BStartrackDict.cxx -rmf /work/R3BRoot/build/lib/libR3BStartrack.rootmap -rml R3BStartrack.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/startrack -I/work/R3BRoot/startrack/unpack -I/work/R3BRoot/startrack/unpack/B4Ucesb -I/work/R3BRoot/startrack/unpack/par -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/xballData -I/work/R3BRoot/r3bdata/califaData -I/work/R3BRoot/r3bdata/dchData -I/work/R3BRoot/r3bdata/gfiData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/startrackData -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BStartrack.h R3BGeoStartrack.h R3BGeoStartrackPar.h R3BStartrackContFact.h R3BStartrackDigit.h R3BStartrackEvent.h unpack/R3BStartrackUnpack.h unpack/R3BStartrackMapped2Cal.h unpack/R3BStartrackCal2Hit.h unpack/B4Ucesb/R3BStartrackRawHit.h unpack/B4Ucesb/R3BStartrackRawAna.h unpack/B4Ucesb/R3BStartrackRecTS.h unpack/B4Ucesb/R3BStartrackOrderTS.h unpack/B4Ucesb/R3BStartrackStripAna.h unpack/B4Ucesb/R3BStartrackCalib.h unpack/B4Ucesb/R3BStartrackCalibPar.h unpack/B4Ucesb/R3BStartrackCalibParFinder.h unpack/par/R3BStartrackMapped2CalPar.h unpack/par/R3BStartrackHitPar.h StartrackLinkDef.h
