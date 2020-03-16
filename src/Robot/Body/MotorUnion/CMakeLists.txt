cmake_minimum_required(VERSION 3.5)
project(MotorUnion)

add_subdirectory(Motor)

add_library(MotorUnion MotorUnion.cpp)
target_link_libraries(MotorUnion Motor)