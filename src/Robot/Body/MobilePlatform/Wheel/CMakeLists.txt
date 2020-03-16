cmake_minimum_required(VERSION 3.5)
project(Wheel)

add_library(Wheel Wheel.cpp)
target_link_libraries(Wheel MotorUnion)