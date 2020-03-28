cmake_minimum_required(VERSION 3.5)
project(Rtabmap_Slam_node)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(ROS_INCLUDE_DIRS /opt/ros/kinetic/include)
set(RTABMAP_ROS_INCLUDE_DIRS /opt/ros/kinetic/incldue/rtabmap_ros)
set(RTABMAP_INCLUDE_DIRS /opt/ros/kinetic/include/rtabmap-0.19/rtabmap)

include_directories(${ROS_INCLUDE_DIRS})
include_directories(${RTABMAP_INCLUDE_DIRS})
include_directories(${RTABMAP_ROS_INCLUDE_DIRS})

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  sensor_msgs
  geometry_msgs
  std_msgs
)
add_library(Rtabmap_Slam_node STATIC Rtabmap_Slam_node.cpp)

target_link_libraries(Rtabmap_Slam_node ${catkin_LIBRARIES} Robot)
