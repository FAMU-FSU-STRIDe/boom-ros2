// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\ODriveConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__BUILDER_HPP_

#include "starq_interfaces/msg/detail/o_drive_config__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_ODriveConfig_gear_ratio
{
public:
  explicit Init_ODriveConfig_gear_ratio(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::ODriveConfig gear_ratio(::starq_interfaces::msg::ODriveConfig::_gear_ratio_type arg)
  {
    msg_.gear_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_velocity_integrator_gain
{
public:
  explicit Init_ODriveConfig_velocity_integrator_gain(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_gear_ratio velocity_integrator_gain(::starq_interfaces::msg::ODriveConfig::_velocity_integrator_gain_type arg)
  {
    msg_.velocity_integrator_gain = std::move(arg);
    return Init_ODriveConfig_gear_ratio(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_velocity_gain
{
public:
  explicit Init_ODriveConfig_velocity_gain(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_velocity_integrator_gain velocity_gain(::starq_interfaces::msg::ODriveConfig::_velocity_gain_type arg)
  {
    msg_.velocity_gain = std::move(arg);
    return Init_ODriveConfig_velocity_integrator_gain(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_position_gain
{
public:
  explicit Init_ODriveConfig_position_gain(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_velocity_gain position_gain(::starq_interfaces::msg::ODriveConfig::_position_gain_type arg)
  {
    msg_.position_gain = std::move(arg);
    return Init_ODriveConfig_velocity_gain(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_trap_traj_inertia
{
public:
  explicit Init_ODriveConfig_trap_traj_inertia(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_position_gain trap_traj_inertia(::starq_interfaces::msg::ODriveConfig::_trap_traj_inertia_type arg)
  {
    msg_.trap_traj_inertia = std::move(arg);
    return Init_ODriveConfig_position_gain(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_trap_traj_deceleration_limit
{
public:
  explicit Init_ODriveConfig_trap_traj_deceleration_limit(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_trap_traj_inertia trap_traj_deceleration_limit(::starq_interfaces::msg::ODriveConfig::_trap_traj_deceleration_limit_type arg)
  {
    msg_.trap_traj_deceleration_limit = std::move(arg);
    return Init_ODriveConfig_trap_traj_inertia(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_trap_traj_acceleration_limit
{
public:
  explicit Init_ODriveConfig_trap_traj_acceleration_limit(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_trap_traj_deceleration_limit trap_traj_acceleration_limit(::starq_interfaces::msg::ODriveConfig::_trap_traj_acceleration_limit_type arg)
  {
    msg_.trap_traj_acceleration_limit = std::move(arg);
    return Init_ODriveConfig_trap_traj_deceleration_limit(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_trap_traj_velocity_limit
{
public:
  explicit Init_ODriveConfig_trap_traj_velocity_limit(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_trap_traj_acceleration_limit trap_traj_velocity_limit(::starq_interfaces::msg::ODriveConfig::_trap_traj_velocity_limit_type arg)
  {
    msg_.trap_traj_velocity_limit = std::move(arg);
    return Init_ODriveConfig_trap_traj_acceleration_limit(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_current_limit
{
public:
  explicit Init_ODriveConfig_current_limit(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_trap_traj_velocity_limit current_limit(::starq_interfaces::msg::ODriveConfig::_current_limit_type arg)
  {
    msg_.current_limit = std::move(arg);
    return Init_ODriveConfig_trap_traj_velocity_limit(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_velocity_limit
{
public:
  explicit Init_ODriveConfig_velocity_limit(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_current_limit velocity_limit(::starq_interfaces::msg::ODriveConfig::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_ODriveConfig_current_limit(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_input_mode
{
public:
  explicit Init_ODriveConfig_input_mode(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_velocity_limit input_mode(::starq_interfaces::msg::ODriveConfig::_input_mode_type arg)
  {
    msg_.input_mode = std::move(arg);
    return Init_ODriveConfig_velocity_limit(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_control_mode
{
public:
  explicit Init_ODriveConfig_control_mode(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_input_mode control_mode(::starq_interfaces::msg::ODriveConfig::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_ODriveConfig_input_mode(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_requested_state
{
public:
  explicit Init_ODriveConfig_requested_state(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_control_mode requested_state(::starq_interfaces::msg::ODriveConfig::_requested_state_type arg)
  {
    msg_.requested_state = std::move(arg);
    return Init_ODriveConfig_control_mode(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_can_id
{
public:
  explicit Init_ODriveConfig_can_id(::starq_interfaces::msg::ODriveConfig & msg)
  : msg_(msg)
  {}
  Init_ODriveConfig_requested_state can_id(::starq_interfaces::msg::ODriveConfig::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_ODriveConfig_requested_state(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

class Init_ODriveConfig_id
{
public:
  Init_ODriveConfig_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODriveConfig_can_id id(::starq_interfaces::msg::ODriveConfig::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ODriveConfig_can_id(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::ODriveConfig>()
{
  return starq_interfaces::msg::builder::Init_ODriveConfig_id();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_CONFIG__BUILDER_HPP_
