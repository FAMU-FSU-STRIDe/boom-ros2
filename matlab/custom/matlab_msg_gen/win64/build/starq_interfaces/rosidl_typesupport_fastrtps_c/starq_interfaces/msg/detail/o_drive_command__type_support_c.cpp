// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\ODriveCommand.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/o_drive_command__struct.h"
#include "starq_interfaces/msg/detail/o_drive_command__functions.h"
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


// forward declare type support functions


using _ODriveCommand__ros_msg_type = starq_interfaces__msg__ODriveCommand;

static bool _ODriveCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODriveCommand__ros_msg_type * ros_message = static_cast<const _ODriveCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: input_position
  {
    cdr << ros_message->input_position;
  }

  // Field name: input_velocity
  {
    cdr << ros_message->input_velocity;
  }

  // Field name: input_torque
  {
    cdr << ros_message->input_torque;
  }

  return true;
}

static bool _ODriveCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODriveCommand__ros_msg_type * ros_message = static_cast<_ODriveCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: input_position
  {
    cdr >> ros_message->input_position;
  }

  // Field name: input_velocity
  {
    cdr >> ros_message->input_velocity;
  }

  // Field name: input_torque
  {
    cdr >> ros_message->input_torque;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__ODriveCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODriveCommand__ros_msg_type * ros_message = static_cast<const _ODriveCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_position
  {
    size_t item_size = sizeof(ros_message->input_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_velocity
  {
    size_t item_size = sizeof(ros_message->input_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_torque
  {
    size_t item_size = sizeof(ros_message->input_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODriveCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__ODriveCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__ODriveCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ODriveCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__ODriveCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ODriveCommand = {
  "starq_interfaces::msg",
  "ODriveCommand",
  _ODriveCommand__cdr_serialize,
  _ODriveCommand__cdr_deserialize,
  _ODriveCommand__get_serialized_size,
  _ODriveCommand__max_serialized_size
};

static rosidl_message_type_support_t _ODriveCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODriveCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveCommand)() {
  return &_ODriveCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
