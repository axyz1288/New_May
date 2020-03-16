cmake_minimum_required(VERSION 3.5)
project(XBoxJoystick)

find_package(SDL2 REQUIRED)
string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)

include_directories(/usr/include/SDL2)

add_library(XBoxJoystick XBoxJoystick.cpp)
target_link_libraries(XBoxJoystick Robot ${SDL2_LIBRARIES})