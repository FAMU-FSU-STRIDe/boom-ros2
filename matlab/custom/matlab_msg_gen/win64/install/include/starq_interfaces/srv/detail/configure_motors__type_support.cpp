// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:srv\ConfigureMotors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/srv/detail/configure_motors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureMotors_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::srv::ConfigureMotors_Request(_init);
}

void ConfigureMotors_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::srv::ConfigureMotors_Request *>(message_memory);
  typed_message->~ConfigureMotors_Request();
}

size_t size_function__ConfigureMotors_Request__configs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::ODriveConfig> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureMotors_Request__configs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::ODriveConfig> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureMotors_Request__configs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::ODriveConfig> *>(untyped_member);
  return &member[index];
}

void resize_function__ConfigureMotors_Request__configs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::ODriveConfig> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureMotors_Request_message_member_array[1] = {
  {
    "configs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::ODriveConfig>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::srv::ConfigureMotors_Request, configs),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureMotors_Request__configs,  // size() function pointer
    get_const_function__ConfigureMotors_Request__configs,  // get_const(index) function pointer
    get_function__ConfigureMotors_Request__configs,  // get(index) function pointer
    resize_function__ConfigureMotors_Request__configs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureMotors_Request_message_members = {
  "starq_interfaces::srv",  // message namespace
  "ConfigureMotors_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::srv::ConfigureMotors_Request),
  ConfigureMotors_Request_message_member_array,  // message members
  ConfigureMotors_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureMotors_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureMotors_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureMotors_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::srv::ConfigureMotors_Request>()
{
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureMotors_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureMotors_Request)() {
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureMotors_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace starq_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ConfigureMotors_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::srv::ConfigureMotors_Response(_init);
}

void ConfigureMotors_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::srv::ConfigureMotors_Response *>(message_memory);
  typed_message->~ConfigureMotors_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureMotors_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::srv::ConfigureMotors_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureMotors_Response_message_members = {
  "starq_interfaces::srv",  // message namespace
  "ConfigureMotors_Response",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::srv::ConfigureMotors_Response),
  ConfigureMotors_Response_message_member_array,  // message members
  ConfigureMotors_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureMotors_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureMotors_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureMotors_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<starq_interfaces::srv::ConfigureMotors_Response>()
{
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureMotors_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureMotors_Response)() {
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureMotors_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "starq_interfaces/srv/detail/configure_motors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace starq_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ConfigureMotors_service_members = {
  "starq_interfaces::srv",  // service namespace
  "ConfigureMotors",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<starq_interfaces::srv::ConfigureMotors>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ConfigureMotors_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureMotors_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace starq_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<starq_interfaces::srv::ConfigureMotors>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureMotors_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::srv::ConfigureMotors_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::srv::ConfigureMotors_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureMotors)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<starq_interfaces::srv::ConfigureMotors>();
}

#ifdef __cplusplus
}
#endif
