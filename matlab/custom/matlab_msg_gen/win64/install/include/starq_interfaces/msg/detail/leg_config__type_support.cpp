// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/msg/detail/leg_config__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LegConfig_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::msg::LegConfig(_init);
}

void LegConfig_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::msg::LegConfig *>(message_memory);
  typed_message->~LegConfig();
}

size_t size_function__LegConfig__motor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegConfig__motor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LegConfig__motor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__LegConfig__motor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegConfig_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegConfig, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kinematic_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegConfig, kinematic_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegConfig, motor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegConfig__motor_ids,  // size() function pointer
    get_const_function__LegConfig__motor_ids,  // get_const(index) function pointer
    get_function__LegConfig__motor_ids,  // get(index) function pointer
    resize_function__LegConfig__motor_ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegConfig_message_members = {
  "starq_interfaces::msg",  // message namespace
  "LegConfig",  // message name
  3,  // number of fields
  sizeof(starq_interfaces::msg::LegConfig),
  LegConfig_message_member_array,  // message members
  LegConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  LegConfig_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegConfig_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegConfig_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::msg::LegConfig>()
{
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegConfig_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, msg, LegConfig)() {
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegConfig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
