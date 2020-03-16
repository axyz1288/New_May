cmake_minimum_required(VERSION 3.5)
project(Steering)

add_library(Steering Steering.cpp)
target_link_libraries(Steering MotorUnion)
