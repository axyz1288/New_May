# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "spec_msg: 3 messages, 0 services")

set(MSG_I_FLAGS "-Ispec_msg:/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(spec_msg_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_custom_target(_spec_msg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spec_msg" "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" "std_msgs/Float32"
)

get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_custom_target(_spec_msg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spec_msg" "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_custom_target(_spec_msg_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "spec_msg" "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" "std_msgs/Float32:spec_msg/float32_1d"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg
)
_generate_msg_cpp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg
)
_generate_msg_cpp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg;/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg
)

### Generating Services

### Generating Module File
_generate_module_cpp(spec_msg
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(spec_msg_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(spec_msg_generate_messages spec_msg_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_cpp _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_cpp _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_cpp _spec_msg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spec_msg_gencpp)
add_dependencies(spec_msg_gencpp spec_msg_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spec_msg_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg
)
_generate_msg_eus(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg
)
_generate_msg_eus(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg;/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg
)

### Generating Services

### Generating Module File
_generate_module_eus(spec_msg
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(spec_msg_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(spec_msg_generate_messages spec_msg_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_eus _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_eus _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_eus _spec_msg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spec_msg_geneus)
add_dependencies(spec_msg_geneus spec_msg_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spec_msg_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg
)
_generate_msg_lisp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg
)
_generate_msg_lisp(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg;/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg
)

### Generating Services

### Generating Module File
_generate_module_lisp(spec_msg
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(spec_msg_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(spec_msg_generate_messages spec_msg_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_lisp _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_lisp _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_lisp _spec_msg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spec_msg_genlisp)
add_dependencies(spec_msg_genlisp spec_msg_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spec_msg_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg
)
_generate_msg_nodejs(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg
)
_generate_msg_nodejs(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg;/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg
)

### Generating Services

### Generating Module File
_generate_module_nodejs(spec_msg
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(spec_msg_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(spec_msg_generate_messages spec_msg_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_nodejs _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_nodejs _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_nodejs _spec_msg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spec_msg_gennodejs)
add_dependencies(spec_msg_gennodejs spec_msg_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spec_msg_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg
)
_generate_msg_py(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg
)
_generate_msg_py(spec_msg
  "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Float32.msg;/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg
)

### Generating Services

### Generating Module File
_generate_module_py(spec_msg
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(spec_msg_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(spec_msg_generate_messages spec_msg_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_1d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_py _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/spec_points.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_py _spec_msg_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/aiRobots/New_May/src/Robot/Vision/spec_msg/msg/float32_2d.msg" NAME_WE)
add_dependencies(spec_msg_generate_messages_py _spec_msg_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(spec_msg_genpy)
add_dependencies(spec_msg_genpy spec_msg_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS spec_msg_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/spec_msg
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(spec_msg_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(spec_msg_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/spec_msg
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(spec_msg_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(spec_msg_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/spec_msg
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(spec_msg_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(spec_msg_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/spec_msg
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(spec_msg_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(spec_msg_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/spec_msg
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(spec_msg_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(spec_msg_generate_messages_py std_msgs_generate_messages_py)
endif()
