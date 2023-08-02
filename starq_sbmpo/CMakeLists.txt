cmake_minimum_required(VERSION 3.8)
project(starq_sbmpo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(sbmpo_ros2 REQUIRED)

ament_package()
