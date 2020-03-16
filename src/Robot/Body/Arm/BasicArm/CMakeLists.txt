cmake_minimum_required(VERSION 3.5)
project(BasicArm)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

find_package(OpenCV REQUIRED PATHS /opt/ros/kinetic/include/opencv-3.3.1-dev)

add_library(BasicArm Arm.cpp)
target_link_libraries(BasicArm MotorUnion ${OpenCV_LIBS})