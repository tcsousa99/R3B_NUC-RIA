# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/fairsoft/bin/cmake

# The command to remove a file.
RM = /opt/fairsoft/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/R3BRoot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/R3BRoot/build

# Include any dependencies generated for this target.
include califa/CMakeFiles/R3BCalifa.dir/depend.make

# Include the progress variables for this target.
include califa/CMakeFiles/R3BCalifa.dir/progress.make

# Include the compile flags for this target's objects.
include califa/CMakeFiles/R3BCalifa.dir/flags.make

califa/G__R3BCalifaDict.cxx: ../califa/./sim/R3BCalifa.h
califa/G__R3BCalifaDict.cxx: ../califa/./sim/R3BCalifaDigitizer.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaContFact.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaGeometry.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaMappingPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaCrystalCalPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaTotCalPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaHitPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./pars/R3BCalifaCrystalPars4Sim.h
califa/G__R3BCalifaDict.cxx: ../califa/./calibration/R3BCalifaMapped2CrystalCalPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./calibration/R3BCalifaCrystalCal2TotCalPar.h
califa/G__R3BCalifaDict.cxx: ../califa/./calibration/R3BCalifaMapped2CrystalCal.h
califa/G__R3BCalifaDict.cxx: ../califa/./calibration/R3BCalifaCrystalCal2Hit.h
califa/G__R3BCalifaDict.cxx: ../califa/./calibration/R3BCalifaCrystalCal2CrystalCalPID.h
califa/G__R3BCalifaDict.cxx: ../califa/./online/R3BCalifaOnlineSpectra.h
califa/G__R3BCalifaDict.cxx: ../califa/./online/R3BCalifaDemoOnlineSpectra.h
califa/G__R3BCalifaDict.cxx: ../califa/./ana/R3BCalifaCrystalCalDataAnalysis.h
califa/G__R3BCalifaDict.cxx: ../califa/CalifaLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BCalifaDict.cxx, G__R3BCalifaDict_rdict.pcm, ../lib/libR3BCalifa.rootmap"
	cd /work/R3BRoot/build/califa && ./generate_dictionary_G__R3BCalifaDict.sh
	cd /work/R3BRoot/build/califa && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/califa/G__R3BCalifaDict_rdict.pcm /work/R3BRoot/build/lib/G__R3BCalifaDict_rdict.pcm

califa/G__R3BCalifaDict_rdict.pcm: califa/G__R3BCalifaDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate califa/G__R3BCalifaDict_rdict.pcm

lib/libR3BCalifa.rootmap: califa/G__R3BCalifaDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BCalifa.rootmap

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o: ../califa/sim/R3BCalifa.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o -c /work/R3BRoot/califa/sim/R3BCalifa.cxx

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/sim/R3BCalifa.cxx > CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.i

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/sim/R3BCalifa.cxx -o CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.s

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o: ../califa/sim/R3BCalifaDigitizer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o -c /work/R3BRoot/califa/sim/R3BCalifaDigitizer.cxx

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/sim/R3BCalifaDigitizer.cxx > CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.i

califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/sim/R3BCalifaDigitizer.cxx -o CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o: ../califa/pars/R3BCalifaContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaContFact.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaContFact.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaContFact.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o: ../califa/pars/R3BCalifaGeometry.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaGeometry.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaGeometry.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaGeometry.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o: ../califa/pars/R3BCalifaMappingPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaMappingPar.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaMappingPar.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaMappingPar.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o: ../califa/pars/R3BCalifaCrystalCalPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaCrystalCalPar.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaCrystalCalPar.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaCrystalCalPar.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o: ../califa/pars/R3BCalifaTotCalPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaTotCalPar.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaTotCalPar.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaTotCalPar.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o: ../califa/pars/R3BCalifaHitPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaHitPar.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaHitPar.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaHitPar.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o: ../califa/pars/R3BCalifaCrystalPars4Sim.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o -c /work/R3BRoot/califa/pars/R3BCalifaCrystalPars4Sim.cxx

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/pars/R3BCalifaCrystalPars4Sim.cxx > CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.i

califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/pars/R3BCalifaCrystalPars4Sim.cxx -o CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.s

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o: ../califa/calibration/R3BCalifaMapped2CrystalCalPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o -c /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCalPar.cxx

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCalPar.cxx > CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCalPar.cxx -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o: ../califa/calibration/R3BCalifaCrystalCal2TotCalPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o -c /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2TotCalPar.cxx

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2TotCalPar.cxx > CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.i

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2TotCalPar.cxx -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.s

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o: ../califa/calibration/R3BCalifaMapped2CrystalCal.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o -c /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCal.cxx

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCal.cxx > CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.i

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/calibration/R3BCalifaMapped2CrystalCal.cxx -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.s

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o: ../califa/calibration/R3BCalifaCrystalCal2Hit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o -c /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2Hit.cxx

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2Hit.cxx > CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.i

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2Hit.cxx -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.s

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o: ../califa/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o -c /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx > CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.i

califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx -o CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.s

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o: ../califa/online/R3BCalifaOnlineSpectra.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o -c /work/R3BRoot/califa/online/R3BCalifaOnlineSpectra.cxx

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/online/R3BCalifaOnlineSpectra.cxx > CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.i

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/online/R3BCalifaOnlineSpectra.cxx -o CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.s

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o: ../califa/online/R3BCalifaDemoOnlineSpectra.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o -c /work/R3BRoot/califa/online/R3BCalifaDemoOnlineSpectra.cxx

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/online/R3BCalifaDemoOnlineSpectra.cxx > CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.i

califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/online/R3BCalifaDemoOnlineSpectra.cxx -o CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.s

califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o: ../califa/ana/R3BCalifaCrystalCalDataAnalysis.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o -c /work/R3BRoot/califa/ana/R3BCalifaCrystalCalDataAnalysis.cxx

califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/califa/ana/R3BCalifaCrystalCalDataAnalysis.cxx > CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.i

califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/califa/ana/R3BCalifaCrystalCalDataAnalysis.cxx -o CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.s

califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o: califa/CMakeFiles/R3BCalifa.dir/flags.make
califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o: califa/G__R3BCalifaDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o"
	cd /work/R3BRoot/build/califa && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o -c /work/R3BRoot/build/califa/G__R3BCalifaDict.cxx

califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.i"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/califa/G__R3BCalifaDict.cxx > CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.i

califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.s"
	cd /work/R3BRoot/build/califa && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/califa/G__R3BCalifaDict.cxx -o CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.s

# Object files for target R3BCalifa
R3BCalifa_OBJECTS = \
"CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o" \
"CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o" \
"CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o" \
"CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o" \
"CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o" \
"CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o" \
"CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o" \
"CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o" \
"CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o" \
"CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o"

# External object files for target R3BCalifa
R3BCalifa_EXTERNAL_OBJECTS =

lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifa.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/sim/R3BCalifaDigitizer.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaContFact.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaGeometry.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaMappingPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalCalPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaTotCalPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaHitPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/pars/R3BCalifaCrystalPars4Sim.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCalPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2TotCalPar.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaMapped2CrystalCal.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2Hit.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/calibration/R3BCalifaCrystalCal2CrystalCalPID.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaOnlineSpectra.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/online/R3BCalifaDemoOnlineSpectra.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/ana/R3BCalifaCrystalCalDataAnalysis.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/G__R3BCalifaDict.cxx.o
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/build.make
lib/libR3BCalifa.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3BCalifa.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libR3BCalifa.so.SOVERSION: /opt/fairsoft/lib/libboost_regex.so
lib/libR3BCalifa.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BCalifa.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BCalifa.so.SOVERSION: lib/libR3BTraRene.so
lib/libR3BCalifa.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3BCalifa.so.SOVERSION: califa/CMakeFiles/R3BCalifa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX shared library ../lib/libR3BCalifa.so"
	cd /work/R3BRoot/build/califa && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BCalifa.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/califa && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BCalifa.so.SOVERSION ../lib/libR3BCalifa.so.SOVERSION ../lib/libR3BCalifa.so

lib/libR3BCalifa.so: lib/libR3BCalifa.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BCalifa.so

# Rule to build all files generated by this target.
califa/CMakeFiles/R3BCalifa.dir/build: lib/libR3BCalifa.so

.PHONY : califa/CMakeFiles/R3BCalifa.dir/build

califa/CMakeFiles/R3BCalifa.dir/clean:
	cd /work/R3BRoot/build/califa && $(CMAKE_COMMAND) -P CMakeFiles/R3BCalifa.dir/cmake_clean.cmake
.PHONY : califa/CMakeFiles/R3BCalifa.dir/clean

califa/CMakeFiles/R3BCalifa.dir/depend: califa/G__R3BCalifaDict.cxx
califa/CMakeFiles/R3BCalifa.dir/depend: califa/G__R3BCalifaDict_rdict.pcm
califa/CMakeFiles/R3BCalifa.dir/depend: lib/libR3BCalifa.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/califa /work/R3BRoot/build /work/R3BRoot/build/califa /work/R3BRoot/build/califa/CMakeFiles/R3BCalifa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : califa/CMakeFiles/R3BCalifa.dir/depend

