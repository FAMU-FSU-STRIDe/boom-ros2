// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from starq_interfaces:srv\ConfigureMotors.idl
// generated code does not contain a copyright notice
#include "starq_interfaces/srv/detail/configure_motors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/srv/detail/configure_motors__struct.h"
#include "starq_interfaces/srv/detail/configure_motors__functions.h"
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

#include "starq_interfaces/msg/detail/o_drive_config__functions.h"  // configs

// forward declare type support functions
size_t get_serialized_size_starq_interfaces__msg__ODriveConfig(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_starq_interfaces__msg__ODriveConfig(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveConfig)();


using _ConfigureMotors_Request__ros_msg_type = starq_interfaces__srv__ConfigureMotors_Request;

static bool _ConfigureMotors_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureMotors_Request__ros_msg_type * ros_message = static_cast<const _ConfigureMotors_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: configs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveConfig
      )()->data);
    size_t size = ros_message->configs.size;
    auto array_ptr = ros_message->configs.data;
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

static bool _ConfigureMotors_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureMotors_Request__ros_msg_type * ros_message = static_cast<_ConfigureMotors_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: configs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, starq_interfaces, msg, ODriveConfig
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->configs.data) {
      starq_interfaces__msg__ODriveConfig__Sequence__fini(&ros_message->configs);
    }
    if (!starq_interfaces__msg__ODriveConfig__Sequence__init(&ros_message->configs, size)) {
      return "failed to create array for field 'configs'";
    }
    auto array_ptr = ros_message->configs.data;
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
size_t get_serialized_size_starq_interfaces__srv__ConfigureMotors_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureMotors_Request__ros_msg_type * ros_message = static_cast<const _ConfigureMotors_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name configs
  {
    size_t array_size = ros_message->configs.size;
    auto array_ptr = ros_message->configs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_starq_interfaces__msg__ODriveConfig(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureMotors_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__srv__ConfigureMotors_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__srv__ConfigureMotors_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: configs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_starq_interfaces__msg__ODriveConfig(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigureMotors_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__srv__ConfigureMotors_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigureMotors_Request = {
  "starq_interfaces::srv",
  "ConfigureMotors_Request",
  _ConfigureMotors_Request__cdr_serialize,
  _ConfigureMotors_Request__cdr_deserialize,
  _ConfigureMotors_Request__get_serialized_size,
  _ConfigureMotors_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureMotors_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureMotors_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, srv, ConfigureMotors_Request)() {
  return &_ConfigureMotors_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__struct.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _ConfigureMotors_Response__ros_msg_type = starq_interfaces__srv__ConfigureMotors_Response;

static bool _ConfigureMotors_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureMotors_Response__ros_msg_type * ros_message = static_cast<const _ConfigureMotors_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ConfigureMotors_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureMotors_Response__ros_msg_type * ros_message = static_cast<_ConfigureMotors_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t get_serialized_size_starq_interfaces__srv__ConfigureMotors_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureMotors_Response__ros_msg_type * ros_message = static_cast<const _ConfigureMotors_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureMotors_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_starq_interfaces__srv__ConfigureMotors_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_starq_interfaces
size_t max_serialized_size_starq_interfaces__srv__ConfigureMotors_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigureMotors_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_starq_interfaces__srv__ConfigureMotors_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigureMotors_Response = {
  "starq_interfaces::srv",
  "ConfigureMotors_Response",
  _ConfigureMotors_Response__cdr_serialize,
  _ConfigureMotors_Response__cdr_deserialize,
  _ConfigureMotors_Response__get_serialized_size,
  _ConfigureMotors_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureMotors_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureMotors_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, srv, ConfigureMotors_Response)() {
  return &_ConfigureMotors_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "starq_interfaces/srv/configure_motors.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConfigureMotors__callbacks = {
  "starq_interfaces::srv",
  "ConfigureMotors",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, srv, ConfigureMotors_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, srv, ConfigureMotors_Response)(),
};

static rosidl_service_type_support_t ConfigureMotors__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConfigureMotors__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, starq_interfaces, srv, ConfigureMotors)() {
  return &ConfigureMotors__handle;
}

#if defined(__cplusplus)
}
#endif
