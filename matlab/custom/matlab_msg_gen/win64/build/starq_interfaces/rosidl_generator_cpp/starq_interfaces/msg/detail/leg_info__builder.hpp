// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__BUILDER_HPP_

#include "starq_interfaces/msg/detail/leg_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_LegInfo_acc_estimate
{
public:
  explicit Init_LegInfo_acc_estimate(::starq_interfaces::msg::LegInfo & msg)
  : msg_(msg)
  {}
  ::starq_interfaces::msg::LegInfo acc_estimate(::starq_interfaces::msg::LegInfo::_acc_estimate_type arg)
  {
    msg_.acc_estimate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::LegInfo msg_;
};

class Init_LegInfo_vel_estimate
{
public:
  explicit Init_LegInfo_vel_estimate(::starq_interfaces::msg::LegInfo & msg)
  : msg_(msg)
  {}
  Init_LegInfo_acc_estimate vel_estimate(::starq_interfaces::msg::LegInfo::_vel_estimate_type arg)
  {
    msg_.vel_estimate = std::move(arg);
    return Init_LegInfo_acc_estimate(msg_);
  }

private:
  ::starq_interfaces::msg::LegInfo msg_;
};

class Init_LegInfo_pos_estimate
{
public:
  Init_LegInfo_pos_estimate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegInfo_vel_estimate pos_estimate(::starq_interfaces::msg::LegInfo::_pos_estimate_type arg)
  {
    msg_.pos_estimate = std::move(arg);
    return Init_LegInfo_vel_estimate(msg_);
  }

private:
  ::starq_interfaces::msg::LegInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::LegInfo>()
{
  return starq_interfaces::msg::builder::Init_LegInfo_pos_estimate();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__BUILDER_HPP_
