cmake_minimum_required(VERSION 3.5)
project(BasicArm)

find_package(OpenCV REQUIRED PATHS /opt/ros/kinetic/include/opencv-3.3.1-dev)
include_directories(${OpenCV_INCLUDE_DIRS})

add_library(BasicArm SHARED Arm.cpp)
target_link_libraries(BasicArm MotorUnion ${OpenCV_LIBS})
target_include_directories(BasicArm PUBLIC ${OpenCV_INCLUDE_DIRS})