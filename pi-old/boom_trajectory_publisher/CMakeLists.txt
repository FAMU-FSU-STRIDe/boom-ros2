cmake_minimum_required(VERSION 3.8)
project(boom_trajectory_publisher)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(boom_interfaces REQUIRED)

include_directories(include)

add_library(boom_trajectory_publisher SHARED
  src/leg_trajectory_publisher_server.cpp
  src/motor_trajectory_publisher_server.cpp)

target_include_directories(boom_trajectory_publisher PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_definitions(boom_trajectory_publisher
  PRIVATE "BOOM_TRAJECTORY_PUBLISHER_CPP_BUILDING_DLL")

ament_target_dependencies(boom_trajectory_publisher
  rclcpp
  rclcpp_action
  rclcpp_components
  boom_interfaces)

rclcpp_components_register_node(boom_trajectory_publisher 
  PLUGIN "boom::LegTrajectoryPublisherServer" 
  EXECUTABLE leg_trajectory_publisher_server)

rclcpp_components_register_node(boom_trajectory_publisher 
  PLUGIN "boom::MotorTrajectoryPublisherServer" 
  EXECUTABLE motor_trajectory_publisher_server)

install(TARGETS
  boom_trajectory_publisher
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

# Export the library
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(rclcpp rclcpp_action rclcpp_components boom_interfaces)

ament_package()
