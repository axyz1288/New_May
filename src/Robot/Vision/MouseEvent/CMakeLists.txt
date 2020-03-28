cmake_minimum_required(VERSION 3.5)
project(MouseEvent)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

add_library(MouseEvent SHARED mouse_event.cpp)
target_include_directories(MouseEvent PUBLIC $<BUILD_INTERFACE:/opt/ros/kinetic/include/opencv-3.3.1-dev>)