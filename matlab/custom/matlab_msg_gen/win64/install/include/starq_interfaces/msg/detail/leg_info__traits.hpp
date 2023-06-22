// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__TRAITS_HPP_
#define STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__TRAITS_HPP_

#include "starq_interfaces/msg/detail/leg_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::msg::LegInfo>()
{
  return "starq_interfaces::msg::LegInfo";
}

template<>
inline const char * name<starq_interfaces::msg::LegInfo>()
{
  return "starq_interfaces/msg/LegInfo";
}

template<>
struct has_fixed_size<starq_interfaces::msg::LegInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<starq_interfaces::msg::LegInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<starq_interfaces::msg::LegInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STARQ_INTERFACES__MSG__DETAIL__LEG_INFO__TRAITS_HPP_
