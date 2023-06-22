// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__BUILDER_HPP_

#include "starq_interfaces/msg/detail/leg_config__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegConfig_motor_ids
{
public:
  explicit Init_LegConfig_motor_ids(::starq_interfaces::msg::LegConfig & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::LegConfig motor_ids(::starq_interfaces::msg::LegConfig::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::LegConfig msg_;
};

class Init_LegConfig_kinematic_type
{
public:
  explicit Init_LegConfig_kinematic_type(::starq_interfaces::msg::LegConfig & msg)
  : msg_(msg)
  {}
  Init_LegConfig_motor_ids kinematic_type(::starq_interfaces::msg::LegConfig::_kinematic_type_type arg)
  {
    msg_.kinematic_type = std::move(arg);
    return Init_LegConfig_motor_ids(msg_);
  }

private:
  ::starq_interfaces::msg::LegConfig msg_;
};

class Init_LegConfig_id
{
public:
  Init_LegConfig_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegConfig_kinematic_type id(::starq_interfaces::msg::LegConfig::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LegConfig_kinematic_type(msg_);
  }

private:
  ::starq_interfaces::msg::LegConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::LegConfig>()
{
  return starq_interfaces::msg::builder::Init_LegConfig_id();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_CONFIG__BUILDER_HPP_
