// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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


using _NavigateToWp_Goal__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_Goal;

static bool _NavigateToWp_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_Goal__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Goal__ros_msg_type *>(untyped_ros_message);
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

static bool _NavigateToWp_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_Goal__ros_msg_type * ros_message = static_cast<_NavigateToWp_Goal__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_Goal__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Goal__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _NavigateToWp_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
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

static size_t _NavigateToWp_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_Goal = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Goal",
  _NavigateToWp_Goal__cdr_serialize,
  _NavigateToWp_Goal__cdr_deserialize,
  _NavigateToWp_Goal__get_serialized_size,
  _NavigateToWp_Goal__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Goal)() {
  return &_NavigateToWp_Goal__type_support;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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


using _NavigateToWp_Result__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_Result;

static bool _NavigateToWp_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_Result__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _NavigateToWp_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_Result__ros_msg_type * ros_message = static_cast<_NavigateToWp_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_Result__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Result__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _NavigateToWp_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
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

static size_t _NavigateToWp_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_Result = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Result",
  _NavigateToWp_Result__cdr_serialize,
  _NavigateToWp_Result__cdr_deserialize,
  _NavigateToWp_Result__get_serialized_size,
  _NavigateToWp_Result__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Result)() {
  return &_NavigateToWp_Result__type_support;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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


using _NavigateToWp_Feedback__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_Feedback;

static bool _NavigateToWp_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_Feedback__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _NavigateToWp_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_Feedback__ros_msg_type * ros_message = static_cast<_NavigateToWp_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_Feedback__ros_msg_type * ros_message = static_cast<const _NavigateToWp_Feedback__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _NavigateToWp_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
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

static size_t _NavigateToWp_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_Feedback = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Feedback",
  _NavigateToWp_Feedback__cdr_serialize,
  _NavigateToWp_Feedback__cdr_deserialize,
  _NavigateToWp_Feedback__get_serialized_size,
  _NavigateToWp_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)() {
  return &_NavigateToWp_Feedback__type_support;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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

#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"  // goal

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Goal)();


using _NavigateToWp_SendGoal_Request__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request;

static bool _NavigateToWp_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _NavigateToWp_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigateToWp_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_SendGoal_Request__ros_msg_type * ros_message = static_cast<_NavigateToWp_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _NavigateToWp_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigateToWp_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigateToWp_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_SendGoal_Request = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal_Request",
  _NavigateToWp_SendGoal_Request__cdr_serialize,
  _NavigateToWp_SendGoal_Request__cdr_deserialize,
  _NavigateToWp_SendGoal_Request__get_serialized_size,
  _NavigateToWp_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)() {
  return &_NavigateToWp_SendGoal_Request__type_support;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _NavigateToWp_SendGoal_Response__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response;

static bool _NavigateToWp_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _NavigateToWp_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigateToWp_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_SendGoal_Response__ros_msg_type * ros_message = static_cast<_NavigateToWp_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _NavigateToWp_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigateToWp_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigateToWp_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_SendGoal_Response = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal_Response",
  _NavigateToWp_SendGoal_Response__cdr_serialize,
  _NavigateToWp_SendGoal_Response__cdr_deserialize,
  _NavigateToWp_SendGoal_Response__get_serialized_size,
  _NavigateToWp_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)() {
  return &_NavigateToWp_SendGoal_Response__type_support;
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
#include "waypoint_navigation_interfaces/action/navigate_to_wp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NavigateToWp_SendGoal__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)(),
};

static rosidl_service_type_support_t NavigateToWp_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NavigateToWp_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal)() {
  return &NavigateToWp_SendGoal__handle;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _NavigateToWp_GetResult_Request__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request;

static bool _NavigateToWp_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_GetResult_Request__ros_msg_type * ros_message = static_cast<const _NavigateToWp_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigateToWp_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_GetResult_Request__ros_msg_type * ros_message = static_cast<_NavigateToWp_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_GetResult_Request__ros_msg_type * ros_message = static_cast<const _NavigateToWp_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigateToWp_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigateToWp_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_GetResult_Request = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult_Request",
  _NavigateToWp_GetResult_Request__cdr_serialize,
  _NavigateToWp_GetResult_Request__cdr_deserialize,
  _NavigateToWp_GetResult_Request__get_serialized_size,
  _NavigateToWp_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)() {
  return &_NavigateToWp_GetResult_Request__type_support;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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

// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Result)();


using _NavigateToWp_GetResult_Response__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response;

static bool _NavigateToWp_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_GetResult_Response__ros_msg_type * ros_message = static_cast<const _NavigateToWp_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigateToWp_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_GetResult_Response__ros_msg_type * ros_message = static_cast<_NavigateToWp_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_GetResult_Response__ros_msg_type * ros_message = static_cast<const _NavigateToWp_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigateToWp_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigateToWp_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_GetResult_Response = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult_Response",
  _NavigateToWp_GetResult_Response__cdr_serialize,
  _NavigateToWp_GetResult_Response__cdr_deserialize,
  _NavigateToWp_GetResult_Response__get_serialized_size,
  _NavigateToWp_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)() {
  return &_NavigateToWp_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "waypoint_navigation_interfaces/action/navigate_to_wp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NavigateToWp_GetResult__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)(),
};

static rosidl_service_type_support_t NavigateToWp_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NavigateToWp_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_GetResult)() {
  return &NavigateToWp_GetResult__handle;
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
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__functions.h"  // feedback

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)();


using _NavigateToWp_FeedbackMessage__ros_msg_type = waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage;

static bool _NavigateToWp_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigateToWp_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _NavigateToWp_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NavigateToWp_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigateToWp_FeedbackMessage__ros_msg_type * ros_message = static_cast<_NavigateToWp_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigateToWp_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _NavigateToWp_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NavigateToWp_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_waypoint_navigation_interfaces
size_t max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NavigateToWp_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_waypoint_navigation_interfaces__action__NavigateToWp_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NavigateToWp_FeedbackMessage = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_FeedbackMessage",
  _NavigateToWp_FeedbackMessage__cdr_serialize,
  _NavigateToWp_FeedbackMessage__cdr_deserialize,
  _NavigateToWp_FeedbackMessage__get_serialized_size,
  _NavigateToWp_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigateToWp_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, waypoint_navigation_interfaces, action, NavigateToWp_FeedbackMessage)() {
  return &_NavigateToWp_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
