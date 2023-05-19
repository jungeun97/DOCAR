// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation_interfaces:srv/GetWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/srv/detail/get_wp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.hpp"

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

namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::srv::GetWp_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wp_id
  cdr << ros_message.wp_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::srv::GetWp_Request & ros_message)
{
  // Member: wp_id
  cdr >> ros_message.wp_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::srv::GetWp_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wp_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.wp_id.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_GetWp_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: wp_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetWp_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::GetWp_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetWp_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::srv::GetWp_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetWp_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::GetWp_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetWp_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetWp_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetWp_Request__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "GetWp_Request",
  _GetWp_Request__cdr_serialize,
  _GetWp_Request__cdr_deserialize,
  _GetWp_Request__get_serialized_size,
  _GetWp_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetWp_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWp_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::srv::GetWp_Request>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, GetWp_Request)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace waypoint_navigation_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const waypoint_navigation_interfaces::msg::Wp &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  waypoint_navigation_interfaces::msg::Wp &);
size_t get_serialized_size(
  const waypoint_navigation_interfaces::msg::Wp &,
  size_t current_alignment);
size_t
max_serialized_size_Wp(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::srv::GetWp_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wp
  waypoint_navigation_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::srv::GetWp_Response & ros_message)
{
  // Member: wp
  waypoint_navigation_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::srv::GetWp_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wp

  current_alignment +=
    waypoint_navigation_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_GetWp_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: wp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        waypoint_navigation_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Wp(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetWp_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::GetWp_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetWp_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::srv::GetWp_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetWp_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::GetWp_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetWp_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetWp_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetWp_Response__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "GetWp_Response",
  _GetWp_Response__cdr_serialize,
  _GetWp_Response__cdr_deserialize,
  _GetWp_Response__get_serialized_size,
  _GetWp_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetWp_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWp_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::srv::GetWp_Response>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, GetWp_Response)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetWp__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "GetWp",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, GetWp_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, GetWp_Response)(),
};

static rosidl_service_type_support_t _GetWp__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetWp__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation_interfaces::srv::GetWp>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, GetWp)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_GetWp__handle;
}

#ifdef __cplusplus
}
#endif
