cmake_minimum_required(VERSION 3.5)
project(May_project)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  roscpp
  sensor_msgs
  geometry_msgs
  std_msgs
)

include_directories(${CMAKE_BINARY_DIR}/../devel/include)
include_directories(/opt/ros/kinetic/include)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)
include_directories(/usr/include/pcl-1.7)
include_directories(/usr/include/eigen3)
include_directories(/usr/include/vtk-6.2)
include_directories(/usr/include/SDL2)

add_subdirectory(Gui)
# add_subdirectory(Network)
add_subdirectory(Robot)
add_subdirectory(Strategy)
add_subdirectory(Rtabmap_Slam_node)
add_subdirectory(XBoxJoystick)

add_executable(May_project main.cpp)
target_link_libraries(
  May_project 
  Gui 
  Robot 
  Strategy 
  Rtabmap_Slam_node 
  XBoxJoystick
)
