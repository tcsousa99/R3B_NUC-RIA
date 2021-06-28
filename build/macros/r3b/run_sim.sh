#!/bin/bash

# This macro is needed to start the Root macros used for automatic testing
# from inside CMake using the add_test functionality. Since the tests
# starts with a fresh environment on has to set first the correct environment
# needed to run FairRoot.
# Also parameters defined in add_test will be converted in the correct format
# to be passed to root.

# Setup the needed environment
export LD_LIBRARY_PATH=/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib:$DYLD_LIBRARY_PATH
export PATH=/opt/fairsoft/bin:$PATH:/opt/fairsoft/lib/Geant4-10.5.1
export ROOTSYS=/opt/fairsoft
export ROOTEXE=/opt/fairsoft/bin/root.exe
export ROOT_INCLUDE_PATH=/opt/fairsoft/include/TGeant3:/opt/fairroot/include
export FAIRROOTPATH="/opt/fairroot"
export VMCWORKDIR=/work/R3BRoot
export Geant4VMC_MACRO_DIR=Geant4VMC_MACRO_DIR-NOTFOUND
export USE_VGM=1
export BOOST=1

####################### Create the data set variables for Geant4 #############
export G4NEUTRONHPDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4NDL4.5
export G4LEDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4EMLOW7.7
export G4LEVELGAMMADATA=/opt/fairsoft/share/Geant4-10.5.1/data/PhotonEvaporation5.3
export G4RADIOACTIVEDATA=/opt/fairsoft/share/Geant4-10.5.1/data/RadioactiveDecay5.3
export G4PARTICLEXSDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4PARTICLEXS1.1
export G4PIIDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4PII1.3
export G4REALSURFACEDATA=/opt/fairsoft/share/Geant4-10.5.1/data/RealSurface2.1.1
export G4SAIDXSDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4SAIDDATA2.0
export G4ABLADATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4ABLA3.1
export G4INCLDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4INCL1.0
export G4ENSDFSTATEDATA=/opt/fairsoft/share/Geant4-10.5.1/data/G4ENSDFSTATE2.2
##############################################################################


export G3SYS="/opt/fairsoft/share/Geant3-2.7.0"
export PYTHIA8DATA="/opt/fairsoft/share/pythia8/xmldoc"
if [ -e /opt/fairsoft/lib/Geant4-10.5.1/env.sh ]; then
  . /opt/fairsoft/lib/Geant4-10.5.1/env.sh
fi

# Concatenate all parameters given on the command line to one
# comma separated string
parameters=""
for i in $*; do
  if [ -z $parameters ]; then
    parameters=$i
  else
    parameters=$(echo "$parameters,$i")
  fi
done

cd /work/R3BRoot/build/macros/r3b

# execute root with the defined macro and the command line parameters
$ROOTEXE -q -b /work/R3BRoot/macros/r3b/run_sim.C\($parameters\)
