// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/srv/detail/add_wp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.hpp"

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
  const waypoint_navigation_interfaces::srv::AddWp_Request & ros_message,
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
  waypoint_navigation_interfaces::srv::AddWp_Request & ros_message)
{
  // Member: wp
  waypoint_navigation_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::srv::AddWp_Request & ros_message,
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
max_serialized_size_AddWp_Request(
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

static bool _AddWp_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::AddWp_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddWp_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::srv::AddWp_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddWp_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::AddWp_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddWp_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddWp_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AddWp_Request__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "AddWp_Request",
  _AddWp_Request__cdr_serialize,
  _AddWp_Request__cdr_deserialize,
  _AddWp_Request__get_serialized_size,
  _AddWp_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddWp_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddWp_Request__callbacks,
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
get_message_type_support_handle<waypoint_navigation_interfaces::srv::AddWp_Request>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, AddWp_Request)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp_Request__handle;
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::srv::AddWp_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: overwrite
  cdr << (ros_message.overwrite ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::srv::AddWp_Response & ros_message)
{
  // Member: overwrite
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overwrite = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::srv::AddWp_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: overwrite
  {
    size_t item_size = sizeof(ros_message.overwrite);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_AddWp_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: overwrite
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AddWp_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::AddWp_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddWp_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::srv::AddWp_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddWp_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::srv::AddWp_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddWp_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddWp_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AddWp_Response__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "AddWp_Response",
  _AddWp_Response__cdr_serialize,
  _AddWp_Response__cdr_deserialize,
  _AddWp_Response__get_serialized_size,
  _AddWp_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddWp_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddWp_Response__callbacks,
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
get_message_type_support_handle<waypoint_navigation_interfaces::srv::AddWp_Response>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, AddWp_Response)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp_Response__handle;
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

static service_type_support_callbacks_t _AddWp__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "AddWp",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, AddWp_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, AddWp_Response)(),
};

static rosidl_service_type_support_t _AddWp__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddWp__callbacks,
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
get_service_type_support_handle<waypoint_navigation_interfaces::srv::AddWp>()
{
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, srv, AddWp)() {
  return &waypoint_navigation_interfaces::srv::typesupport_fastrtps_cpp::_AddWp__handle;
}

#ifdef __cplusplus
}
#endif
