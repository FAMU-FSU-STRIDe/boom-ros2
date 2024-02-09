cmake_minimum_required(VERSION 3.8)
project(boom_leg_kinematics)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(boom_interfaces REQUIRED)

include_directories(include)

# executable
add_executable(leg_kinematics_node src/leg_kinematics_node.cpp)
ament_target_dependencies(leg_kinematics_node rclcpp boom_interfaces)

install(TARGETS
  leg_kinematics_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()
