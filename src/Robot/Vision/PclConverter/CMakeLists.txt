cmake_minimum_required(VERSION 3.5)
project(PclConverter)

add_subdirectory(spec_msg)

find_package(catkin REQUIRED 
    COMPONENTS 
    nodelet
    geometry_msgs
    sensor_msgs
    pcl_ros 
    pcl_conversions
)

add_library(PclConverter pcl_converter.cpp)
add_dependencies(PclConverter spec_msg_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
target_link_libraries(PclConverter ${catkin_LIBRARIES})