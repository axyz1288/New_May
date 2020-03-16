cmake_minimum_required(VERSION 3.5)
project(Robot)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(Body)
add_subdirectory(Speech)
add_subdirectory(Vision)

add_library(Robot Robot.cpp)
target_link_libraries(Robot Body Speech Vision)
