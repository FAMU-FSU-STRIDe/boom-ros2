// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\ODriveInfo.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/o_drive_info__struct.h"
#include "starq_interfaces/msg/detail/o_drive_info__functions.h"
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


using _ODriveInfo__ros_msg_type = starq_interfaces__msg__ODriveInfo;

static bool _ODriveInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODriveInfo__ros_msg_type * ros_message = static_cast<const _ODriveInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: fault
  {
    cdr << ros_message->fault;
  }

  // Field name: pos_estimate
  {
    cdr << ros_message->pos_estimate;
  }

  // Field name: vel_estimate
  {
    cdr << ros_message->vel_estimate;
  }

  // Field name: torque_estimate
  {
    cdr << ros_message->torque_estimate;
  }

  // Field name: torque_target
  {
    cdr << ros_message->torque_target;
  }

  // Field name: iq_setpoint
  {
    cdr << ros_message->iq_setpoint;
  }

  // Field name: iq_measured
  {
    cdr << ros_message->iq_measured;
  }

  // Field name: motor_temperature
  {
    cdr << ros_message->motor_temperature;
  }

  // Field name: bus_voltage
  {
    cdr << ros_message->bus_voltage;
  }

  // Field name: bus_current
  {
    cdr << ros_message->bus_current;
  }

  // Field name: pos_error
  {
    cdr << ros_message->pos_error;
  }

  // Field name: vel_error
  {
    cdr << ros_message->vel_error;
  }

  // Field name: torque_error
  {
    cdr << ros_message->torque_error;
  }

  return true;
}

static bool _ODriveInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODriveInfo__ros_msg_type * ros_message = static_cast<_ODriveInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: fault
  {
    cdr >> ros_message->fault;
  }

  // Field name: pos_estimate
  {
    cdr >> ros_message->pos_estimate;
  }

  // Field name: vel_estimate
  {
    cdr >> ros_message->vel_estimate;
  }

  // Field name: torque_estimate
  {
    cdr >> ros_message->torque_estimate;
  }

  // Field name: torque_target
  {
    cdr >> ros_message->torque_target;
  }

  // Field name: iq_setpoint
  {
    cdr >> ros_message->iq_setpoint;
  }

  // Field name: iq_measured
  {
    cdr >> ros_message->iq_measured;
  }

  // Field name: motor_temperature
  {
    cdr >> ros_message->motor_temperature;
  }

  // Field name: bus_voltage
  {
    cdr >> ros_message->bus_voltage;
  }

  // Field name: bus_current
  {
    cdr >> ros_message->bus_current;
  }

  // Field name: pos_error
  {
    cdr >> ros_message->pos_error;
  }

  // Field name: vel_error
  {
    cdr >> ros_message->vel_error;
  }

  // Field name: torque_error
  {
    cdr >> ros_message->torque_error;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__ODriveInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODriveInfo__ros_msg_type * ros_message = static_cast<const _ODriveInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault
  {
    size_t item_size = sizeof(ros_message->fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_estimate
  {
    size_t item_size = sizeof(ros_message->pos_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_estimate
  {
    size_t item_size = sizeof(ros_message->vel_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_estimate
  {
    size_t item_size = sizeof(ros_message->torque_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_target
  {
    size_t item_size = sizeof(ros_message->torque_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iq_setpoint
  {
    size_t item_size = sizeof(ros_message->iq_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iq_measured
  {
    size_t item_size = sizeof(ros_message->iq_measured);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_temperature
  {
    size_t item_size = sizeof(ros_message->motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bus_voltage
  {
    size_t item_size = sizeof(ros_message->bus_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bus_current
  {
    size_t item_size = sizeof(ros_message->bus_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_error
  {
    size_t item_size = sizeof(ros_message->pos_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_error
  {
    size_t item_size = sizeof(ros_message->vel_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_error
  {
    size_t item_size = sizeof(ros_message->torque_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODriveInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__ODriveInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__ODriveInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_estimate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_estimate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_estimate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iq_setpoint
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iq_measured
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bus_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bus_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ODriveInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__ODriveInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ODriveInfo = {
  "starq_interfaces::msg",
  "ODriveInfo",
  _ODriveInfo__cdr_serialize,
  _ODriveInfo__cdr_deserialize,
  _ODriveInfo__get_serialized_size,
  _ODriveInfo__max_serialized_size
};

static rosidl_message_type_support_t _ODriveInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODriveInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveInfo)() {
  return &_ODriveInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
