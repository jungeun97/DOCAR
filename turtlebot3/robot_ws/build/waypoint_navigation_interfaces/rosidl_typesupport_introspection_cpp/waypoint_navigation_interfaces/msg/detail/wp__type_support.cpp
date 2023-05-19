// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace waypoint_navigation_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Wp_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) waypoint_navigation_interfaces::msg::Wp(_init);
}

void Wp_fini_function(void * message_memory)
{
  auto typed_message = static_cast<waypoint_navigation_interfaces::msg::Wp *>(message_memory);
  typed_message->~Wp();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Wp_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces::msg::Wp, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces::msg::Wp, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Wp_message_members = {
  "waypoint_navigation_interfaces::msg",  // message namespace
  "Wp",  // message name
  2,  // number of fields
  sizeof(waypoint_navigation_interfaces::msg::Wp),
  Wp_message_member_array,  // message members
  Wp_init_function,  // function to initialize message memory (memory has to be allocated)
  Wp_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Wp_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Wp_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace waypoint_navigation_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::msg::Wp>()
{
  return &::waypoint_navigation_interfaces::msg::rosidl_typesupport_introspection_cpp::Wp_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, msg, Wp)() {
  return &::waypoint_navigation_interfaces::msg::rosidl_typesupport_introspection_cpp::Wp_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
