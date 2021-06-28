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
include fi12/CMakeFiles/R3BFi12.dir/depend.make

# Include the progress variables for this target.
include fi12/CMakeFiles/R3BFi12.dir/progress.make

# Include the compile flags for this target's objects.
include fi12/CMakeFiles/R3BFi12.dir/flags.make

fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12.h
fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12Cal2Hit.h
fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12Mapped2Cal.h
fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12ContFact.h
fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12Digitizer.h
fi12/G__R3BFi12Dict.cxx: ../fi12/R3BFi12DigitizerCal.h
fi12/G__R3BFi12Dict.cxx: ../fi12/Fi12LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__R3BFi12Dict.cxx, G__R3BFi12Dict_rdict.pcm, ../lib/libR3BFi12.rootmap"
	cd /work/R3BRoot/build/fi12 && ./generate_dictionary_G__R3BFi12Dict.sh
	cd /work/R3BRoot/build/fi12 && /opt/fairsoft/bin/cmake -E copy_if_different /work/R3BRoot/build/fi12/G__R3BFi12Dict_rdict.pcm /work/R3BRoot/build/lib/G__R3BFi12Dict_rdict.pcm

fi12/G__R3BFi12Dict_rdict.pcm: fi12/G__R3BFi12Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate fi12/G__R3BFi12Dict_rdict.pcm

lib/libR3BFi12.rootmap: fi12/G__R3BFi12Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BFi12.rootmap

fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o: ../fi12/R3BFi12.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o -c /work/R3BRoot/fi12/R3BFi12.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12.cxx > CMakeFiles/R3BFi12.dir/R3BFi12.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12.cxx.s

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o: ../fi12/R3BFi12Cal2Hit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o -c /work/R3BRoot/fi12/R3BFi12Cal2Hit.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12Cal2Hit.cxx > CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12Cal2Hit.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.s

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o: ../fi12/R3BFi12Mapped2Cal.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o -c /work/R3BRoot/fi12/R3BFi12Mapped2Cal.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12Mapped2Cal.cxx > CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12Mapped2Cal.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.s

fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o: ../fi12/R3BFi12ContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o -c /work/R3BRoot/fi12/R3BFi12ContFact.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12ContFact.cxx > CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12ContFact.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.s

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o: ../fi12/R3BFi12Digitizer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o -c /work/R3BRoot/fi12/R3BFi12Digitizer.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12Digitizer.cxx > CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12Digitizer.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.s

fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o: ../fi12/R3BFi12DigitizerCal.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o -c /work/R3BRoot/fi12/R3BFi12DigitizerCal.cxx

fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/R3BRoot/fi12/R3BFi12DigitizerCal.cxx > CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.i

fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/R3BRoot/fi12/R3BFi12DigitizerCal.cxx -o CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.s

fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o: fi12/CMakeFiles/R3BFi12.dir/flags.make
fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o: fi12/G__R3BFi12Dict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o -c /work/R3BRoot/build/fi12/G__R3BFi12Dict.cxx

fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.i"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /work/R3BRoot/build/fi12/G__R3BFi12Dict.cxx > CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.i

fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.s"
	cd /work/R3BRoot/build/fi12 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /work/R3BRoot/build/fi12/G__R3BFi12Dict.cxx -o CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.s

# Object files for target R3BFi12
R3BFi12_OBJECTS = \
"CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o" \
"CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o" \
"CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o" \
"CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o" \
"CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o" \
"CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o" \
"CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o"

# External object files for target R3BFi12
R3BFi12_EXTERNAL_OBJECTS =

lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12Cal2Hit.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12Mapped2Cal.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12ContFact.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12Digitizer.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/R3BFi12DigitizerCal.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/G__R3BFi12Dict.cxx.o
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/build.make
lib/libR3BFi12.so.SOVERSION: lib/libR3BBunchedFiber.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3BPassive.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3BTracking.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3Bbase.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3BData.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3BTraRene.so
lib/libR3BFi12.so.SOVERSION: lib/libField.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: lib/libR3BTCal.so.SOVERSION
lib/libR3BFi12.so.SOVERSION: fi12/CMakeFiles/R3BFi12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/R3BRoot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared library ../lib/libR3BFi12.so"
	cd /work/R3BRoot/build/fi12 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/R3BFi12.dir/link.txt --verbose=$(VERBOSE)
	cd /work/R3BRoot/build/fi12 && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libR3BFi12.so.SOVERSION ../lib/libR3BFi12.so.SOVERSION ../lib/libR3BFi12.so

lib/libR3BFi12.so: lib/libR3BFi12.so.SOVERSION
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libR3BFi12.so

# Rule to build all files generated by this target.
fi12/CMakeFiles/R3BFi12.dir/build: lib/libR3BFi12.so

.PHONY : fi12/CMakeFiles/R3BFi12.dir/build

fi12/CMakeFiles/R3BFi12.dir/clean:
	cd /work/R3BRoot/build/fi12 && $(CMAKE_COMMAND) -P CMakeFiles/R3BFi12.dir/cmake_clean.cmake
.PHONY : fi12/CMakeFiles/R3BFi12.dir/clean

fi12/CMakeFiles/R3BFi12.dir/depend: fi12/G__R3BFi12Dict.cxx
fi12/CMakeFiles/R3BFi12.dir/depend: fi12/G__R3BFi12Dict_rdict.pcm
fi12/CMakeFiles/R3BFi12.dir/depend: lib/libR3BFi12.rootmap
	cd /work/R3BRoot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/R3BRoot /work/R3BRoot/fi12 /work/R3BRoot/build /work/R3BRoot/build/fi12 /work/R3BRoot/build/fi12/CMakeFiles/R3BFi12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : fi12/CMakeFiles/R3BFi12.dir/depend

