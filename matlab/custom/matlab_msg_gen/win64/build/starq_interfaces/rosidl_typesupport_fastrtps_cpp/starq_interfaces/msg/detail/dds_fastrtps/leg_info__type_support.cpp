// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\LegInfo.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "starq_interfaces/msg/detail/leg_info__struct.hpp"

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
  const starq_interfaces::msg::LegInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_estimate
  {
    cdr << ros_message.pos_estimate;
  }
  // Member: vel_estimate
  {
    cdr << ros_message.vel_estimate;
  }
  // Member: acc_estimate
  {
    cdr << ros_message.acc_estimate;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  starq_interfaces::msg::LegInfo & ros_message)
{
  // Member: pos_estimate
  {
    cdr >> ros_message.pos_estimate;
  }

  // Member: vel_estimate
  {
    cdr >> ros_message.vel_estimate;
  }

  // Member: acc_estimate
  {
    cdr >> ros_message.acc_estimate;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
get_serialized_size(
  const starq_interfaces::msg::LegInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_estimate
  {
    size_t array_size = ros_message.pos_estimate.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.pos_estimate[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_estimate
  {
    size_t array_size = ros_message.vel_estimate.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.vel_estimate[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_estimate
  {
    size_t array_size = ros_message.acc_estimate.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.acc_estimate[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
max_serialized_size_LegInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pos_estimate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_estimate
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acc_estimate
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

static bool _LegInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::LegInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LegInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<starq_interfaces::msg::LegInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LegInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::LegInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LegInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LegInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _LegInfo__callbacks = {
  "starq_interfaces::msg",
  "LegInfo",
  _LegInfo__cdr_serialize,
  _LegInfo__cdr_deserialize,
  _LegInfo__get_serialized_size,
  _LegInfo__max_serialized_size
};

static rosidl_message_type_support_t _LegInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LegInfo__callbacks,
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
get_message_type_support_handle<starq_interfaces::msg::LegInfo>()
{
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_LegInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, starq_interfaces, msg, LegInfo)() {
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_LegInfo__handle;
}

#ifdef __cplusplus
}
#endif
