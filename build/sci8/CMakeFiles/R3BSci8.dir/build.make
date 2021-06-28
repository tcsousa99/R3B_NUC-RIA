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
include sci8/CMakeFiles/R3BSci8.dir/depend.make

# Include the progress variables for this target.
include sci8/CMakeFiles/R3BSci8.dir/progress.make

# Include the compile flags for this target's objects.
include sci8/CMakeFiles/R3BSci8.dir/flags.make

sci8/G__R3BSci8Dict.cxx: ../sci8/R3BSci8Mapped2Cal.h
sci8/G__R3BSci8Dict.cxx: ../sci8/R3BSci8Mapped2CalPar.h
sci8/G__R3BSci8Dict.cxx: ../sci8/R3BSci8Cal2Hit.h
sci8/G__R3BSci8Dict.cxx: ../sci8/Sci8LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BSci8Dict.cxx, G__R3BSci8Dict_rdict.pcm, ../lib/libR3BSci8.rootmap"
	cd /work/R3BRoot/build/sci8 && ./generate_dictionary_G__R3BSci8Dict.sh
	cd /work/R3BRoot/build/sci8 && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/sci8/G__R3BSci8Dict_rdict.pcm /work/R3BRoot/build/lib/G__R3BSci8Dict_rdict.pcm

sci8/G__R3BSci8Dict_rdict.pcm: sci8/G__R3BSci8Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate sci8/G__R3BSci8Dict_rdict.pcm

lib/libR3BSci8.rootmap: sci8/G__R3BSci8Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BSci8.rootmap

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o: sci8/CMakeFiles/R3BSci8.dir/flags.make
sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o: ../sci8/R3BSci8Mapped2Cal.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o -c /work/R3BRoot/sci8/R3BSci8Mapped2Cal.cxx

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.i"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/sci8/R3BSci8Mapped2Cal.cxx > CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.i

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.s"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/sci8/R3BSci8Mapped2Cal.cxx -o CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.s

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o: sci8/CMakeFiles/R3BSci8.dir/flags.make
sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o: ../sci8/R3BSci8Mapped2CalPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o -c /work/R3BRoot/sci8/R3BSci8Mapped2CalPar.cxx

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.i"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/sci8/R3BSci8Mapped2CalPar.cxx > CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.i

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.s"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/sci8/R3BSci8Mapped2CalPar.cxx -o CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.s

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o: sci8/CMakeFiles/R3BSci8.dir/flags.make
sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o: ../sci8/R3BSci8Cal2Hit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o -c /work/R3BRoot/sci8/R3BSci8Cal2Hit.cxx

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.i"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/sci8/R3BSci8Cal2Hit.cxx > CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.i

sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.s"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/sci8/R3BSci8Cal2Hit.cxx -o CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.s

sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o: sci8/CMakeFiles/R3BSci8.dir/flags.make
sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o: sci8/G__R3BSci8Dict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o -c /work/R3BRoot/build/sci8/G__R3BSci8Dict.cxx

sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.i"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/sci8/G__R3BSci8Dict.cxx > CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.i

sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.s"
	cd /work/R3BRoot/build/sci8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/sci8/G__R3BSci8Dict.cxx -o CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.s

# Object files for target R3BSci8
R3BSci8_OBJECTS = \
"CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o" \
"CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o" \
"CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o" \
"CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o"

# External object files for target R3BSci8
R3BSci8_EXTERNAL_OBJECTS =

lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2Cal.cxx.o
lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/R3BSci8Mapped2CalPar.cxx.o
lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/R3BSci8Cal2Hit.cxx.o
lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/G__R3BSci8Dict.cxx.o
lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/build.make
lib/libR3BSci8.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: lib/libR3BTCal.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: lib/libR3BTraRene.so
lib/libR3BSci8.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libR3BSci8.so.SOVERSION: sci8/CMakeFiles/R3BSci8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../lib/libR3BSci8.so"
	cd /work/R3BRoot/build/sci8 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BSci8.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/sci8 && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BSci8.so.SOVERSION ../lib/libR3BSci8.so.SOVERSION ../lib/libR3BSci8.so

lib/libR3BSci8.so: lib/libR3BSci8.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BSci8.so

# Rule to build all files generated by this target.
sci8/CMakeFiles/R3BSci8.dir/build: lib/libR3BSci8.so

.PHONY : sci8/CMakeFiles/R3BSci8.dir/build

sci8/CMakeFiles/R3BSci8.dir/clean:
	cd /work/R3BRoot/build/sci8 && $(CMAKE_COMMAND) -P CMakeFiles/R3BSci8.dir/cmake_clean.cmake
.PHONY : sci8/CMakeFiles/R3BSci8.dir/clean

sci8/CMakeFiles/R3BSci8.dir/depend: sci8/G__R3BSci8Dict.cxx
sci8/CMakeFiles/R3BSci8.dir/depend: sci8/G__R3BSci8Dict_rdict.pcm
sci8/CMakeFiles/R3BSci8.dir/depend: lib/libR3BSci8.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/sci8 /work/R3BRoot/build /work/R3BRoot/build/sci8 /work/R3BRoot/build/sci8/CMakeFiles/R3BSci8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sci8/CMakeFiles/R3BSci8.dir/depend
