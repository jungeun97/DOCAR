// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from waypoint_navigation_interfaces:srv/GetWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/srv/detail/get_wp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.h"
#include "waypoint_navigation_interfaces/srv/detail/get_wp__functions.h"
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

#include "rosidl_runtime_c/string.h"  // wp_id
#include "rosidl_runtime_c/string_functions.h"  // wp_id

// forward declare type support functions


using _GetWp_Request__ros_msg_type = waypoint_navigation_interfaces__srv__GetWp_Request;

static bool _GetWp_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWp_Request__ros_msg_type * ros_message = static_cast<const _GetWp_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wp_id
  {
    const rosidl_runtime_c__String * str = &ros_message->wp_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetWp_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWp_Request__ros_msg_type * ros_message = static_cast<_GetWp_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wp_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wp_id.data) {
      rosidl_runtime_c__String__init(&ros_message->wp_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wp_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wp_id'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWp_Request__ros_msg_type * ros_message = static_cast<const _GetWp_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wp_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wp_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetWp_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wp_id
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

static size_t _GetWp_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetWp_Request = {
  "waypoint_navigation_interfaces::srv",
  "GetWp_Request",
  _GetWp_Request__cdr_serialize,
  _GetWp_Request__cdr_deserialize,
  _GetWp_Request__get_serialized_size,
  _GetWp_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetWp_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWp_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, GetWp_Request)() {
  return &_GetWp_Request__type_support;
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
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__functions.h"
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

#include "waypoint_navigation_interfaces/msg/detail/wp__functions.h"  // wp

// forward declare type support functions
size_t get_serialized_size_waypoint_navigation_interfaces__msg__Wp(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_waypoint_navigation_interfaces__msg__Wp(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, msg, Wp)();


using _GetWp_Response__ros_msg_type = waypoint_navigation_interfaces__srv__GetWp_Response;

static bool _GetWp_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetWp_Response__ros_msg_type * ros_message = static_cast<const _GetWp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, msg, Wp
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetWp_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetWp_Response__ros_msg_type * ros_message = static_cast<_GetWp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, msg, Wp
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetWp_Response__ros_msg_type * ros_message = static_cast<const _GetWp_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wp

  current_alignment += get_serialized_size_waypoint_navigation_interfaces__msg__Wp(
    &(ros_message->wp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetWp_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_waypoint_navigation_interfaces__msg__Wp(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetWp_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__srv__GetWp_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetWp_Response = {
  "waypoint_navigation_interfaces::srv",
  "GetWp_Response",
  _GetWp_Response__cdr_serialize,
  _GetWp_Response__cdr_deserialize,
  _GetWp_Response__get_serialized_size,
  _GetWp_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetWp_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetWp_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, GetWp_Response)() {
  return &_GetWp_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "waypoint_navigation_interfaces/srv/get_wp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetWp__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "GetWp",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, GetWp_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, GetWp_Response)(),
};

static rosidl_service_type_support_t GetWp__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetWp__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, GetWp)() {
  return &GetWp__handle;
}

#if defined(__cplusplus)
}
#endif
