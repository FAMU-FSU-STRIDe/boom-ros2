// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from starq_interfaces:srv\ConfigureMotors.idl
// generated code does not contain a copyright notice

#ifndef STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__TRAITS_HPP_
#define STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__TRAITS_HPP_

#include "starq_interfaces/srv/detail/configure_motors__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::srv::ConfigureMotors_Request>()
{
  return "starq_interfaces::srv::ConfigureMotors_Request";
}

template<>
inline const char * name<starq_interfaces::srv::ConfigureMotors_Request>()
{
  return "starq_interfaces/srv/ConfigureMotors_Request";
}

template<>
struct has_fixed_size<starq_interfaces::srv::ConfigureMotors_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<starq_interfaces::srv::ConfigureMotors_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<starq_interfaces::srv::ConfigureMotors_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::srv::ConfigureMotors_Response>()
{
  return "starq_interfaces::srv::ConfigureMotors_Response";
}

template<>
inline const char * name<starq_interfaces::srv::ConfigureMotors_Response>()
{
  return "starq_interfaces/srv/ConfigureMotors_Response";
}

template<>
struct has_fixed_size<starq_interfaces::srv::ConfigureMotors_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<starq_interfaces::srv::ConfigureMotors_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<starq_interfaces::srv::ConfigureMotors_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<starq_interfaces::srv::ConfigureMotors>()
{
  return "starq_interfaces::srv::ConfigureMotors";
}

template<>
inline const char * name<starq_interfaces::srv::ConfigureMotors>()
{
  return "starq_interfaces/srv/ConfigureMotors";
}

template<>
struct has_fixed_size<starq_interfaces::srv::ConfigureMotors>
  : std::integral_constant<
    bool,
    has_fixed_size<starq_interfaces::srv::ConfigureMotors_Request>::value &&
    has_fixed_size<starq_interfaces::srv::ConfigureMotors_Response>::value
  >
{
};

template<>
struct has_bounded_size<starq_interfaces::srv::ConfigureMotors>
  : std::integral_constant<
    bool,
    has_bounded_size<starq_interfaces::srv::ConfigureMotors_Request>::value &&
    has_bounded_size<starq_interfaces::srv::ConfigureMotors_Response>::value
  >
{
};

template<>
struct is_service<starq_interfaces::srv::ConfigureMotors>
  : std::true_type
{
};

template<>
struct is_service_request<starq_interfaces::srv::ConfigureMotors_Request>
  : std::true_type
{
};

template<>
struct is_service_response<starq_interfaces::srv::ConfigureMotors_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STARQ_INTERFACES__SRV__DETAIL__CONFIGURE_MOTORS__TRAITS_HPP_
