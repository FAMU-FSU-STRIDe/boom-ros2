// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/msg/detail/leg_command__struct.hpp"
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

void LegCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::msg::LegCommand(_init);
}

void LegCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::msg::LegCommand *>(message_memory);
  typed_message->~LegCommand();
}

size_t size_function__LegCommand__input_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegCommand__input_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegCommand__input_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegCommand__input_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LegCommand__input_vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegCommand__input_vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegCommand__input_vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegCommand__input_vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LegCommand__input_acc(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegCommand__input_acc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegCommand__input_acc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegCommand__input_acc(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegCommand_message_member_array[3] = {
  {
    "input_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegCommand, input_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegCommand__input_pos,  // size() function pointer
    get_const_function__LegCommand__input_pos,  // get_const(index) function pointer
    get_function__LegCommand__input_pos,  // get(index) function pointer
    resize_function__LegCommand__input_pos  // resize(index) function pointer
  },
  {
    "input_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegCommand, input_vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegCommand__input_vel,  // size() function pointer
    get_const_function__LegCommand__input_vel,  // get_const(index) function pointer
    get_function__LegCommand__input_vel,  // get(index) function pointer
    resize_function__LegCommand__input_vel  // resize(index) function pointer
  },
  {
    "input_acc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::msg::LegCommand, input_acc),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegCommand__input_acc,  // size() function pointer
    get_const_function__LegCommand__input_acc,  // get_const(index) function pointer
    get_function__LegCommand__input_acc,  // get(index) function pointer
    resize_function__LegCommand__input_acc  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegCommand_message_members = {
  "starq_interfaces::msg",  // message namespace
  "LegCommand",  // message name
  3,  // number of fields
  sizeof(starq_interfaces::msg::LegCommand),
  LegCommand_message_member_array,  // message members
  LegCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  LegCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegCommand_message_members,
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
get_message_type_support_handle<starq_interfaces::msg::LegCommand>()
{
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, msg, LegCommand)() {
  return &::starq_interfaces::msg::rosidl_typesupport_introspection_cpp::LegCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
