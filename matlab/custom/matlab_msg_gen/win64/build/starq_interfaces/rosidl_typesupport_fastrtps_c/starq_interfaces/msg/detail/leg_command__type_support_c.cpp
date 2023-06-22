// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\LegCommand.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/leg_command__struct.h"
#include "starq_interfaces/msg/detail/leg_command__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // input_acc, input_pos, input_vel
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // input_acc, input_pos, input_vel

// forward declare type support functions


using _LegCommand__ros_msg_type = starq_interfaces__msg__LegCommand;

static bool _LegCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LegCommand__ros_msg_type * ros_message = static_cast<const _LegCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: input_pos
  {
    size_t size = ros_message->input_pos.size;
    auto array_ptr = ros_message->input_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: input_vel
  {
    size_t size = ros_message->input_vel.size;
    auto array_ptr = ros_message->input_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: input_acc
  {
    size_t size = ros_message->input_acc.size;
    auto array_ptr = ros_message->input_acc.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LegCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LegCommand__ros_msg_type * ros_message = static_cast<_LegCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: input_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_pos.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->input_pos);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->input_pos, size)) {
      return "failed to create array for field 'input_pos'";
    }
    auto array_ptr = ros_message->input_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: input_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_vel.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->input_vel);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->input_vel, size)) {
      return "failed to create array for field 'input_vel'";
    }
    auto array_ptr = ros_message->input_vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: input_acc
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_acc.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->input_acc);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->input_acc, size)) {
      return "failed to create array for field 'input_acc'";
    }
    auto array_ptr = ros_message->input_acc.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__LegCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LegCommand__ros_msg_type * ros_message = static_cast<const _LegCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_pos
  {
    size_t array_size = ros_message->input_pos.size;
    auto array_ptr = ros_message->input_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_vel
  {
    size_t array_size = ros_message->input_vel.size;
    auto array_ptr = ros_message->input_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_acc
  {
    size_t array_size = ros_message->input_acc.size;
    auto array_ptr = ros_message->input_acc.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LegCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__LegCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__LegCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_acc
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LegCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__LegCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LegCommand = {
  "starq_interfaces::msg",
  "LegCommand",
  _LegCommand__cdr_serialize,
  _LegCommand__cdr_deserialize,
  _LegCommand__get_serialized_size,
  _LegCommand__max_serialized_size
};

static rosidl_message_type_support_t _LegCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LegCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, LegCommand)() {
  return &_LegCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
