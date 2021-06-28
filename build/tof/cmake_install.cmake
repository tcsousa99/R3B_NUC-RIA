# Install script for directory: /work/R3BRoot/tof

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
    "/work/R3BRoot/tof/R3BTof.h"
    "/work/R3BRoot/tof/R3BGeoTof.h"
    "/work/R3BRoot/tof/R3BGeoTofPar.h"
    "/work/R3BRoot/tof/R3BTofContFact.h"
    "/work/R3BRoot/tof/R3BTofDigiPar.h"
    "/work/R3BRoot/tof/R3BTofDigitizer.h"
    "/work/R3BRoot/tof/R3BTof2pDigiPar.h"
    "/work/R3BRoot/tof/R3BTof2pDigitizer.h"
    "/work/R3BRoot/tof/R3BTofdMapped2Cal.h"
    "/work/R3BRoot/tof/R3BTofdMapped2CalPar.h"
    "/work/R3BRoot/tof/R3BTofdCal2HitPar.h"
    "/work/R3BRoot/tof/R3BTofdCal2Histo.h"
    "/work/R3BRoot/tof/R3BTofdCal2HistoPar.h"
    "/work/R3BRoot/tof/R3BTofdChangePar.h"
    "/work/R3BRoot/tof/R3BTofdCal2Hit.h"
    "/work/R3BRoot/tof/R3BTofdCal2HitS454.h"
    "/work/R3BRoot/tof/R3BTofdHitModulePar.h"
    "/work/R3BRoot/tof/R3BTofdHitPar.h"
    "/work/R3BRoot/tof/R3BTofd.h"
    "/work/R3BRoot/tof/R3BTofdDigitizer.h"
    "/work/R3BRoot/tof/R3BTofdDigitizerCal.h"
    "/work/R3BRoot/tof/R3BGeoTofd.h"
    "/work/R3BRoot/tof/R3BGeoTofdPar.h"
    "/work/R3BRoot/tof/R3BTofdContFact.h"
    "/work/R3BRoot/tof/R3BTofdDigiPar.h"
    "/work/R3BRoot/tof/R3BPtofMapped2CalPar.h"
    "/work/R3BRoot/tof/R3BPtofMapped2Cal.h"
    "/work/R3BRoot/tof/calibration/R3BPtofCal2HitPar.h"
    "/work/R3BRoot/tof/calibration/R3BPtofCal2Hit.h"
    "/work/R3BRoot/tof/calibration/R3BPtofHitPar.h"
    "/work/R3BRoot/tof/calibration/R3BPtofParFact.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/work/R3BRoot/build/lib/G__R3BTofDict_rdict.pcm"
    "/work/R3BRoot/build/lib/libR3BTof.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/work/R3BRoot/build/lib/libR3BTof.so.SOVERSION")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION"
         OLD_RPATH "/opt/fairsoft/lib/root:/opt/fairroot/lib:/work/R3BRoot/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so.SOVERSION")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/work/R3BRoot/build/lib/libR3BTof.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so"
         OLD_RPATH "/opt/fairsoft/lib/root:/opt/fairroot/lib:/work/R3BRoot/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libR3BTof.so")
    endif()
  endif()
endif()

