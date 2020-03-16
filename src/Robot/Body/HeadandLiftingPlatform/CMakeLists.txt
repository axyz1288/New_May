cmake_minimum_required(VERSION 3.5)
project(HeadandLiftingPlatform)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

find_package(OpenCV REQUIRED)

add_library(HeadandLiftingPlatform HeadandLiftingPlatform.cpp)
target_link_libraries(HeadandLiftingPlatform MotorUnion ${OpenCV_LIBS})