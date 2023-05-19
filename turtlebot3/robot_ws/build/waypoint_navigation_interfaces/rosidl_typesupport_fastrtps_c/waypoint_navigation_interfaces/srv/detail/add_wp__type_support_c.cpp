// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/srv/detail/add_wp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"
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


using _AddWp_Request__ros_msg_type = waypoint_navigation_interfaces__srv__AddWp_Request;

static bool _AddWp_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddWp_Request__ros_msg_type * ros_message = static_cast<const _AddWp_Request__ros_msg_type *>(untyped_ros_message);
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

static bool _AddWp_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddWp_Request__ros_msg_type * ros_message = static_cast<_AddWp_Request__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddWp_Request__ros_msg_type * ros_message = static_cast<const _AddWp_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _AddWp_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Request(
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

static size_t _AddWp_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddWp_Request = {
  "waypoint_navigation_interfaces::srv",
  "AddWp_Request",
  _AddWp_Request__cdr_serialize,
  _AddWp_Request__cdr_deserialize,
  _AddWp_Request__get_serialized_size,
  _AddWp_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddWp_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddWp_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, AddWp_Request)() {
  return &_AddWp_Request__type_support;
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
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"
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


using _AddWp_Response__ros_msg_type = waypoint_navigation_interfaces__srv__AddWp_Response;

static bool _AddWp_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddWp_Response__ros_msg_type * ros_message = static_cast<const _AddWp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: overwrite
  {
    cdr << (ros_message->overwrite ? true : false);
  }

  return true;
}

static bool _AddWp_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddWp_Response__ros_msg_type * ros_message = static_cast<_AddWp_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: overwrite
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overwrite = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddWp_Response__ros_msg_type * ros_message = static_cast<const _AddWp_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name overwrite
  {
    size_t item_size = sizeof(ros_message->overwrite);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddWp_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: overwrite
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AddWp_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__srv__AddWp_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddWp_Response = {
  "waypoint_navigation_interfaces::srv",
  "AddWp_Response",
  _AddWp_Response__cdr_serialize,
  _AddWp_Response__cdr_deserialize,
  _AddWp_Response__get_serialized_size,
  _AddWp_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddWp_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddWp_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, AddWp_Response)() {
  return &_AddWp_Response__type_support;
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
#include "waypoint_navigation_interfaces/srv/add_wp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddWp__callbacks = {
  "waypoint_navigation_interfaces::srv",
  "AddWp",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, AddWp_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, AddWp_Response)(),
};

static rosidl_service_type_support_t AddWp__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddWp__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, srv, AddWp)() {
  return &AddWp__handle;
}

#if defined(__cplusplus)
}
#endif
