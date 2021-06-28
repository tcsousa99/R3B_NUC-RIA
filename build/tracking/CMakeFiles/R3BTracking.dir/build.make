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
include tracking/CMakeFiles/R3BTracking.dir/depend.make

# Include the progress variables for this target.
include tracking/CMakeFiles/R3BTracking.dir/progress.make

# Include the compile flags for this target's objects.
include tracking/CMakeFiles/R3BTracking.dir/flags.make

tracking/G__R3BTrackingDict.cxx: ../tracking/R3BTPropagator.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BTGeoPar.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BFragmentTracker.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BFragmentFitterGeneric.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BFragmentFitterChi2.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BTrackingDetector.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BTrackingParticle.h
tracking/G__R3BTrackingDict.cxx: ../tracking/R3BTrackingSetup.h
tracking/G__R3BTrackingDict.cxx: ../tracking/TrackingLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BTrackingDict.cxx, G__R3BTrackingDict_rdict.pcm, ../lib/libR3BTracking.rootmap"
	cd /work/R3BRoot/build/tracking && ./generate_dictionary_G__R3BTrackingDict.sh
	cd /work/R3BRoot/build/tracking && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/tracking/G__R3BTrackingDict_rdict.pcm /work/R3BRoot/build/lib/G__R3BTrackingDict_rdict.pcm

tracking/G__R3BTrackingDict_rdict.pcm: tracking/G__R3BTrackingDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate tracking/G__R3BTrackingDict_rdict.pcm

lib/libR3BTracking.rootmap: tracking/G__R3BTrackingDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BTracking.rootmap

tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o: ../tracking/R3BTPropagator.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o -c /work/R3BRoot/tracking/R3BTPropagator.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BTPropagator.cxx > CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BTPropagator.cxx -o CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o: ../tracking/R3BTGeoPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o -c /work/R3BRoot/tracking/R3BTGeoPar.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BTGeoPar.cxx > CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BTGeoPar.cxx -o CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o: ../tracking/R3BFragmentTracker.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o -c /work/R3BRoot/tracking/R3BFragmentTracker.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BFragmentTracker.cxx > CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BFragmentTracker.cxx -o CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o: ../tracking/R3BFragmentFitterGeneric.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o -c /work/R3BRoot/tracking/R3BFragmentFitterGeneric.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BFragmentFitterGeneric.cxx > CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BFragmentFitterGeneric.cxx -o CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o: ../tracking/R3BFragmentFitterChi2.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o -c /work/R3BRoot/tracking/R3BFragmentFitterChi2.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BFragmentFitterChi2.cxx > CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BFragmentFitterChi2.cxx -o CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o: ../tracking/R3BTrackingDetector.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o -c /work/R3BRoot/tracking/R3BTrackingDetector.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BTrackingDetector.cxx > CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BTrackingDetector.cxx -o CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o: ../tracking/R3BTrackingParticle.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o -c /work/R3BRoot/tracking/R3BTrackingParticle.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BTrackingParticle.cxx > CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BTrackingParticle.cxx -o CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.s

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o: ../tracking/R3BTrackingSetup.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o -c /work/R3BRoot/tracking/R3BTrackingSetup.cxx

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/tracking/R3BTrackingSetup.cxx > CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.i

tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/tracking/R3BTrackingSetup.cxx -o CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.s

tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o: tracking/CMakeFiles/R3BTracking.dir/flags.make
tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o: tracking/G__R3BTrackingDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o -c /work/R3BRoot/build/tracking/G__R3BTrackingDict.cxx

tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.i"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/tracking/G__R3BTrackingDict.cxx > CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.i

tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.s"
	cd /work/R3BRoot/build/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/tracking/G__R3BTrackingDict.cxx -o CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.s

# Object files for target R3BTracking
R3BTracking_OBJECTS = \
"CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o" \
"CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o" \
"CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o"

# External object files for target R3BTracking
R3BTracking_EXTERNAL_OBJECTS =

lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BTPropagator.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BTGeoPar.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BFragmentTracker.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterGeneric.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BFragmentFitterChi2.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BTrackingDetector.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BTrackingParticle.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/R3BTrackingSetup.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/G__R3BTrackingDict.cxx.o
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/build.make
lib/libR3BTracking.so.SOVERSION: tracking/CMakeFiles/R3BTracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared library ../lib/libR3BTracking.so"
	cd /work/R3BRoot/build/tracking && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BTracking.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/tracking && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BTracking.so.SOVERSION ../lib/libR3BTracking.so.SOVERSION ../lib/libR3BTracking.so

lib/libR3BTracking.so: lib/libR3BTracking.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BTracking.so

# Rule to build all files generated by this target.
tracking/CMakeFiles/R3BTracking.dir/build: lib/libR3BTracking.so

.PHONY : tracking/CMakeFiles/R3BTracking.dir/build

tracking/CMakeFiles/R3BTracking.dir/clean:
	cd /work/R3BRoot/build/tracking && $(CMAKE_COMMAND) -P CMakeFiles/R3BTracking.dir/cmake_clean.cmake
.PHONY : tracking/CMakeFiles/R3BTracking.dir/clean

tracking/CMakeFiles/R3BTracking.dir/depend: tracking/G__R3BTrackingDict.cxx
tracking/CMakeFiles/R3BTracking.dir/depend: tracking/G__R3BTrackingDict_rdict.pcm
tracking/CMakeFiles/R3BTracking.dir/depend: lib/libR3BTracking.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/tracking /work/R3BRoot/build /work/R3BRoot/build/tracking /work/R3BRoot/build/tracking/CMakeFiles/R3BTracking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tracking/CMakeFiles/R3BTracking.dir/depend
