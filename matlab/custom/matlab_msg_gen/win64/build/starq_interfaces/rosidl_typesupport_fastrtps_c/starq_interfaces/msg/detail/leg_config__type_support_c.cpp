// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\LegConfig.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/leg_config__struct.h"
#include "starq_interfaces/msg/detail/leg_config__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // motor_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // motor_ids
#include "rosidl_runtime_c/string.h"  // kinematic_type
#include "rosidl_runtime_c/string_functions.h"  // kinematic_type

// forward declare type support functions


using _LegConfig__ros_msg_type = starq_interfaces__msg__LegConfig;

static bool _LegConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LegConfig__ros_msg_type * ros_message = static_cast<const _LegConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: kinematic_type
  {
    const rosidl_runtime_c__String * str = &ros_message->kinematic_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_ids
  {
    size_t size = ros_message->motor_ids.size;
    auto array_ptr = ros_message->motor_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _LegConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LegConfig__ros_msg_type * ros_message = static_cast<_LegConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: kinematic_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->kinematic_type.data) {
      rosidl_runtime_c__String__init(&ros_message->kinematic_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->kinematic_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'kinematic_type'\n");
      return false;
    }
  }

  // Field name: motor_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motor_ids.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->motor_ids);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->motor_ids, size)) {
      return "failed to create array for field 'motor_ids'";
    }
    auto array_ptr = ros_message->motor_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__LegConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LegConfig__ros_msg_type * ros_message = static_cast<const _LegConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kinematic_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kinematic_type.size + 1);
  // field.name motor_ids
  {
    size_t array_size = ros_message->motor_ids.size;
    auto array_ptr = ros_message->motor_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LegConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__LegConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__LegConfig(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: kinematic_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LegConfig__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__LegConfig(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LegConfig = {
  "starq_interfaces::msg",
  "LegConfig",
  _LegConfig__cdr_serialize,
  _LegConfig__cdr_deserialize,
  _LegConfig__get_serialized_size,
  _LegConfig__max_serialized_size
};

static rosidl_message_type_support_t _LegConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LegConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, LegConfig)() {
  return &_LegConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
