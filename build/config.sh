#!/bin/bash

export Linux_Flavour_="Debian GNU/Linux 9.5 (stretch)"
export System_="x86_64"
. /work/R3BRoot/build/check_system.sh
if [ $same_system -eq 1 ]; then
	export SIMPATH="/opt/fairsoft"
	export ROOTSYS="/opt/fairsoft"
	export FAIRROOTPATH="/opt/fairroot"
	export R3BROOTPATH="/usr/local"
  if (true); then
    export Geant4_INCLUDE_DIRS="/opt/fairsoft/include/Geant4"
    export Geant4VMC_INCLUDE_DIRS="/opt/fairsoft/include/geant4vmc:/opt/fairsoft/include/g4root"
    export Geant4VMC_LIBRARY_DIR="lib"
    export Geant4VMC_MACRO_DIR="Geant4VMC_MACRO_DIR-NOTFOUND"
    export PLUTO_LIBRARY_DIR=""
    export PLUTO_INCLUDE_DIR=""
    export PYTHIA6_LIBRARY_DIR="/opt/fairsoft/lib"
    export Geant3_INCLUDE_DIRS="/opt/fairsoft/include/TGeant3"
    export G3SYS="/opt/fairsoft/share/Geant3-2.7.0"
    export Geant3_LIBRARY_DIR="/opt/fairsoft/lib/Geant3-2.7.0/lib"
    export USE_VGM="1"
    export PYTHIA8DATA="/opt/fairsoft/share/pythia8/xmldoc"
    export CLASSPATH=""

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

  fi
  export Geant3_INCLUDE_DIRS="/opt/fairsoft/include/TGeant3"
  export ROOT_LIBRARY_DIR="/opt/fairsoft/lib/root"
  export ROOT_LIBRARIES="-L/opt/fairsoft/lib/root -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -pthread -Wl,-rpath,/opt/fairsoft/lib/root -lm -ldl -rdynamic"
  export ROOT_INCLUDE_DIR="/opt/fairsoft/include/root6"
  export ROOT_INCLUDE_PATH="/opt/fairsoft/include/TGeant3:/opt/fairroot/include"
  export VMCWORKDIR="/work/R3BRoot"
  export FAIRLIBDIR="/work/R3BRoot/build/lib"
  export PYTHONPATH="/work/R3BRoot/python:/opt/fairsoft/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib/Geant4:/opt/fairsoft/lib/g4py"
	case $1 in
		-a | --append )
			export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:""
			export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:"/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib"
			export PATH=$PATH:"/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
			;;
		-p | --prepend )
			export DYLD_LIBRARY_PATH="":$DYLD_LIBRARY_PATH
			export LD_LIBRARY_PATH="/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib":$LD_LIBRARY_PATH
			export PATH="/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin":$PATH
			;;
		* )
			export DYLD_LIBRARY_PATH=""
			export LD_LIBRARY_PATH="/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib"
			export PATH="/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
			;;
	esac
fi
