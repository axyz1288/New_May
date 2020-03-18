cmake_minimum_required(VERSION 3.5)
project(XBoxJoystick)

find_package(SDL2 REQUIRED)
string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)

add_library(XBoxJoystick XBoxJoystick.cpp)
target_link_libraries(XBoxJoystick Robot ${SDL2_LIBRARIES})