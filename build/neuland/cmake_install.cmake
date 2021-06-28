# Install script for directory: /work/R3BRoot/neuland

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/work/R3BRoot/build/neuland/calibration/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/clustering/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/digitizing/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/online/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/reconstruction/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/shared/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/simulation/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/test/cmake_install.cmake")
  include("/work/R3BRoot/build/neuland/unpack/cmake_install.cmake")

endif()

