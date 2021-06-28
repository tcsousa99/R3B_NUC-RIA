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
include sfi/CMakeFiles/R3Bsfi.dir/depend.make

# Include the progress variables for this target.
include sfi/CMakeFiles/R3Bsfi.dir/progress.make

# Include the compile flags for this target's objects.
include sfi/CMakeFiles/R3Bsfi.dir/flags.make

sfi/G__R3BsfiDict.cxx: ../sfi/R3Bsfi.h
sfi/G__R3BsfiDict.cxx: ../sfi/R3BsfiDigitizer.h
sfi/G__R3BsfiDict.cxx: ../sfi/sfiLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BsfiDict.cxx, G__R3BsfiDict_rdict.pcm, ../lib/libR3Bsfi.rootmap"
	cd /work/R3BRoot/build/sfi && ./generate_dictionary_G__R3BsfiDict.sh
	cd /work/R3BRoot/build/sfi && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/sfi/G__R3BsfiDict_rdict.pcm /work/R3BRoot/build/lib/G__R3BsfiDict_rdict.pcm

sfi/G__R3BsfiDict_rdict.pcm: sfi/G__R3BsfiDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate sfi/G__R3BsfiDict_rdict.pcm

lib/libR3Bsfi.rootmap: sfi/G__R3BsfiDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3Bsfi.rootmap

sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o: sfi/CMakeFiles/R3Bsfi.dir/flags.make
sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o: ../sfi/R3Bsfi.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o -c /work/R3BRoot/sfi/R3Bsfi.cxx

sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.i"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/sfi/R3Bsfi.cxx > CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.i

sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.s"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/sfi/R3Bsfi.cxx -o CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.s

sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o: sfi/CMakeFiles/R3Bsfi.dir/flags.make
sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o: ../sfi/R3BsfiDigitizer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o -c /work/R3BRoot/sfi/R3BsfiDigitizer.cxx

sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.i"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/sfi/R3BsfiDigitizer.cxx > CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.i

sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.s"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/sfi/R3BsfiDigitizer.cxx -o CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.s

sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o: sfi/CMakeFiles/R3Bsfi.dir/flags.make
sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o: sfi/G__R3BsfiDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o -c /work/R3BRoot/build/sfi/G__R3BsfiDict.cxx

sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.i"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/sfi/G__R3BsfiDict.cxx > CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.i

sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.s"
	cd /work/R3BRoot/build/sfi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/sfi/G__R3BsfiDict.cxx -o CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.s

# Object files for target R3Bsfi
R3Bsfi_OBJECTS = \
"CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o" \
"CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o" \
"CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o"

# External object files for target R3Bsfi
R3Bsfi_EXTERNAL_OBJECTS =

lib/libR3Bsfi.so.SOVERSION: sfi/CMakeFiles/R3Bsfi.dir/R3Bsfi.cxx.o
lib/libR3Bsfi.so.SOVERSION: sfi/CMakeFiles/R3Bsfi.dir/R3BsfiDigitizer.cxx.o
lib/libR3Bsfi.so.SOVERSION: sfi/CMakeFiles/R3Bsfi.dir/G__R3BsfiDict.cxx.o
lib/libR3Bsfi.so.SOVERSION: sfi/CMakeFiles/R3Bsfi.dir/build.make
lib/libR3Bsfi.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3Bsfi.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3Bsfi.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3Bsfi.so.SOVERSION: lib/libR3BTraRene.so
lib/libR3Bsfi.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3Bsfi.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libR3Bsfi.so.SOVERSION: sfi/CMakeFiles/R3Bsfi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../lib/libR3Bsfi.so"
	cd /work/R3BRoot/build/sfi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3Bsfi.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/sfi && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3Bsfi.so.SOVERSION ../lib/libR3Bsfi.so.SOVERSION ../lib/libR3Bsfi.so

lib/libR3Bsfi.so: lib/libR3Bsfi.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3Bsfi.so

# Rule to build all files generated by this target.
sfi/CMakeFiles/R3Bsfi.dir/build: lib/libR3Bsfi.so

.PHONY : sfi/CMakeFiles/R3Bsfi.dir/build

sfi/CMakeFiles/R3Bsfi.dir/clean:
	cd /work/R3BRoot/build/sfi && $(CMAKE_COMMAND) -P CMakeFiles/R3Bsfi.dir/cmake_clean.cmake
.PHONY : sfi/CMakeFiles/R3Bsfi.dir/clean

sfi/CMakeFiles/R3Bsfi.dir/depend: sfi/G__R3BsfiDict.cxx
sfi/CMakeFiles/R3Bsfi.dir/depend: sfi/G__R3BsfiDict_rdict.pcm
sfi/CMakeFiles/R3Bsfi.dir/depend: lib/libR3Bsfi.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/sfi /work/R3BRoot/build /work/R3BRoot/build/sfi /work/R3BRoot/build/sfi/CMakeFiles/R3Bsfi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sfi/CMakeFiles/R3Bsfi.dir/depend

