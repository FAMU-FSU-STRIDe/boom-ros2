// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/leg_info__struct.h"
#include "starq_interfaces/msg/detail/leg_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // acc_estimate, pos_estimate, vel_estimate
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc_estimate, pos_estimate, vel_estimate

// forward declare type support functions


using _LegInfo__ros_msg_type = starq_interfaces__msg__LegInfo;

static bool _LegInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LegInfo__ros_msg_type * ros_message = static_cast<const _LegInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_estimate
  {
    size_t size = ros_message->pos_estimate.size;
    auto array_ptr = ros_message->pos_estimate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_estimate
  {
    size_t size = ros_message->vel_estimate.size;
    auto array_ptr = ros_message->vel_estimate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_estimate
  {
    size_t size = ros_message->acc_estimate.size;
    auto array_ptr = ros_message->acc_estimate.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LegInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LegInfo__ros_msg_type * ros_message = static_cast<_LegInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_estimate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pos_estimate.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pos_estimate);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pos_estimate, size)) {
      return "failed to create array for field 'pos_estimate'";
    }
    auto array_ptr = ros_message->pos_estimate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_estimate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel_estimate.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vel_estimate);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vel_estimate, size)) {
      return "failed to create array for field 'vel_estimate'";
    }
    auto array_ptr = ros_message->vel_estimate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_estimate
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc_estimate.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->acc_estimate);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->acc_estimate, size)) {
      return "failed to create array for field 'acc_estimate'";
    }
    auto array_ptr = ros_message->acc_estimate.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__LegInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LegInfo__ros_msg_type * ros_message = static_cast<const _LegInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_estimate
  {
    size_t array_size = ros_message->pos_estimate.size;
    auto array_ptr = ros_message->pos_estimate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_estimate
  {
    size_t array_size = ros_message->vel_estimate.size;
    auto array_ptr = ros_message->vel_estimate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_estimate
  {
    size_t array_size = ros_message->acc_estimate.size;
    auto array_ptr = ros_message->acc_estimate.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LegInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__LegInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__LegInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pos_estimate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_estimate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_estimate
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

static size_t _LegInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__LegInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LegInfo = {
  "starq_interfaces::msg",
  "LegInfo",
  _LegInfo__cdr_serialize,
  _LegInfo__cdr_deserialize,
  _LegInfo__get_serialized_size,
  _LegInfo__max_serialized_size
};

static rosidl_message_type_support_t _LegInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LegInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, LegInfo)() {
  return &_LegInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
