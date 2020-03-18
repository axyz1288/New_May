cmake_minimum_required(VERSION 3.5)
project(ImageConverter)

find_package(catkin REQUIRED COMPONENTS image_transport cv_bridge nodelet)

add_library(ImageConverter image_converter.cpp)
target_link_libraries(ImageConverter ${catkin_LIBRARIES})