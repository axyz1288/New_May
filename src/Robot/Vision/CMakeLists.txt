cmake_minimum_required(VERSION 3.5)
project(Vision)

include_directories(${CMAKE_SOURCE_DIR}/../devel/include)
include_directories(/opt/ros/kinetic/include)
include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)
include_directories(/usr/include/pcl-1.7)
include_directories(/usr/include/eigen3)
include_directories(/usr/include/vtk-6.2)

add_subdirectory(spec_msg)
add_subdirectory(ImageProcessing)
add_subdirectory(ImageConverter)
add_subdirectory(MouseEvent)
# add_subdirectory(PclConverter)

add_library(Vision Vision.cpp)
target_link_libraries(Vision ImageProcessing ImageConverter MouseEvent ${catkin_LIBRARIES})