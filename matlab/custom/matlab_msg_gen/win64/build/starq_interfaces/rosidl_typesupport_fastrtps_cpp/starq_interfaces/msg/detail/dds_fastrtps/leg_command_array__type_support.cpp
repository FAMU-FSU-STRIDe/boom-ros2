// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:msg\LegCommandArray.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/msg/detail/leg_command_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "starq_interfaces/msg/detail/leg_command_array__struct.hpp"

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
bool cdr_serialize(
  const starq_interfaces::msg::LegCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  starq_interfaces::msg::LegCommand &);
size_t get_serialized_size(
  const starq_interfaces::msg::LegCommand &,
  size_t current_alignment);
size_t
max_serialized_size_LegCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace starq_interfaces


namespace starq_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
cdr_serialize(
  const starq_interfaces::msg::LegCommandArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: commands
  {
    size_t size = ros_message.commands.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      starq_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.commands[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  starq_interfaces::msg::LegCommandArray & ros_message)
{
  // Member: commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.commands.resize(size);
    for (size_t i = 0; i < size; i++) {
      starq_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.commands[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
get_serialized_size(
  const starq_interfaces::msg::LegCommandArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: commands
  {
    size_t array_size = ros_message.commands.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        starq_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.commands[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_starq_interfaces
max_serialized_size_LegCommandArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        starq_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_LegCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LegCommandArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::LegCommandArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LegCommandArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<starq_interfaces::msg::LegCommandArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LegCommandArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const starq_interfaces::msg::LegCommandArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LegCommandArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LegCommandArray(full_bounded, 0);
}

static message_type_support_callbacks_t _LegCommandArray__callbacks = {
  "starq_interfaces::msg",
  "LegCommandArray",
  _LegCommandArray__cdr_serialize,
  _LegCommandArray__cdr_deserialize,
  _LegCommandArray__get_serialized_size,
  _LegCommandArray__max_serialized_size
};

static rosidl_message_type_support_t _LegCommandArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LegCommandArray__callbacks,
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
get_message_type_support_handle<starq_interfaces::msg::LegCommandArray>()
{
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_LegCommandArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, starq_interfaces, msg, LegCommandArray)() {
  return &starq_interfaces::msg::typesupport_fastrtps_cpp::_LegCommandArray__handle;
}

#ifdef __cplusplus
}
#endif
