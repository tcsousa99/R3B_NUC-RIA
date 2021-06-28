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
include dch/CMakeFiles/R3BDch.dir/depend.make

# Include the progress variables for this target.
include dch/CMakeFiles/R3BDch.dir/progress.make

# Include the compile flags for this target's objects.
include dch/CMakeFiles/R3BDch.dir/flags.make

dch/G__R3BDchDict.cxx: ../dch/R3BDch.h
dch/G__R3BDchDict.cxx: ../dch/R3BGeoDch.h
dch/G__R3BDchDict.cxx: ../dch/R3BGeoDchPar.h
dch/G__R3BDchDict.cxx: ../dch/R3BDchContFact.h
dch/G__R3BDchDict.cxx: ../dch/R3BDchDigiPar.h
dch/G__R3BDchDict.cxx: ../dch/R3BDchDigitizer.h
dch/G__R3BDchDict.cxx: ../dch/R3BDch2pDigiPar.h
dch/G__R3BDchDict.cxx: ../dch/R3BDch2pDigitizer.h
dch/G__R3BDchDict.cxx: ../dch/DchLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BDchDict.cxx, G__R3BDchDict_rdict.pcm, ../lib/libR3BDch.rootmap"
	cd /work/R3BRoot/build/dch && ./generate_dictionary_G__R3BDchDict.sh
	cd /work/R3BRoot/build/dch && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/dch/G__R3BDchDict_rdict.pcm /work/R3BRoot/build/lib/G__R3BDchDict_rdict.pcm

dch/G__R3BDchDict_rdict.pcm: dch/G__R3BDchDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate dch/G__R3BDchDict_rdict.pcm

lib/libR3BDch.rootmap: dch/G__R3BDchDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BDch.rootmap

dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.o: ../dch/R3BDch.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDch.cxx.o -c /work/R3BRoot/dch/R3BDch.cxx

dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDch.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDch.cxx > CMakeFiles/R3BDch.dir/R3BDch.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDch.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDch.cxx -o CMakeFiles/R3BDch.dir/R3BDch.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o: ../dch/R3BGeoDch.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o -c /work/R3BRoot/dch/R3BGeoDch.cxx

dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BGeoDch.cxx > CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BGeoDch.cxx -o CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o: ../dch/R3BGeoDchPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o -c /work/R3BRoot/dch/R3BGeoDchPar.cxx

dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BGeoDchPar.cxx > CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BGeoDchPar.cxx -o CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o: ../dch/R3BDchContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o -c /work/R3BRoot/dch/R3BDchContFact.cxx

dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDchContFact.cxx > CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDchContFact.cxx -o CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o: ../dch/R3BDchDigiPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o -c /work/R3BRoot/dch/R3BDchDigiPar.cxx

dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDchDigiPar.cxx > CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDchDigiPar.cxx -o CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o: ../dch/R3BDchDigitizer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o -c /work/R3BRoot/dch/R3BDchDigitizer.cxx

dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDchDigitizer.cxx > CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDchDigitizer.cxx -o CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o: ../dch/R3BDch2pDigiPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o -c /work/R3BRoot/dch/R3BDch2pDigiPar.cxx

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDch2pDigiPar.cxx > CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDch2pDigiPar.cxx -o CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.s

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o: ../dch/R3BDch2pDigitizer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o -c /work/R3BRoot/dch/R3BDch2pDigitizer.cxx

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/dch/R3BDch2pDigitizer.cxx > CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.i

dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/dch/R3BDch2pDigitizer.cxx -o CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.s

dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o: dch/CMakeFiles/R3BDch.dir/flags.make
dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o: dch/G__R3BDchDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o"
	cd /work/R3BRoot/build/dch && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o -c /work/R3BRoot/build/dch/G__R3BDchDict.cxx

dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.i"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/dch/G__R3BDchDict.cxx > CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.i

dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.s"
	cd /work/R3BRoot/build/dch && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/dch/G__R3BDchDict.cxx -o CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.s

# Object files for target R3BDch
R3BDch_OBJECTS = \
"CMakeFiles/R3BDch.dir/R3BDch.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o" \
"CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o" \
"CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o"

# External object files for target R3BDch
R3BDch_EXTERNAL_OBJECTS =

lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDch.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BGeoDch.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BGeoDchPar.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDchContFact.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDchDigiPar.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDchDigitizer.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDch2pDigiPar.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/R3BDch2pDigitizer.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/G__R3BDchDict.cxx.o
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/build.make
lib/libR3BDch.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3BDch.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BDch.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BDch.so.SOVERSION: lib/libR3BTraRene.so
lib/libR3BDch.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3BDch.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libR3BDch.so.SOVERSION: dch/CMakeFiles/R3BDch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared library ../lib/libR3BDch.so"
	cd /work/R3BRoot/build/dch && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BDch.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/dch && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BDch.so.SOVERSION ../lib/libR3BDch.so.SOVERSION ../lib/libR3BDch.so

lib/libR3BDch.so: lib/libR3BDch.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BDch.so

# Rule to build all files generated by this target.
dch/CMakeFiles/R3BDch.dir/build: lib/libR3BDch.so

.PHONY : dch/CMakeFiles/R3BDch.dir/build

dch/CMakeFiles/R3BDch.dir/clean:
	cd /work/R3BRoot/build/dch && $(CMAKE_COMMAND) -P CMakeFiles/R3BDch.dir/cmake_clean.cmake
.PHONY : dch/CMakeFiles/R3BDch.dir/clean

dch/CMakeFiles/R3BDch.dir/depend: dch/G__R3BDchDict.cxx
dch/CMakeFiles/R3BDch.dir/depend: dch/G__R3BDchDict_rdict.pcm
dch/CMakeFiles/R3BDch.dir/depend: lib/libR3BDch.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/dch /work/R3BRoot/build /work/R3BRoot/build/dch /work/R3BRoot/build/dch/CMakeFiles/R3BDch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dch/CMakeFiles/R3BDch.dir/depend

