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
include neuland/test/CMakeFiles/NeulandUnitTests.dir/depend.make

# Include the progress variables for this target.
include neuland/test/CMakeFiles/NeulandUnitTests.dir/progress.make

# Include the compile flags for this target's objects.
include neuland/test/CMakeFiles/NeulandUnitTests.dir/flags.make

neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o: neuland/test/CMakeFiles/NeulandUnitTests.dir/flags.make
neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o: ../neuland/test/testClusteringEngine.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o -c /work/R3BRoot/neuland/test/testClusteringEngine.cxx

neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.i"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/neuland/test/testClusteringEngine.cxx > CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.i

neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.s"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/neuland/test/testClusteringEngine.cxx -o CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.s

neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o: neuland/test/CMakeFiles/NeulandUnitTests.dir/flags.make
neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o: ../neuland/test/testNeulandMultiplicityCalorimetricPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o -c /work/R3BRoot/neuland/test/testNeulandMultiplicityCalorimetricPar.cxx

neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.i"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/neuland/test/testNeulandMultiplicityCalorimetricPar.cxx > CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.i

neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.s"
	cd /work/R3BRoot/build/neuland/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/neuland/test/testNeulandMultiplicityCalorimetricPar.cxx -o CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.s

# Object files for target NeulandUnitTests
NeulandUnitTests_OBJECTS = \
"CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o" \
"CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o"

# External object files for target NeulandUnitTests
NeulandUnitTests_EXTERNAL_OBJECTS =

bin/NeulandUnitTests: neuland/test/CMakeFiles/NeulandUnitTests.dir/testClusteringEngine.cxx.o
bin/NeulandUnitTests: neuland/test/CMakeFiles/NeulandUnitTests.dir/testNeulandMultiplicityCalorimetricPar.cxx.o
bin/NeulandUnitTests: neuland/test/CMakeFiles/NeulandUnitTests.dir/build.make
bin/NeulandUnitTests: /opt/fairsoft/lib/libgtest.a
bin/NeulandUnitTests: /opt/fairsoft/lib/libgtest_main.a
bin/NeulandUnitTests: lib/libR3BNeulandReconstruction.so.SOVERSION
bin/NeulandUnitTests: lib/libR3BNeulandShared.so.SOVERSION
bin/NeulandUnitTests: lib/libR3BData.so.SOVERSION
bin/NeulandUnitTests: neuland/test/CMakeFiles/NeulandUnitTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/NeulandUnitTests"
	cd /work/R3BRoot/build/neuland/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NeulandUnitTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
neuland/test/CMakeFiles/NeulandUnitTests.dir/build: bin/NeulandUnitTests

.PHONY : neuland/test/CMakeFiles/NeulandUnitTests.dir/build

neuland/test/CMakeFiles/NeulandUnitTests.dir/clean:
	cd /work/R3BRoot/build/neuland/test && $(CMAKE_COMMAND) -P CMakeFiles/NeulandUnitTests.dir/cmake_clean.cmake
.PHONY : neuland/test/CMakeFiles/NeulandUnitTests.dir/clean

neuland/test/CMakeFiles/NeulandUnitTests.dir/depend:
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/neuland/test /work/R3BRoot/build /work/R3BRoot/build/neuland/test /work/R3BRoot/build/neuland/test/CMakeFiles/NeulandUnitTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : neuland/test/CMakeFiles/NeulandUnitTests.dir/depend
