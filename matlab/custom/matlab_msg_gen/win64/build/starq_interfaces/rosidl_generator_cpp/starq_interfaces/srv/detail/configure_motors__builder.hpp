// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:srv\ConfigureMotors.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__BUILDER_HPP_
#define STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__BUILDER_HPP_

#include "starq_interfaces/srv/detail/configure_motors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConfigureMotors_Request_configs
{
public:
  Init_ConfigureMotors_Request_configs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::starq_interfaces::srv::ConfigureMotors_Request configs(::starq_interfaces::srv::ConfigureMotors_Request::_configs_type arg)
  {
    msg_.configs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::srv::ConfigureMotors_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::srv::ConfigureMotors_Request>()
{
  return starq_interfaces::srv::builder::Init_ConfigureMotors_Request_configs();
}

}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::srv::ConfigureMotors_Response>()
{
  return ::starq_interfaces::srv::ConfigureMotors_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__BUILDER_HPP_
