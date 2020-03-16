cmake_minimum_required(VERSION 3.5)
project(PclConverter)

find_package(PCL 1.7 REQUIRED)

add_library(PclConverter pcl_converter.cpp)
target_link_libraries(PclConverter ${PCL_LIBRARIES})