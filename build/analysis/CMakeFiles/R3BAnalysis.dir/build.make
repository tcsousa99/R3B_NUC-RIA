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
include analysis/CMakeFiles/R3BAnalysis.dir/depend.make

# Include the progress variables for this target.
include analysis/CMakeFiles/R3BAnalysis.dir/progress.make

# Include the compile flags for this target's objects.
include analysis/CMakeFiles/R3BAnalysis.dir/flags.make

analysis/G__R3BAnalysisDict.cxx: ../analysis/R3BAnalysisIncomingFrs.h
analysis/G__R3BAnalysisDict.cxx: ../analysis/R3BAnaLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BAnalysisDict.cxx, G__R3BAnalysisDict_rdict.pcm, ../lib/libR3BAnalysis.rootmap"
	cd /work/R3BRoot/build/analysis && ./generate_dictionary_G__R3BAnalysisDict.sh
	cd /work/R3BRoot/build/analysis && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/analysis/G__R3BAnalysisDict_rdict.pcm /work/R3BRoot/build/lib/G__R3BAnalysisDict_rdict.pcm

analysis/G__R3BAnalysisDict_rdict.pcm: analysis/G__R3BAnalysisDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate analysis/G__R3BAnalysisDict_rdict.pcm

lib/libR3BAnalysis.rootmap: analysis/G__R3BAnalysisDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BAnalysis.rootmap

analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o: analysis/CMakeFiles/R3BAnalysis.dir/flags.make
analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o: ../analysis/R3BAnalysisIncomingFrs.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o -c /work/R3BRoot/analysis/R3BAnalysisIncomingFrs.cxx

analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.i"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/analysis/R3BAnalysisIncomingFrs.cxx > CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.i

analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.s"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/analysis/R3BAnalysisIncomingFrs.cxx -o CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.s

analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o: analysis/CMakeFiles/R3BAnalysis.dir/flags.make
analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o: analysis/G__R3BAnalysisDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o -c /work/R3BRoot/build/analysis/G__R3BAnalysisDict.cxx

analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.i"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/analysis/G__R3BAnalysisDict.cxx > CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.i

analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.s"
	cd /work/R3BRoot/build/analysis && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/analysis/G__R3BAnalysisDict.cxx -o CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.s

# Object files for target R3BAnalysis
R3BAnalysis_OBJECTS = \
"CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o" \
"CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o"

# External object files for target R3BAnalysis
R3BAnalysis_EXTERNAL_OBJECTS =

lib/libR3BAnalysis.so.SOVERSION: analysis/CMakeFiles/R3BAnalysis.dir/R3BAnalysisIncomingFrs.cxx.o
lib/libR3BAnalysis.so.SOVERSION: analysis/CMakeFiles/R3BAnalysis.dir/G__R3BAnalysisDict.cxx.o
lib/libR3BAnalysis.so.SOVERSION: analysis/CMakeFiles/R3BAnalysis.dir/build.make
lib/libR3BAnalysis.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BAnalysis.so.SOVERSION: analysis/CMakeFiles/R3BAnalysis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../lib/libR3BAnalysis.so"
	cd /work/R3BRoot/build/analysis && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BAnalysis.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/analysis && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BAnalysis.so.SOVERSION ../lib/libR3BAnalysis.so.SOVERSION ../lib/libR3BAnalysis.so

lib/libR3BAnalysis.so: lib/libR3BAnalysis.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BAnalysis.so

# Rule to build all files generated by this target.
analysis/CMakeFiles/R3BAnalysis.dir/build: lib/libR3BAnalysis.so

.PHONY : analysis/CMakeFiles/R3BAnalysis.dir/build

analysis/CMakeFiles/R3BAnalysis.dir/clean:
	cd /work/R3BRoot/build/analysis && $(CMAKE_COMMAND) -P CMakeFiles/R3BAnalysis.dir/cmake_clean.cmake
.PHONY : analysis/CMakeFiles/R3BAnalysis.dir/clean

analysis/CMakeFiles/R3BAnalysis.dir/depend: analysis/G__R3BAnalysisDict.cxx
analysis/CMakeFiles/R3BAnalysis.dir/depend: analysis/G__R3BAnalysisDict_rdict.pcm
analysis/CMakeFiles/R3BAnalysis.dir/depend: lib/libR3BAnalysis.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/analysis /work/R3BRoot/build /work/R3BRoot/build/analysis /work/R3BRoot/build/analysis/CMakeFiles/R3BAnalysis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : analysis/CMakeFiles/R3BAnalysis.dir/depend
