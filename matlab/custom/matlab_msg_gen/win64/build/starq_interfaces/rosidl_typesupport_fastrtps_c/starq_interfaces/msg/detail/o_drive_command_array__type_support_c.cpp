// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\ODriveCommandArray.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_command_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/o_drive_command_array__struct.h"
#include "starq_interfaces/msg/detail/o_drive_command_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "starq_interfaces/msg/detail/o_drive_command__functions.h"  // commands

// forward declare type support functions
size_t get_serialized_size_starq_interfaces__msg__ODriveCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_starq_interfaces__msg__ODriveCommand(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveCommand)();


using _ODriveCommandArray__ros_msg_type = starq_interfaces__msg__ODriveCommandArray;

static bool _ODriveCommandArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODriveCommandArray__ros_msg_type * ros_message = static_cast<const _ODriveCommandArray__ros_msg_type *>(untyped_ros_message);
  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveCommand
      )()->data);
    size_t size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ODriveCommandArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODriveCommandArray__ros_msg_type * ros_message = static_cast<_ODriveCommandArray__ros_msg_type *>(untyped_ros_message);
  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveCommand
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->commands.data) {
      starq_interfaces__msg__ODriveCommand__Sequence__fini(&ros_message->commands);
    }
    if (!starq_interfaces__msg__ODriveCommand__Sequence__init(&ros_message->commands, size)) {
      return "failed to create array for field 'commands'";
    }
    auto array_ptr = ros_message->commands.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__ODriveCommandArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODriveCommandArray__ros_msg_type * ros_message = static_cast<const _ODriveCommandArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name commands
  {
    size_t array_size = ros_message->commands.size;
    auto array_ptr = ros_message->commands.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_starq_interfaces__msg__ODriveCommand(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODriveCommandArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__ODriveCommandArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__ODriveCommandArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_starq_interfaces__msg__ODriveCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ODriveCommandArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__ODriveCommandArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ODriveCommandArray = {
  "starq_interfaces::msg",
  "ODriveCommandArray",
  _ODriveCommandArray__cdr_serialize,
  _ODriveCommandArray__cdr_deserialize,
  _ODriveCommandArray__get_serialized_size,
  _ODriveCommandArray__max_serialized_size
};

static rosidl_message_type_support_t _ODriveCommandArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODriveCommandArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveCommandArray)() {
  return &_ODriveCommandArray__type_support;
}

#if defined(__cplusplus)
}
#endif
