// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from starq_interfaces:srv\ConfigureLegs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "starq_interfaces/srv/detail/configure_legs__struct.hpp"
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

void ConfigureLegs_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::srv::ConfigureLegs_Request(_init);
}

void ConfigureLegs_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::srv::ConfigureLegs_Request *>(message_memory);
  typed_message->~ConfigureLegs_Request();
}

size_t size_function__ConfigureLegs_Request__configs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<starq_interfaces::msg::LegConfig> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConfigureLegs_Request__configs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<starq_interfaces::msg::LegConfig> *>(untyped_member);
  return &member[index];
}

void * get_function__ConfigureLegs_Request__configs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<starq_interfaces::msg::LegConfig> *>(untyped_member);
  return &member[index];
}

void resize_function__ConfigureLegs_Request__configs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<starq_interfaces::msg::LegConfig> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureLegs_Request_message_member_array[1] = {
  {
    "configs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<starq_interfaces::msg::LegConfig>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::srv::ConfigureLegs_Request, configs),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConfigureLegs_Request__configs,  // size() function pointer
    get_const_function__ConfigureLegs_Request__configs,  // get_const(index) function pointer
    get_function__ConfigureLegs_Request__configs,  // get(index) function pointer
    resize_function__ConfigureLegs_Request__configs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureLegs_Request_message_members = {
  "starq_interfaces::srv",  // message namespace
  "ConfigureLegs_Request",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::srv::ConfigureLegs_Request),
  ConfigureLegs_Request_message_member_array,  // message members
  ConfigureLegs_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureLegs_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureLegs_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureLegs_Request_message_members,
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
get_message_type_support_handle<starq_interfaces::srv::ConfigureLegs_Request>()
{
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureLegs_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureLegs_Request)() {
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureLegs_Request_message_type_support_handle;
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
// #include "starq_interfaces/srv/detail/configure_legs__struct.hpp"
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

void ConfigureLegs_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) starq_interfaces::srv::ConfigureLegs_Response(_init);
}

void ConfigureLegs_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<starq_interfaces::srv::ConfigureLegs_Response *>(message_memory);
  typed_message->~ConfigureLegs_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConfigureLegs_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(starq_interfaces::srv::ConfigureLegs_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConfigureLegs_Response_message_members = {
  "starq_interfaces::srv",  // message namespace
  "ConfigureLegs_Response",  // message name
  1,  // number of fields
  sizeof(starq_interfaces::srv::ConfigureLegs_Response),
  ConfigureLegs_Response_message_member_array,  // message members
  ConfigureLegs_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureLegs_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConfigureLegs_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureLegs_Response_message_members,
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
get_message_type_support_handle<starq_interfaces::srv::ConfigureLegs_Response>()
{
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureLegs_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureLegs_Response)() {
  return &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureLegs_Response_message_type_support_handle;
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
// #include "starq_interfaces/srv/detail/configure_legs__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ConfigureLegs_service_members = {
  "starq_interfaces::srv",  // service namespace
  "ConfigureLegs",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<starq_interfaces::srv::ConfigureLegs>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ConfigureLegs_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConfigureLegs_service_members,
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
get_service_type_support_handle<starq_interfaces::srv::ConfigureLegs>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::starq_interfaces::srv::rosidl_typesupport_introspection_cpp::ConfigureLegs_service_type_support_handle;
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
        ::starq_interfaces::srv::ConfigureLegs_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::starq_interfaces::srv::ConfigureLegs_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, starq_interfaces, srv, ConfigureLegs)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<starq_interfaces::srv::ConfigureLegs>();
}

#ifdef __cplusplus
}
#endif
