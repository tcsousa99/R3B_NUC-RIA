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
include timestitcher/CMakeFiles/timestitcher.dir/depend.make

# Include the progress variables for this target.
include timestitcher/CMakeFiles/timestitcher.dir/progress.make

# Include the compile flags for this target's objects.
include timestitcher/CMakeFiles/timestitcher.dir/flags.make

timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o: timestitcher/CMakeFiles/timestitcher.dir/flags.make
timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o: ../timestitcher/libtimestitcher.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o -c /work/R3BRoot/timestitcher/libtimestitcher.cxx

timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timestitcher.dir/libtimestitcher.cxx.i"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/timestitcher/libtimestitcher.cxx > CMakeFiles/timestitcher.dir/libtimestitcher.cxx.i

timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timestitcher.dir/libtimestitcher.cxx.s"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/timestitcher/libtimestitcher.cxx -o CMakeFiles/timestitcher.dir/libtimestitcher.cxx.s

timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o: timestitcher/CMakeFiles/timestitcher.dir/flags.make
timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o: ../timestitcher/Land02TreeWrapper.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o -c /work/R3BRoot/timestitcher/Land02TreeWrapper.cxx

timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.i"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/timestitcher/Land02TreeWrapper.cxx > CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.i

timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.s"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/timestitcher/Land02TreeWrapper.cxx -o CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.s

timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o: timestitcher/CMakeFiles/timestitcher.dir/flags.make
timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o: ../timestitcher/R3BTreeWrapper.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o -c /work/R3BRoot/timestitcher/R3BTreeWrapper.cxx

timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.i"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/timestitcher/R3BTreeWrapper.cxx > CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.i

timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.s"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/timestitcher/R3BTreeWrapper.cxx -o CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.s

timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.o: timestitcher/CMakeFiles/timestitcher.dir/flags.make
timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.o: ../timestitcher/TreeIterator.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.o"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timestitcher.dir/TreeIterator.cxx.o -c /work/R3BRoot/timestitcher/TreeIterator.cxx

timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timestitcher.dir/TreeIterator.cxx.i"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/timestitcher/TreeIterator.cxx > CMakeFiles/timestitcher.dir/TreeIterator.cxx.i

timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timestitcher.dir/TreeIterator.cxx.s"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/timestitcher/TreeIterator.cxx -o CMakeFiles/timestitcher.dir/TreeIterator.cxx.s

timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o: timestitcher/CMakeFiles/timestitcher.dir/flags.make
timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o: ../timestitcher/TreeWrapper.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o -c /work/R3BRoot/timestitcher/TreeWrapper.cxx

timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timestitcher.dir/TreeWrapper.cxx.i"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/timestitcher/TreeWrapper.cxx > CMakeFiles/timestitcher.dir/TreeWrapper.cxx.i

timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timestitcher.dir/TreeWrapper.cxx.s"
	cd /work/R3BRoot/build/timestitcher && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/timestitcher/TreeWrapper.cxx -o CMakeFiles/timestitcher.dir/TreeWrapper.cxx.s

# Object files for target timestitcher
timestitcher_OBJECTS = \
"CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o" \
"CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o" \
"CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o" \
"CMakeFiles/timestitcher.dir/TreeIterator.cxx.o" \
"CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o"

# External object files for target timestitcher
timestitcher_EXTERNAL_OBJECTS =

lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/libtimestitcher.cxx.o
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/Land02TreeWrapper.cxx.o
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/R3BTreeWrapper.cxx.o
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/TreeIterator.cxx.o
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/TreeWrapper.cxx.o
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/build.make
lib/libtimestitcher.so.SOVERSION: lib/libR3BCalifa.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: lib/libR3BTraRene.so
lib/libtimestitcher.so.SOVERSION: lib/libField.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libtimestitcher.so.SOVERSION: /opt/fairsoft/lib/libboost_regex.so
lib/libtimestitcher.so.SOVERSION: timestitcher/CMakeFiles/timestitcher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../lib/libtimestitcher.so"
	cd /work/R3BRoot/build/timestitcher && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/timestitcher.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/timestitcher && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libtimestitcher.so.SOVERSION ../lib/libtimestitcher.so.SOVERSION ../lib/libtimestitcher.so

lib/libtimestitcher.so: lib/libtimestitcher.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libtimestitcher.so

# Rule to build all files generated by this target.
timestitcher/CMakeFiles/timestitcher.dir/build: lib/libtimestitcher.so

.PHONY : timestitcher/CMakeFiles/timestitcher.dir/build

timestitcher/CMakeFiles/timestitcher.dir/clean:
	cd /work/R3BRoot/build/timestitcher && $(CMAKE_COMMAND) -P CMakeFiles/timestitcher.dir/cmake_clean.cmake
.PHONY : timestitcher/CMakeFiles/timestitcher.dir/clean

timestitcher/CMakeFiles/timestitcher.dir/depend:
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/timestitcher /work/R3BRoot/build /work/R3BRoot/build/timestitcher /work/R3BRoot/build/timestitcher/CMakeFiles/timestitcher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : timestitcher/CMakeFiles/timestitcher.dir/depend

