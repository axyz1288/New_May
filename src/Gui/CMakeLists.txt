cmake_minimum_required(VERSION 3.5)
project(Gui)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_BUILD_TYPE Release)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

include_directories(${CMAKE_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)
include_directories(/opt/ros/kinetic/include)
# include_directories(/opt/ros/kinetic/include/opencv-3.3.1-dev)

set(ui
ui/Form_Body.ui 
ui/Form_ControlPanel.ui 
ui/Form_Network.ui 
ui/Form_Strategy.ui
# ui/Form_Vision.ui
)

set(headers
include/Form_Arm.h
include/Form_Body.h
include/Form_ControlPanel.h
include/Form_Head.h
include/Form_Mobile.h
include/Form_Network.h
include/Form_Strategy.h
# include/Form_Vision.h
)

set(src
src/Form_Arm.cpp
src/Form_Body.cpp
src/Form_ControlPanel.cpp
src/Form_Head.cpp
src/Form_Mobile.cpp
src/Form_Network.cpp
src/Form_Strategy.cpp
# src/Form_Vision.cpp
)

qt5_wrap_ui(ui_headers ${ui})
qt5_wrap_cpp(moc_headers ${headers})

add_library(Gui STATIC ${ui_headers} ${src} ${moc_headers})
target_link_libraries(Gui Qt5::Widgets Qt5::Core Robot XBoxJoystick)
