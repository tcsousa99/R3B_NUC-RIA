#!/bin/csh

setenv Linux_Flavour_ "Debian GNU/Linux 9.5 (stretch)"
setenv System_ "x86_64"
. /work/R3BRoot/build/check_system.csh
if ( "$same_system" == "1" ) then 
	setenv SIMPATH "/opt/fairsoft"
	setenv ROOTSYS "/opt/fairsoft"
	setenv FAIRROOTPATH "/opt/fairroot"
	setenv R3BROOTPATH "/usr/local"
	if ( true == true ) then
		setenv Geant4_INCLUDE_DIRS "/opt/fairsoft/include/Geant4"
		setenv Geant4VMC_INCLUDE_DIRS "/opt/fairsoft/include/geant4vmc:/opt/fairsoft/include/g4root"
		setenv Geant4VMC_LIBRARY_DIR "lib"
		setenv Geant4VMC_MACRO_DIR "Geant4VMC_MACRO_DIR-NOTFOUND"
		setenv PLUTO_LIBRARY_DIR ""
		setenv PLUTO_INCLUDE_DIR ""
		setenv PYTHIA6_LIBRARY_DIR "/opt/fairsoft/lib"
    setenv Geant3_INCLUDE_DIRS "/opt/fairsoft/include/TGeant3"
		setenv G3SYS "/opt/fairsoft/share/Geant3-2.7.0"
    setenv Geant3_LIBRARY_DIR "/opt/fairsoft/lib/Geant3-2.7.0/lib"
		setenv USE_VGM "1"
		setenv PYTHIA8DATA "/opt/fairsoft/share/pythia8/xmldoc"
		setenv CLASSPATH ""

    ####################### Create the data set variables for Geant4 #############
setenv G4NEUTRONHPDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4NDL4.5
setenv G4LEDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4EMLOW7.7
setenv G4LEVELGAMMADATA  /opt/fairsoft/share/Geant4-10.5.1/data/PhotonEvaporation5.3
setenv G4RADIOACTIVEDATA  /opt/fairsoft/share/Geant4-10.5.1/data/RadioactiveDecay5.3
setenv G4PARTICLEXSDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4PARTICLEXS1.1
setenv G4PIIDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4PII1.3
setenv G4REALSURFACEDATA  /opt/fairsoft/share/Geant4-10.5.1/data/RealSurface2.1.1
setenv G4SAIDXSDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4SAIDDATA2.0
setenv G4ABLADATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4ABLA3.1
setenv G4INCLDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4INCL1.0
setenv G4ENSDFSTATEDATA  /opt/fairsoft/share/Geant4-10.5.1/data/G4ENSDFSTATE2.2
##############################################################################


	endif
	setenv ROOT_LIBRARY_DIR "/opt/fairsoft/lib/root"
	setenv ROOT_LIBRARIES "-L/opt/fairsoft/lib/root -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -pthread -Wl,-rpath,/opt/fairsoft/lib/root -lm -ldl -rdynamic"
	setenv ROOT_INCLUDE_DIR "/opt/fairsoft/include/root6"
	setenv ROOT_INCLUDE_PATH "/opt/fairsoft/include/TGeant3:/opt/fairroot/include"
	setenv VMCWORKDIR "/work/R3BRoot"
	setenv FAIRLIBDIR "/work/R3BRoot/build/lib"
	setenv PYTHONPATH "/work/R3BRoot/python:/opt/fairsoft/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib/Geant4:/opt/fairsoft/lib/g4py"
	switch( $1 )
		case '-a' :
			setenv DYLD_LIBRARY_PATH $DYLD_LIBRARY_PATH:""
			setenv LD_LIBRARY_PATH $LD_LIBRARY_PATH:"/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib"
			setenv PATH $PATH:"/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
			breaksw
		case '-p' :
			setenv DYLD_LIBRARY_PATH="":$DYLD_LIBRARY_PATH
			setenv LD_LIBRARY_PATH="/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib":$LD_LIBRARY_PATH
			setenv PATH="/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin":$PATH
			echo "hello"
			breaksw
		case * :
			setenv DYLD_LIBRARY_PATH=""
			setenv LD_LIBRARY_PATH="/work/R3BRoot/build/lib:/opt/fairroot/lib:/opt/fairsoft/lib/root:/opt/fairsoft/lib"
			setenv PATH="/opt/fairsoft/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"
			breaksw
	endsw
endif
