cmake_minimum_required(VERSION 3.5)
project(May_project)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_BUILD_TYPE Debug)

# include_directories(${CMAKE_BINARY_DIR})
# include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(Gui)
# add_subdirectory(Network)
add_subdirectory(Robot)
add_subdirectory(Strategy)
add_subdirectory(Rtabmap_Slam_node)
add_subdirectory(XBoxJoystick)

add_executable(May_project main.cpp)
target_link_libraries(May_project 
  Gui 
  Robot 
  Strategy 
  Rtabmap_Slam_node 
  XBoxJoystick
)
