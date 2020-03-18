# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aiRobots/New_May/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aiRobots/New_May/build

# Include any dependencies generated for this target.
include Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/depend.make

# Include the progress variables for this target.
include Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/progress.make

# Include the compile flags for this target's objects.
include Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/flags.make

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/flags.make
Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o: /home/aiRobots/New_May/src/Robot/Body/MotorUnion/MotorUnion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aiRobots/New_May/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o"
	cd /home/aiRobots/New_May/build/Robot/Body/MotorUnion && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o -c /home/aiRobots/New_May/src/Robot/Body/MotorUnion/MotorUnion.cpp

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MotorUnion.dir/MotorUnion.cpp.i"
	cd /home/aiRobots/New_May/build/Robot/Body/MotorUnion && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aiRobots/New_May/src/Robot/Body/MotorUnion/MotorUnion.cpp > CMakeFiles/MotorUnion.dir/MotorUnion.cpp.i

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MotorUnion.dir/MotorUnion.cpp.s"
	cd /home/aiRobots/New_May/build/Robot/Body/MotorUnion && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aiRobots/New_May/src/Robot/Body/MotorUnion/MotorUnion.cpp -o CMakeFiles/MotorUnion.dir/MotorUnion.cpp.s

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.requires:

.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.requires

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.provides: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.requires
	$(MAKE) -f Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/build.make Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.provides.build
.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.provides

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.provides.build: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o


# Object files for target MotorUnion
MotorUnion_OBJECTS = \
"CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o"

# External object files for target MotorUnion
MotorUnion_EXTERNAL_OBJECTS =

Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o
Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/build.make
Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/Motor/libMotor.so
Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/Motor/dynamixel/libDynamixelSdk.so
Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/Motor/motor/libmotor.so
Robot/Body/MotorUnion/libMotorUnion.so: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aiRobots/New_May/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libMotorUnion.so"
	cd /home/aiRobots/New_May/build/Robot/Body/MotorUnion && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MotorUnion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/build: Robot/Body/MotorUnion/libMotorUnion.so

.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/build

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/requires: Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/MotorUnion.cpp.o.requires

.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/requires

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/clean:
	cd /home/aiRobots/New_May/build/Robot/Body/MotorUnion && $(CMAKE_COMMAND) -P CMakeFiles/MotorUnion.dir/cmake_clean.cmake
.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/clean

Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/depend:
	cd /home/aiRobots/New_May/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aiRobots/New_May/src /home/aiRobots/New_May/src/Robot/Body/MotorUnion /home/aiRobots/New_May/build /home/aiRobots/New_May/build/Robot/Body/MotorUnion /home/aiRobots/New_May/build/Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Robot/Body/MotorUnion/CMakeFiles/MotorUnion.dir/depend
