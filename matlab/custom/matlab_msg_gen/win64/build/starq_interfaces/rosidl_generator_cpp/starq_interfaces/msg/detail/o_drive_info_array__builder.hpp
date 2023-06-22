// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from starq_interfaces:msg\ODriveInfoArray.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO_ARRAY__BUILDER_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO_ARRAY__BUILDER_HPP_

#include "starq_interfaces/msg/detail/o_drive_info_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace starq_interfaces
{

namespace msg
{

namespace builder
{

class Init_ODriveInfoArray_infos
{
public:
  Init_ODriveInfoArray_infos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::starq_interfaces::msg::ODriveInfoArray infos(::starq_interfaces::msg::ODriveInfoArray::_infos_type arg)
  {
    msg_.infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::starq_interfaces::msg::ODriveInfoArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::starq_interfaces::msg::ODriveInfoArray>()
{
  return starq_interfaces::msg::builder::Init_ODriveInfoArray_infos();
}

}  // namespace starq_interfaces

#endif  // STARQ_INTERFACES__MSG__DETAIL__O_DRIVE_INFO_ARRAY__BUILDER_HPP_
