cmake_minimum_required(VERSION 3.5)
project(Speech)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(ROS_INCLUDE_DIRS /opt/ros/kinetic/include)

include_directories(${catkin_INCLUDE_DIRS})
include_directories(${ROS_INCLUDE_DIRS})

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

add_library(Speech Speech.cpp)
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
