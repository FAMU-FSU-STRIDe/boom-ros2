// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:msg\LegCommandArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/msg/detail/leg_command_array__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/msg/detail/leg_command_array__functions.h"
#include "starq_interfaces/msg/detail/leg_command_array__struct.h"


// Include directives for member types
// Member `commands`
#include "starq_interfaces/msg/leg_command.h"
// Member `commands`
#include "starq_interfaces/msg/detail/leg_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__msg__LegCommandArray__init(message_memory);
}

void LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_fini_function(void * message_memory)
{
  starq_interfaces__msg__LegCommandArray__fini(message_memory);
}

size_t LegCommandArray__rosidl_typesupport_introspection_c__size_function__LegCommand__commands(
  const void * untyped_member)
{
  const starq_interfaces__msg__LegCommand__Sequence * member =
    (const starq_interfaces__msg__LegCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * LegCommandArray__rosidl_typesupport_introspection_c__get_const_function__LegCommand__commands(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__LegCommand__Sequence * member =
    (const starq_interfaces__msg__LegCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LegCommandArray__rosidl_typesupport_introspection_c__get_function__LegCommand__commands(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__LegCommand__Sequence * member =
    (starq_interfaces__msg__LegCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LegCommandArray__rosidl_typesupport_introspection_c__resize_function__LegCommand__commands(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__LegCommand__Sequence * member =
    (starq_interfaces__msg__LegCommand__Sequence *)(untyped_member);
  starq_interfaces__msg__LegCommand__Sequence__fini(member);
  return starq_interfaces__msg__LegCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_member_array[1] = {
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__msg__LegCommandArray, commands),  // bytes offset in struct
    NULL,  // default value
    LegCommandArray__rosidl_typesupport_introspection_c__size_function__LegCommand__commands,  // size() function pointer
    LegCommandArray__rosidl_typesupport_introspection_c__get_const_function__LegCommand__commands,  // get_const(index) function pointer
    LegCommandArray__rosidl_typesupport_introspection_c__get_function__LegCommand__commands,  // get(index) function pointer
    LegCommandArray__rosidl_typesupport_introspection_c__resize_function__LegCommand__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_members = {
  "starq_interfaces__msg",  // message namespace
  "LegCommandArray",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__msg__LegCommandArray),
  LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_member_array,  // message members
  LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_type_support_handle = {
  0,
  &LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegCommandArray)() {
  LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, LegCommand)();
  if (!LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_type_support_handle.typesupport_identifier) {
    LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LegCommandArray__rosidl_typesupport_introspection_c__LegCommandArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
