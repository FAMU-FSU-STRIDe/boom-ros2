// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from starq_interfaces:srv\ConfigureMotors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "starq_interfaces/srv/detail/configure_motors__rosidl_typesupport_introspection_c.h"
#include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "starq_interfaces/srv/detail/configure_motors__functions.h"
#include "starq_interfaces/srv/detail/configure_motors__struct.h"


// Include directives for member types
// Member `configs`
#include "starq_interfaces/msg/o_drive_config.h"
// Member `configs`
#include "starq_interfaces/msg/detail/o_drive_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__srv__ConfigureMotors_Request__init(message_memory);
}

void ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_fini_function(void * message_memory)
{
  starq_interfaces__srv__ConfigureMotors_Request__fini(message_memory);
}

size_t ConfigureMotors_Request__rosidl_typesupport_introspection_c__size_function__ODriveConfig__configs(
  const void * untyped_member)
{
  const starq_interfaces__msg__ODriveConfig__Sequence * member =
    (const starq_interfaces__msg__ODriveConfig__Sequence *)(untyped_member);
  return member->size;
}

const void * ConfigureMotors_Request__rosidl_typesupport_introspection_c__get_const_function__ODriveConfig__configs(
  const void * untyped_member, size_t index)
{
  const starq_interfaces__msg__ODriveConfig__Sequence * member =
    (const starq_interfaces__msg__ODriveConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ConfigureMotors_Request__rosidl_typesupport_introspection_c__get_function__ODriveConfig__configs(
  void * untyped_member, size_t index)
{
  starq_interfaces__msg__ODriveConfig__Sequence * member =
    (starq_interfaces__msg__ODriveConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ConfigureMotors_Request__rosidl_typesupport_introspection_c__resize_function__ODriveConfig__configs(
  void * untyped_member, size_t size)
{
  starq_interfaces__msg__ODriveConfig__Sequence * member =
    (starq_interfaces__msg__ODriveConfig__Sequence *)(untyped_member);
  starq_interfaces__msg__ODriveConfig__Sequence__fini(member);
  return starq_interfaces__msg__ODriveConfig__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_member_array[1] = {
  {
    "configs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__srv__ConfigureMotors_Request, configs),  // bytes offset in struct
    NULL,  // default value
    ConfigureMotors_Request__rosidl_typesupport_introspection_c__size_function__ODriveConfig__configs,  // size() function pointer
    ConfigureMotors_Request__rosidl_typesupport_introspection_c__get_const_function__ODriveConfig__configs,  // get_const(index) function pointer
    ConfigureMotors_Request__rosidl_typesupport_introspection_c__get_function__ODriveConfig__configs,  // get(index) function pointer
    ConfigureMotors_Request__rosidl_typesupport_introspection_c__resize_function__ODriveConfig__configs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_members = {
  "starq_interfaces__srv",  // message namespace
  "ConfigureMotors_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__srv__ConfigureMotors_Request),
  ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_member_array,  // message members
  ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_type_support_handle = {
  0,
  &ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Request)() {
  ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, msg, ODriveConfig)();
  if (!ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_type_support_handle.typesupport_identifier) {
    ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureMotors_Request__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__rosidl_typesupport_introspection_c.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__functions.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  starq_interfaces__srv__ConfigureMotors_Response__init(message_memory);
}

void ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_fini_function(void * message_memory)
{
  starq_interfaces__srv__ConfigureMotors_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces__srv__ConfigureMotors_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_members = {
  "starq_interfaces__srv",  // message namespace
  "ConfigureMotors_Response",  // message name
  1,  // number of fields
  sizeof(starq_interfaces__srv__ConfigureMotors_Response),
  ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_member_array,  // message members
  ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_type_support_handle = {
  0,
  &ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Response)() {
  if (!ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_type_support_handle.typesupport_identifier) {
    ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureMotors_Response__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "starq_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_members = {
  "starq_interfaces__srv",  // service namespace
  "ConfigureMotors",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_Request_message_type_support_handle,
  NULL  // response message
  // starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_Response_message_type_support_handle
};

static rosidl_service_type_support_t starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_type_support_handle = {
  0,
  &starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_starq_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors)() {
  if (!starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_type_support_handle.typesupport_identifier) {
    starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, starq_interfaces, srv, ConfigureMotors_Response)()->data;
  }

  return &starq_interfaces__srv__detail__configure_motors__rosidl_typesupport_introspection_c__ConfigureMotors_service_type_support_handle;
}
