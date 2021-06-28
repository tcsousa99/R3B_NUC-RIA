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

/opt/fairsoft/bin/rootcint -f /work/R3BRoot/build/tof/G__R3BTofDict.cxx -rmf /work/R3BRoot/build/lib/libR3BTof.rootmap -rml R3BTof.so  -inlineInputHeader -c   -I/work/R3BRoot/r3bbase -I/work/R3BRoot/passive -I/work/R3BRoot/tof -I/work/R3BRoot/los -I/work/R3BRoot/tcal -I/work/R3BRoot/r3bdata -I/work/R3BRoot/r3bdata/losData -I/work/R3BRoot/r3bdata/calData -I/work/R3BRoot/r3bdata/dchData -I/work/R3BRoot/r3bdata/gfiData -I/work/R3BRoot/r3bdata/mtofData -I/work/R3BRoot/r3bdata/tofData -I/work/R3BRoot/r3bdata/landData -I/work/R3BRoot/r3bdata/neulandData -I/work/R3BRoot/r3bdata/trackerData -I/work/R3BRoot/r3bdata/ptofData -I/work/R3BRoot/tracking -I/opt/fairsoft/include/root6 -I/opt/fairsoft/include -I/opt/fairroot/include R3BTof.h R3BGeoTof.h R3BGeoTofPar.h R3BTofContFact.h R3BTofDigiPar.h R3BTofDigitizer.h R3BTof2pDigiPar.h R3BTof2pDigitizer.h R3BTofdMapped2Cal.h R3BTofdMapped2CalPar.h R3BTofdCal2HitPar.h R3BTofdCal2Histo.h R3BTofdCal2HistoPar.h R3BTofdChangePar.h R3BTofdCal2Hit.h R3BTofdCal2HitS454.h R3BTofdHitModulePar.h R3BTofdHitPar.h R3BTofd.h R3BTofdDigitizer.h R3BTofdDigitizerCal.h R3BGeoTofd.h R3BGeoTofdPar.h R3BTofdContFact.h R3BTofdDigiPar.h R3BPtofMapped2CalPar.h R3BPtofMapped2Cal.h calibration/R3BPtofCal2HitPar.h calibration/R3BPtofCal2Hit.h calibration/R3BPtofHitPar.h calibration/R3BPtofParFact.h TofLinkDef.h
