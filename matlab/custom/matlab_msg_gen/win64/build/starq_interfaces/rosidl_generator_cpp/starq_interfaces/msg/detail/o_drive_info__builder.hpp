// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\ODriveInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__BUILDER_HPP_

#include "starq_interfaces/msg/detail/o_drive_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_ODriveInfo_torque_error
{
public:
  explicit Init_ODriveInfo_torque_error(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::ODriveInfo torque_error(::starq_interfaces::msg::ODriveInfo::_torque_error_type arg)
  {
    msg_.torque_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_vel_error
{
public:
  explicit Init_ODriveInfo_vel_error(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_torque_error vel_error(::starq_interfaces::msg::ODriveInfo::_vel_error_type arg)
  {
    msg_.vel_error = std::move(arg);
    return Init_ODriveInfo_torque_error(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_pos_error
{
public:
  explicit Init_ODriveInfo_pos_error(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_vel_error pos_error(::starq_interfaces::msg::ODriveInfo::_pos_error_type arg)
  {
    msg_.pos_error = std::move(arg);
    return Init_ODriveInfo_vel_error(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_bus_current
{
public:
  explicit Init_ODriveInfo_bus_current(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_pos_error bus_current(::starq_interfaces::msg::ODriveInfo::_bus_current_type arg)
  {
    msg_.bus_current = std::move(arg);
    return Init_ODriveInfo_pos_error(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_bus_voltage
{
public:
  explicit Init_ODriveInfo_bus_voltage(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_bus_current bus_voltage(::starq_interfaces::msg::ODriveInfo::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_ODriveInfo_bus_current(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_motor_temperature
{
public:
  explicit Init_ODriveInfo_motor_temperature(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_bus_voltage motor_temperature(::starq_interfaces::msg::ODriveInfo::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_ODriveInfo_bus_voltage(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_iq_measured
{
public:
  explicit Init_ODriveInfo_iq_measured(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_motor_temperature iq_measured(::starq_interfaces::msg::ODriveInfo::_iq_measured_type arg)
  {
    msg_.iq_measured = std::move(arg);
    return Init_ODriveInfo_motor_temperature(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_iq_setpoint
{
public:
  explicit Init_ODriveInfo_iq_setpoint(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_iq_measured iq_setpoint(::starq_interfaces::msg::ODriveInfo::_iq_setpoint_type arg)
  {
    msg_.iq_setpoint = std::move(arg);
    return Init_ODriveInfo_iq_measured(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_torque_target
{
public:
  explicit Init_ODriveInfo_torque_target(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_iq_setpoint torque_target(::starq_interfaces::msg::ODriveInfo::_torque_target_type arg)
  {
    msg_.torque_target = std::move(arg);
    return Init_ODriveInfo_iq_setpoint(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_torque_estimate
{
public:
  explicit Init_ODriveInfo_torque_estimate(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_torque_target torque_estimate(::starq_interfaces::msg::ODriveInfo::_torque_estimate_type arg)
  {
    msg_.torque_estimate = std::move(arg);
    return Init_ODriveInfo_torque_target(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_vel_estimate
{
public:
  explicit Init_ODriveInfo_vel_estimate(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_torque_estimate vel_estimate(::starq_interfaces::msg::ODriveInfo::_vel_estimate_type arg)
  {
    msg_.vel_estimate = std::move(arg);
    return Init_ODriveInfo_torque_estimate(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_pos_estimate
{
public:
  explicit Init_ODriveInfo_pos_estimate(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_vel_estimate pos_estimate(::starq_interfaces::msg::ODriveInfo::_pos_estimate_type arg)
  {
    msg_.pos_estimate = std::move(arg);
    return Init_ODriveInfo_vel_estimate(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_fault
{
public:
  explicit Init_ODriveInfo_fault(::starq_interfaces::msg::ODriveInfo & msg)
  : msg_(msg)
  {}
  Init_ODriveInfo_pos_estimate fault(::starq_interfaces::msg::ODriveInfo::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return Init_ODriveInfo_pos_estimate(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

class Init_ODriveInfo_state
{
public:
  Init_ODriveInfo_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODriveInfo_fault state(::starq_interfaces::msg::ODriveInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ODriveInfo_fault(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::ODriveInfo>()
{
  return starq_interfaces::msg::builder::Init_ODriveInfo_state();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO__BUILDER_HPP_
