cmake_minimum_required(VERSION 3.8)
project(starq_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ODriveConfig.msg"
  "msg/ODriveInfo.msg"
  "msg/ODriveInfoArray.msg"
  "srv/ConfigureMotors.srv"
  "msg/LegConfig.msg"
  "msg/LegCommand.msg"
  "msg/LegCommandArray.msg"
  "msg/LegInfo.msg"
  "msg/LegInfoArray.msg"
  "msg/BoomEncoderInfo.msg"
  "srv/ConfigureLegs.srv"
  "action/RunLegTrajectory.action"
)

ament_package()
