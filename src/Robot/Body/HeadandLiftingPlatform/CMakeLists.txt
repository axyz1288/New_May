cmake_minimum_required(VERSION 3.5)
project(HeadandLiftingPlatform)

find_package(OpenCV REQUIRED PATHS /opt/ros/kinetic/include/opencv-3.3.1-dev)
include_directories(${OpenCV_INCLUDE_DIRS})

add_library(HeadandLiftingPlatform STATIC HeadandLiftingPlatform.cpp)
target_link_libraries(HeadandLiftingPlatform MotorUnion ${OpenCV_LIBS})