cmake_minimum_required(VERSION 3.5)
project(ImageProcessing)

find_package(catkin REQUIRED COMPONENTS OpenCV)
include_directories(${catkin_INCLUDE_DIRS})

add_library(ImageProcessing SHARED ImageProcessing.cpp)
target_link_libraries(ImageProcessing ${catkin_LIBRARIES})
target_include_directories(ImageProcessing PUBLIC ${catkin_INCLUDE_DIRS})