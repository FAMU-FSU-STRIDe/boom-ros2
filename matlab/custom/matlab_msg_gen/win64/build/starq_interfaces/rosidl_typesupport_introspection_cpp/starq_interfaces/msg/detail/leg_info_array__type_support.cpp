// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\LegInfoArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/msg/detail/leg_info_array__struct.hpp"
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

void LegInfoArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::msg::LegInfoArray(_init);
}

void LegInfoArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::msg::LegInfoArray *>(message_memory);
  typed_message->~LegInfoArray();
}

size_t size_function__LegInfoArray__infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::LegInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegInfoArray__infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::LegInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__LegInfoArray__infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::LegInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__LegInfoArray__infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::LegInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegInfoArray_message_member_array[1] = {
  {
    "infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::LegInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegInfoArray, infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegInfoArray__infos,  // size() function pointer
    get_const_function__LegInfoArray__infos,  // get_const(index) function pointer
    get_function__LegInfoArray__infos,  // get(index) function pointer
    resize_function__LegInfoArray__infos  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegInfoArray_message_members = {
  "starq_interfaces::msg",  // message namespace
  "LegInfoArray",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::msg::LegInfoArray),
  LegInfoArray_message_member_array,  // message members
  LegInfoArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LegInfoArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegInfoArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegInfoArray_message_members,
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
get_message_type_support_handle<starq_interfaces::msg::LegInfoArray>()
{
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegInfoArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, msg, LegInfoArray)() {
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegInfoArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
