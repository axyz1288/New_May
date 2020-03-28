cmake_minimum_required(VERSION 3.5)
project(Arm)

add_subdirectory(BasicArm)

add_library(Arm STATIC SaleArmLeft.cpp SaleArmRight.cpp)
target_link_libraries(Arm BasicArm)