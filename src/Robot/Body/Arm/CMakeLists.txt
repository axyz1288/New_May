cmake_minimum_required(VERSION 3.5)
project(Arm)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

add_subdirectory(BasicArm)

add_library(Arm SaleArmLeft.cpp SaleArmRight.cpp)
target_link_libraries(Arm BasicArm)