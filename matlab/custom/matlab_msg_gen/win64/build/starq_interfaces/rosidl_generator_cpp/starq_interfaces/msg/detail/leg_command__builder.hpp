// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__BUILDER_HPP_

#include "starq_interfaces/msg/detail/leg_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegCommand_input_acc
{
public:
  explicit Init_LegCommand_input_acc(::starq_interfaces::msg::LegCommand & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::LegCommand input_acc(::starq_interfaces::msg::LegCommand::_input_acc_type arg)
  {
    msg_.input_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::LegCommand msg_;
};

class Init_LegCommand_input_vel
{
public:
  explicit Init_LegCommand_input_vel(::starq_interfaces::msg::LegCommand & msg)
  : msg_(msg)
  {}
  Init_LegCommand_input_acc input_vel(::starq_interfaces::msg::LegCommand::_input_vel_type arg)
  {
    msg_.input_vel = std::move(arg);
    return Init_LegCommand_input_acc(msg_);
  }

private:
  ::starq_interfaces::msg::LegCommand msg_;
};

class Init_LegCommand_input_pos
{
public:
  Init_LegCommand_input_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegCommand_input_vel input_pos(::starq_interfaces::msg::LegCommand::_input_pos_type arg)
  {
    msg_.input_pos = std::move(arg);
    return Init_LegCommand_input_vel(msg_);
  }

private:
  ::starq_interfaces::msg::LegCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::LegCommand>()
{
  return starq_interfaces::msg::builder::Init_LegCommand_input_pos();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_COMMAND__BUILDER_HPP_
