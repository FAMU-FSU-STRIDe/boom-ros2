cmake_minimum_required(VERSION 3.8)
project(starq_sbmpo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(sbmpo_ros2 REQUIRED)
find_package(nvblox_msgs REQUIRED)

# Create a shared library target
add_library(starq_sbmpo SHARED
  src/starq_sbmpo_action_server.cpp
)

# Link the necessary dependencies to the library target
ament_target_dependencies(starq_sbmpo 
  rclcpp rclcpp_action rclcpp_components sbmpo_ros2 nvblox_msgs)

# Register starq action server
rclcpp_components_register_node(starq_sbmpo 
  PLUGIN "starq_sbmpo::STARQActionServer"
  EXECUTABLE starq_sbmpo_action_server)

# Install the created library and its headers
install(
  TARGETS starq_sbmpo
  EXPORT export_${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

# Export the library
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(rclcpp rclcpp_action rclcpp_components sbmpo_ros2 nvblox_msgs)

ament_package()
