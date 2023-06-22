// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\ODriveConfig.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/o_drive_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "starq_interfaces/msg/detail/o_drive_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace starq_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
cdr_serialize(
  const starq_interfaces::msg::ODriveConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: can_id
  cdr << ros_message.can_id;
  // Member: requested_state
  cdr << ros_message.requested_state;
  // Member: control_mode
  cdr << ros_message.control_mode;
  // Member: input_mode
  cdr << ros_message.input_mode;
  // Member: velocity_limit
  cdr << ros_message.velocity_limit;
  // Member: current_limit
  cdr << ros_message.current_limit;
  // Member: trap_traj_velocity_limit
  cdr << ros_message.trap_traj_velocity_limit;
  // Member: trap_traj_acceleration_limit
  cdr << ros_message.trap_traj_acceleration_limit;
  // Member: trap_traj_deceleration_limit
  cdr << ros_message.trap_traj_deceleration_limit;
  // Member: trap_traj_inertia
  cdr << ros_message.trap_traj_inertia;
  // Member: position_gain
  cdr << ros_message.position_gain;
  // Member: velocity_gain
  cdr << ros_message.velocity_gain;
  // Member: velocity_integrator_gain
  cdr << ros_message.velocity_integrator_gain;
  // Member: gear_ratio
  cdr << ros_message.gear_ratio;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  starq_interfaces::msg::ODriveConfig & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: can_id
  cdr >> ros_message.can_id;

  // Member: requested_state
  cdr >> ros_message.requested_state;

  // Member: control_mode
  cdr >> ros_message.control_mode;

  // Member: input_mode
  cdr >> ros_message.input_mode;

  // Member: velocity_limit
  cdr >> ros_message.velocity_limit;

  // Member: current_limit
  cdr >> ros_message.current_limit;

  // Member: trap_traj_velocity_limit
  cdr >> ros_message.trap_traj_velocity_limit;

  // Member: trap_traj_acceleration_limit
  cdr >> ros_message.trap_traj_acceleration_limit;

  // Member: trap_traj_deceleration_limit
  cdr >> ros_message.trap_traj_deceleration_limit;

  // Member: trap_traj_inertia
  cdr >> ros_message.trap_traj_inertia;

  // Member: position_gain
  cdr >> ros_message.position_gain;

  // Member: velocity_gain
  cdr >> ros_message.velocity_gain;

  // Member: velocity_integrator_gain
  cdr >> ros_message.velocity_integrator_gain;

  // Member: gear_ratio
  cdr >> ros_message.gear_ratio;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
get_serialized_size(
  const starq_interfaces::msg::ODriveConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_id
  {
    size_t item_size = sizeof(ros_message.can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: requested_state
  {
    size_t item_size = sizeof(ros_message.requested_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_mode
  {
    size_t item_size = sizeof(ros_message.control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_mode
  {
    size_t item_size = sizeof(ros_message.input_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_limit
  {
    size_t item_size = sizeof(ros_message.velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_limit
  {
    size_t item_size = sizeof(ros_message.current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trap_traj_velocity_limit
  {
    size_t item_size = sizeof(ros_message.trap_traj_velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trap_traj_acceleration_limit
  {
    size_t item_size = sizeof(ros_message.trap_traj_acceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trap_traj_deceleration_limit
  {
    size_t item_size = sizeof(ros_message.trap_traj_deceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trap_traj_inertia
  {
    size_t item_size = sizeof(ros_message.trap_traj_inertia);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_gain
  {
    size_t item_size = sizeof(ros_message.position_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_gain
  {
    size_t item_size = sizeof(ros_message.velocity_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_integrator_gain
  {
    size_t item_size = sizeof(ros_message.velocity_integrator_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_ratio
  {
    size_t item_size = sizeof(ros_message.gear_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
max_serialized_size_ODriveConfig(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: requested_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trap_traj_velocity_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trap_traj_acceleration_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trap_traj_deceleration_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trap_traj_inertia
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_integrator_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ODriveConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::ODriveConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ODriveConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<starq_interfaces::msg::ODriveConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ODriveConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::ODriveConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ODriveConfig__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ODriveConfig(full_bounded, 0);
}

static message_type_support_callbacks_t _ODriveConfig__callbacks = {
  "starq_interfaces::msg",
  "ODriveConfig",
  _ODriveConfig__cdr_serialize,
  _ODriveConfig__cdr_deserialize,
  _ODriveConfig__get_serialized_size,
  _ODriveConfig__max_serialized_size
};

static rosidl_message_type_support_t _ODriveConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ODriveConfig__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace starq_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::msg::ODriveConfig>()
{
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_ODriveConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, starq_interfaces, msg, ODriveConfig)() {
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_ODriveConfig__handle;
}

#ifdef __cplusplus
}
#endif
