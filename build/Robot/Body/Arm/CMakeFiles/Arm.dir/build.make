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
include Robot/Body/Arm/CMakeFiles/Arm.dir/depend.make

# Include the progress variables for this target.
include Robot/Body/Arm/CMakeFiles/Arm.dir/progress.make

# Include the compile flags for this target's objects.
include Robot/Body/Arm/CMakeFiles/Arm.dir/flags.make

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o: Robot/Body/Arm/CMakeFiles/Arm.dir/flags.make
Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o: /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmLeft.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aiRobots/New_May/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Arm.dir/SaleArmLeft.cpp.o -c /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmLeft.cpp

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Arm.dir/SaleArmLeft.cpp.i"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmLeft.cpp > CMakeFiles/Arm.dir/SaleArmLeft.cpp.i

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Arm.dir/SaleArmLeft.cpp.s"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmLeft.cpp -o CMakeFiles/Arm.dir/SaleArmLeft.cpp.s

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.requires:

.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.requires

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.provides: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.requires
	$(MAKE) -f Robot/Body/Arm/CMakeFiles/Arm.dir/build.make Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.provides.build
.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.provides

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.provides.build: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o


Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o: Robot/Body/Arm/CMakeFiles/Arm.dir/flags.make
Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o: /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmRight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aiRobots/New_May/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Arm.dir/SaleArmRight.cpp.o -c /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmRight.cpp

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Arm.dir/SaleArmRight.cpp.i"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmRight.cpp > CMakeFiles/Arm.dir/SaleArmRight.cpp.i

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Arm.dir/SaleArmRight.cpp.s"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aiRobots/New_May/src/Robot/Body/Arm/SaleArmRight.cpp -o CMakeFiles/Arm.dir/SaleArmRight.cpp.s

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.requires:

.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.requires

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.provides: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.requires
	$(MAKE) -f Robot/Body/Arm/CMakeFiles/Arm.dir/build.make Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.provides.build
.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.provides

Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.provides.build: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o


# Object files for target Arm
Arm_OBJECTS = \
"CMakeFiles/Arm.dir/SaleArmLeft.cpp.o" \
"CMakeFiles/Arm.dir/SaleArmRight.cpp.o"

# External object files for target Arm
Arm_EXTERNAL_OBJECTS =

Robot/Body/Arm/libArm.so: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o
Robot/Body/Arm/libArm.so: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o
Robot/Body/Arm/libArm.so: Robot/Body/Arm/CMakeFiles/Arm.dir/build.make
Robot/Body/Arm/libArm.so: Robot/Body/Arm/BasicArm/libBasicArm.so
Robot/Body/Arm/libArm.so: Robot/Body/MotorUnion/libMotorUnion.so
Robot/Body/Arm/libArm.so: Robot/Body/MotorUnion/Motor/libMotor.so
Robot/Body/Arm/libArm.so: Robot/Body/MotorUnion/Motor/dynamixel/libDynamixelSdk.so
Robot/Body/Arm/libArm.so: Robot/Body/MotorUnion/Motor/motor/libmotor.so
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stitching3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_superres3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videostab3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_aruco3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bgsegm3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bioinspired3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ccalib3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_cvv3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dpm3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_face3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_photo3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_fuzzy3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_hdf3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_img_hash3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_line_descriptor3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_optflow3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_reg3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_rgbd3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_saliency3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stereo3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_structured_light3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_viz3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_phase_unwrapping3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_surface_matching3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_tracking3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_datasets3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_plot3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_text3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dnn3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xfeatures2d3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ml3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_shape3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_video3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ximgproc3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_calib3d3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_features2d3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_flann3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_highgui3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videoio3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xobjdetect3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_objdetect3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xphoto3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
Robot/Body/Arm/libArm.so: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
Robot/Body/Arm/libArm.so: Robot/Body/Arm/CMakeFiles/Arm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aiRobots/New_May/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libArm.so"
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Arm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Robot/Body/Arm/CMakeFiles/Arm.dir/build: Robot/Body/Arm/libArm.so

.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/build

Robot/Body/Arm/CMakeFiles/Arm.dir/requires: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmLeft.cpp.o.requires
Robot/Body/Arm/CMakeFiles/Arm.dir/requires: Robot/Body/Arm/CMakeFiles/Arm.dir/SaleArmRight.cpp.o.requires

.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/requires

Robot/Body/Arm/CMakeFiles/Arm.dir/clean:
	cd /home/aiRobots/New_May/build/Robot/Body/Arm && $(CMAKE_COMMAND) -P CMakeFiles/Arm.dir/cmake_clean.cmake
.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/clean

Robot/Body/Arm/CMakeFiles/Arm.dir/depend:
	cd /home/aiRobots/New_May/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aiRobots/New_May/src /home/aiRobots/New_May/src/Robot/Body/Arm /home/aiRobots/New_May/build /home/aiRobots/New_May/build/Robot/Body/Arm /home/aiRobots/New_May/build/Robot/Body/Arm/CMakeFiles/Arm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Robot/Body/Arm/CMakeFiles/Arm.dir/depend

