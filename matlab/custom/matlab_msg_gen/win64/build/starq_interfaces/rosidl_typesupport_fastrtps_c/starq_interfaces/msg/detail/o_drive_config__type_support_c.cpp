// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:msg\ODriveConfig.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/msg/detail/o_drive_config__struct.h"
#include "starq_interfaces/msg/detail/o_drive_config__functions.h"
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


using _ODriveConfig__ros_msg_type = starq_interfaces__msg__ODriveConfig;

static bool _ODriveConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODriveConfig__ros_msg_type * ros_message = static_cast<const _ODriveConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: can_id
  {
    cdr << ros_message->can_id;
  }

  // Field name: requested_state
  {
    cdr << ros_message->requested_state;
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: input_mode
  {
    cdr << ros_message->input_mode;
  }

  // Field name: velocity_limit
  {
    cdr << ros_message->velocity_limit;
  }

  // Field name: current_limit
  {
    cdr << ros_message->current_limit;
  }

  // Field name: trap_traj_velocity_limit
  {
    cdr << ros_message->trap_traj_velocity_limit;
  }

  // Field name: trap_traj_acceleration_limit
  {
    cdr << ros_message->trap_traj_acceleration_limit;
  }

  // Field name: trap_traj_deceleration_limit
  {
    cdr << ros_message->trap_traj_deceleration_limit;
  }

  // Field name: trap_traj_inertia
  {
    cdr << ros_message->trap_traj_inertia;
  }

  // Field name: position_gain
  {
    cdr << ros_message->position_gain;
  }

  // Field name: velocity_gain
  {
    cdr << ros_message->velocity_gain;
  }

  // Field name: velocity_integrator_gain
  {
    cdr << ros_message->velocity_integrator_gain;
  }

  // Field name: gear_ratio
  {
    cdr << ros_message->gear_ratio;
  }

  return true;
}

static bool _ODriveConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODriveConfig__ros_msg_type * ros_message = static_cast<_ODriveConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: can_id
  {
    cdr >> ros_message->can_id;
  }

  // Field name: requested_state
  {
    cdr >> ros_message->requested_state;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: input_mode
  {
    cdr >> ros_message->input_mode;
  }

  // Field name: velocity_limit
  {
    cdr >> ros_message->velocity_limit;
  }

  // Field name: current_limit
  {
    cdr >> ros_message->current_limit;
  }

  // Field name: trap_traj_velocity_limit
  {
    cdr >> ros_message->trap_traj_velocity_limit;
  }

  // Field name: trap_traj_acceleration_limit
  {
    cdr >> ros_message->trap_traj_acceleration_limit;
  }

  // Field name: trap_traj_deceleration_limit
  {
    cdr >> ros_message->trap_traj_deceleration_limit;
  }

  // Field name: trap_traj_inertia
  {
    cdr >> ros_message->trap_traj_inertia;
  }

  // Field name: position_gain
  {
    cdr >> ros_message->position_gain;
  }

  // Field name: velocity_gain
  {
    cdr >> ros_message->velocity_gain;
  }

  // Field name: velocity_integrator_gain
  {
    cdr >> ros_message->velocity_integrator_gain;
  }

  // Field name: gear_ratio
  {
    cdr >> ros_message->gear_ratio;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__msg__ODriveConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODriveConfig__ros_msg_type * ros_message = static_cast<const _ODriveConfig__ros_msg_type *>(untyped_ros_message);
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
  // field.name can_id
  {
    size_t item_size = sizeof(ros_message->can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name requested_state
  {
    size_t item_size = sizeof(ros_message->requested_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_mode
  {
    size_t item_size = sizeof(ros_message->input_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_limit
  {
    size_t item_size = sizeof(ros_message->velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_limit
  {
    size_t item_size = sizeof(ros_message->current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trap_traj_velocity_limit
  {
    size_t item_size = sizeof(ros_message->trap_traj_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trap_traj_acceleration_limit
  {
    size_t item_size = sizeof(ros_message->trap_traj_acceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trap_traj_deceleration_limit
  {
    size_t item_size = sizeof(ros_message->trap_traj_deceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trap_traj_inertia
  {
    size_t item_size = sizeof(ros_message->trap_traj_inertia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_gain
  {
    size_t item_size = sizeof(ros_message->position_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_gain
  {
    size_t item_size = sizeof(ros_message->velocity_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_integrator_gain
  {
    size_t item_size = sizeof(ros_message->velocity_integrator_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_ratio
  {
    size_t item_size = sizeof(ros_message->gear_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODriveConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__msg__ODriveConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__msg__ODriveConfig(
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
  // member: can_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: requested_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trap_traj_velocity_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trap_traj_acceleration_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trap_traj_deceleration_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trap_traj_inertia
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_integrator_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ODriveConfig__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__msg__ODriveConfig(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ODriveConfig = {
  "starq_interfaces::msg",
  "ODriveConfig",
  _ODriveConfig__cdr_serialize,
  _ODriveConfig__cdr_deserialize,
  _ODriveConfig__get_serialized_size,
  _ODriveConfig__max_serialized_size
};

static rosidl_message_type_support_t _ODriveConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODriveConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveConfig)() {
  return &_ODriveConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
