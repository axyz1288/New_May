cmake_minimum_required(VERSION 3.5)
project(Body)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

add_subdirectory(Arm)
add_subdirectory(HeadandLiftingPlatform)
add_subdirectory(MobilePlatform)
add_subdirectory(MotorUnion)

add_library(Body Body.cpp)
target_link_libraries(Body Arm HeadandLiftingPlatform MobilePlatform MotorUnion)

# add_executable(Body_project main.cpp)
# target_link_libraries(Body_project Body)