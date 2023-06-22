// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\ODriveCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__BUILDER_HPP_

#include "starq_interfaces/msg/detail/o_drive_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_ODriveCommand_input_torque
{
public:
  explicit Init_ODriveCommand_input_torque(::starq_interfaces::msg::ODriveCommand & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::ODriveCommand input_torque(::starq_interfaces::msg::ODriveCommand::_input_torque_type arg)
  {
    msg_.input_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveCommand msg_;
};

class Init_ODriveCommand_input_velocity
{
public:
  explicit Init_ODriveCommand_input_velocity(::starq_interfaces::msg::ODriveCommand & msg)
  : msg_(msg)
  {}
  Init_ODriveCommand_input_torque input_velocity(::starq_interfaces::msg::ODriveCommand::_input_velocity_type arg)
  {
    msg_.input_velocity = std::move(arg);
    return Init_ODriveCommand_input_torque(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveCommand msg_;
};

class Init_ODriveCommand_input_position
{
public:
  Init_ODriveCommand_input_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODriveCommand_input_velocity input_position(::starq_interfaces::msg::ODriveCommand::_input_position_type arg)
  {
    msg_.input_position = std::move(arg);
    return Init_ODriveCommand_input_velocity(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::ODriveCommand>()
{
  return starq_interfaces::msg::builder::Init_ODriveCommand_input_position();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_COMMAND__BUILDER_HPP_
