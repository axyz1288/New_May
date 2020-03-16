cmake_minimum_required(VERSION 3.5)
project(MobilePlatform)

add_subdirectory(Steering)
add_subdirectory(Wheel)

add_library(MobilePlatform MobilePlatform.cpp)
target_link_libraries(MobilePlatform MotorUnion Steering Wheel)
