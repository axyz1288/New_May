cmake_minimum_required(VERSION 2.8.3)
project(Yolo)

find_library(yolosdk NAMES libdarknet.so PATHS ${CMAKE_SOURCE_DIR}/may/src)

include_directories(${CMAKE_SOURCE_DIR})
add_library(Yolo yolo.cpp yolo.h yolo_v2_class.hpp darknet.h)
target_link_libraries(Yolo ${yolosdk} ${OpenCV_LIBS})