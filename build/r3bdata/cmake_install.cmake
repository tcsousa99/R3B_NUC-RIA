# Install script for directory: /work/R3BRoot/r3bdata

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/work/R3BRoot/r3bdata/R3BMCStack.h"
    "/work/R3BRoot/r3bdata/R3BMCTrack.h"
    "/work/R3BRoot/r3bdata/wrData/R3BWRMasterData.h"
    "/work/R3BRoot/r3bdata/wrData/R3BWRCalifaData.h"
    "/work/R3BRoot/r3bdata/wrData/R3BWRAmsData.h"
    "/work/R3BRoot/r3bdata/R3BHit.h"
    "/work/R3BRoot/r3bdata/R3BTrack.h"
    "/work/R3BRoot/r3bdata/R3BDouble.h"
    "/work/R3BRoot/r3bdata/xballData/R3BXBallPoint.h"
    "/work/R3BRoot/r3bdata/xballData/R3BXBallCrystalHit.h"
    "/work/R3BRoot/r3bdata/xballData/R3BXBallCrystalHitSim.h"
    "/work/R3BRoot/r3bdata/califaData/R3BCalifaCrystalCalData.h"
    "/work/R3BRoot/r3bdata/califaData/R3BCalifaMappedData.h"
    "/work/R3BRoot/r3bdata/califaData/R3BCalifaHitData.h"
    "/work/R3BRoot/r3bdata/califaData/R3BCalifaPoint.h"
    "/work/R3BRoot/r3bdata/hpgeData/R3BHPGeDetHit.h"
    "/work/R3BRoot/r3bdata/hpgeData/R3BHPGeDetPoint.h"
    "/work/R3BRoot/r3bdata/dchData/R3BDchPoint.h"
    "/work/R3BRoot/r3bdata/dchData/R3BDchFullPoint.h"
    "/work/R3BRoot/r3bdata/gfiData/R3BGfiPoint.h"
    "/work/R3BRoot/r3bdata/mtofData/R3BmTofPoint.h"
    "/work/R3BRoot/r3bdata/mtofData/R3BmTofDigi.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofPoint.h"
    "/work/R3BRoot/r3bdata/vetoData/R3BVetoPoint.h"
    "/work/R3BRoot/r3bdata/lumonData/ELILuMonPoint.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTraPoint.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTraHit.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BSitrackerHit.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTrackerHit.h"
    "/work/R3BRoot/r3bdata/startrackData/R3BStartrackPoint.h"
    "/work/R3BRoot/r3bdata/startrackData/R3BStartrackHit.h"
    "/work/R3BRoot/r3bdata/startrackData/R3BStartrackerDigitHit.h"
    "/work/R3BRoot/r3bdata/startrackData/R3BStartrackMappedData.h"
    "/work/R3BRoot/r3bdata/startrackData/R3BStartrackCalData.h"
    "/work/R3BRoot/r3bdata/landData/R3BLandPoint.h"
    "/work/R3BRoot/r3bdata/landData/R3BLandDigi.h"
    "/work/R3BRoot/r3bdata/landData/R3BLandFirstHits.h"
    "/work/R3BRoot/r3bdata/landData/R3BLandHit.h"
    "/work/R3BRoot/r3bdata/landData/R3BPaddleCrystalHit.h"
    "/work/R3BRoot/r3bdata/landData/R3BNeutronTrack.h"
    "/work/R3BRoot/r3bdata/dchData/R3BDchDigi.h"
    "/work/R3BRoot/r3bdata/dchData/R3BDch2pDigi.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofDigi.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTof2pDigi.h"
    "/work/R3BRoot/r3bdata/gfiData/R3BGfiDigi.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTraDigi.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTra2pDigi.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTraFraDigi.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTargetDigi.h"
    "/work/R3BRoot/r3bdata/trackerData/R3BTarget2pDigi.h"
    "/work/R3BRoot/r3bdata/mfiData/R3BMfiPoint.h"
    "/work/R3BRoot/r3bdata/mfiData/R3BMfiDigi.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspPoint.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspDigi.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandTacquilaMappedData.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandCalData.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandPoint.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandHit.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandMultiplicity.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandCluster.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BNeulandNeutron.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspxMappedData.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspxPrecalData.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspxCalData.h"
    "/work/R3BRoot/r3bdata/pspData/R3BPspxHitData.h"
    "/work/R3BRoot/r3bdata/losData/R3BLosMappedData.h"
    "/work/R3BRoot/r3bdata/losData/R3BLosCalData.h"
    "/work/R3BRoot/r3bdata/losData/R3BLosHitData.h"
    "/work/R3BRoot/r3bdata/roluData/R3BRoluMappedData.h"
    "/work/R3BRoot/r3bdata/roluData/R3BRoluCalData.h"
    "/work/R3BRoot/r3bdata/roluData/R3BRoluHitData.h"
    "/work/R3BRoot/r3bdata/sci2Data/R3BSci2MappedData.h"
    "/work/R3BRoot/r3bdata/sci2Data/R3BSci2TcalData.h"
    "/work/R3BRoot/r3bdata/sci2Data/R3BSci2CalData.h"
    "/work/R3BRoot/r3bdata/sci2Data/R3BSci2HitData.h"
    "/work/R3BRoot/r3bdata/sci8Data/R3BSci8MappedData.h"
    "/work/R3BRoot/r3bdata/sci8Data/R3BSci8CalData.h"
    "/work/R3BRoot/r3bdata/sci8Data/R3BSci8HitData.h"
    "/work/R3BRoot/r3bdata/actarData/R3BActarPoint.h"
    "/work/R3BRoot/r3bdata/strawtubesData/R3BStrawtubesMappedData.h"
    "/work/R3BRoot/r3bdata/strawtubesData/R3BStrawtubesCalData.h"
    "/work/R3BRoot/r3bdata/strawtubesData/R3BStrawtubesHitData.h"
    "/work/R3BRoot/r3bdata/neulandData/R3BPaddleTamexMappedData.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofdMappedData.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofdCalData.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofdHitData.h"
    "/work/R3BRoot/r3bdata/tofData/R3BPaddleCalData.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofdPoint.h"
    "/work/R3BRoot/r3bdata/tofData/R3BTofdDigi.h"
    "/work/R3BRoot/r3bdata/tofData/R3BPtofHit.h"
    "/work/R3BRoot/r3bdata/pdcData/R3BPdcMappedData.h"
    "/work/R3BRoot/r3bdata/pdcData/R3BPdcCalData.h"
    "/work/R3BRoot/r3bdata/pdcData/R3BPdcHitData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BBunchedFiberCalData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BBunchedFiberHitData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BBunchedFiberMappedData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFi4Point.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFi4CalItem.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFi4HitItem.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFibMappedData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFibCalData.h"
    "/work/R3BRoot/r3bdata/fibData/R3BFibPoint.h"
    "/work/R3BRoot/r3bdata/amsData/R3BAmsMappedData.h"
    "/work/R3BRoot/r3bdata/amsData/R3BAmsStripCalData.h"
    "/work/R3BRoot/r3bdata/amsData/R3BAmsHitData.h"
    "/work/R3BRoot/r3bdata/beammonitorData/R3BBeamMonitorMappedData.h"
    "/work/R3BRoot/r3bdata/musicData/R3BMusicPoint.h"
    "/work/R3BRoot/r3bdata/musicData/R3BMusicMappedData.h"
    "/work/R3BRoot/r3bdata/musicData/R3BMusicCalData.h"
    "/work/R3BRoot/r3bdata/musicData/R3BMusicHitData.h"
    "/work/R3BRoot/r3bdata/sampData/R3BSamplerMappedData.h"
    "/work/R3BRoot/r3bdata/sfibData/R3BSfibMappedData.h"
    "/work/R3BRoot/r3bdata/sfibData/R3BSfibCalData.h"
    "/work/R3BRoot/r3bdata/sfibData/R3BSfibHitData.h"
    "/work/R3BRoot/r3bdata/frsData/R3BFrsData.h"
    "/work/R3BRoot/r3bdata/R3BDetectorList.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/work/R3BRoot/build/lib/G__R3BDataDict_rdict.pcm"
    "/work/R3BRoot/build/lib/libR3BData.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/work/R3BRoot/build/lib/libR3BData.so.SOVERSION")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION"
         OLD_RPATH "/opt/fairsoft/lib/root:/opt/fairroot/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so.SOVERSION")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/work/R3BRoot/build/lib/libR3BData.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so"
         OLD_RPATH "/opt/fairsoft/lib/root:/opt/fairroot/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BData.so")
    endif()
  endif()
endif()

