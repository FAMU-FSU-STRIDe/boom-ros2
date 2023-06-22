// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:msg\ODriveInfoArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/msg/detail/o_drive_info_array__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/msg/detail/o_drive_info_array__functions.h"
#include "starq_interfaces/msg/detail/o_drive_info_array__struct.h"


// Include directives for member types
// Member `infos`
#include "starq_interfaces/msg/o_drive_info.h"
// Member `infos`
#include "starq_interfaces/msg/detail/o_drive_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__msg__ODriveInfoArray__init(message_memory);
}

void ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_fini_function(void * message_memory)
{
  starq_interfaces__msg__ODriveInfoArray__fini(message_memory);
}

size_t ODriveInfoArray__rosidl_typesupport_introspection_c__size_function__ODriveInfo__infos(
  const void * untyped_member)
{
  const starq_interfaces__msg__ODriveInfo__Sequence * member =
    (const starq_interfaces__msg__ODriveInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ODriveInfoArray__rosidl_typesupport_introspection_c__get_const_function__ODriveInfo__infos(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__ODriveInfo__Sequence * member =
    (const starq_interfaces__msg__ODriveInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ODriveInfoArray__rosidl_typesupport_introspection_c__get_function__ODriveInfo__infos(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__ODriveInfo__Sequence * member =
    (starq_interfaces__msg__ODriveInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ODriveInfoArray__rosidl_typesupport_introspection_c__resize_function__ODriveInfo__infos(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__ODriveInfo__Sequence * member =
    (starq_interfaces__msg__ODriveInfo__Sequence *)(untyped_member);
  starq_interfaces__msg__ODriveInfo__Sequence__fini(member);
  return starq_interfaces__msg__ODriveInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_member_array[1] = {
  {
    "infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__msg__ODriveInfoArray, infos),  // bytes offset in struct
    NULL,  // default value
    ODriveInfoArray__rosidl_typesupport_introspection_c__size_function__ODriveInfo__infos,  // size() function pointer
    ODriveInfoArray__rosidl_typesupport_introspection_c__get_const_function__ODriveInfo__infos,  // get_const(index) function pointer
    ODriveInfoArray__rosidl_typesupport_introspection_c__get_function__ODriveInfo__infos,  // get(index) function pointer
    ODriveInfoArray__rosidl_typesupport_introspection_c__resize_function__ODriveInfo__infos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_members = {
  "starq_interfaces__msg",  // message namespace
  "ODriveInfoArray",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__msg__ODriveInfoArray),
  ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_member_array,  // message members
  ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_type_support_handle = {
  0,
  &ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, ODriveInfoArray)() {
  ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, ODriveInfo)();
  if (!ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_type_support_handle.typesupport_identifier) {
    ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ODriveInfoArray__rosidl_typesupport_introspection_c__ODriveInfoArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
