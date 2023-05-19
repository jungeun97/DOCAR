// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"

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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Goal & ros_message,
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
  waypoint_navigation_interfaces::action::NavigateToWp_Goal & ros_message)
{
  // Member: wp_id
  cdr >> ros_message.wp_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Goal & ros_message,
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
max_serialized_size_NavigateToWp_Goal(
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

static bool _NavigateToWp_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_Goal__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Goal",
  _NavigateToWp_Goal__cdr_serialize,
  _NavigateToWp_Goal__cdr_deserialize,
  _NavigateToWp_Goal__get_serialized_size,
  _NavigateToWp_Goal__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Goal>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Goal)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Goal__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_Result & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_Result__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Result",
  _NavigateToWp_Result__cdr_serialize,
  _NavigateToWp_Result__cdr_deserialize,
  _NavigateToWp_Result__get_serialized_size,
  _NavigateToWp_Result__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Result>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Result)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Result__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_Feedback & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_Feedback__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_Feedback",
  _NavigateToWp_Feedback__cdr_serialize,
  _NavigateToWp_Feedback__cdr_deserialize,
  _NavigateToWp_Feedback__get_serialized_size,
  _NavigateToWp_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_Feedback__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace waypoint_navigation_interfaces
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  waypoint_navigation_interfaces::action::NavigateToWp_Goal &);
size_t get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_NavigateToWp_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_NavigateToWp_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_SendGoal_Request__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal_Request",
  _NavigateToWp_SendGoal_Request__cdr_serialize,
  _NavigateToWp_SendGoal_Request__cdr_deserialize,
  _NavigateToWp_SendGoal_Request__get_serialized_size,
  _NavigateToWp_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal_Request__handle;
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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_SendGoal_Response__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal_Response",
  _NavigateToWp_SendGoal_Response__cdr_serialize,
  _NavigateToWp_SendGoal_Response__cdr_deserialize,
  _NavigateToWp_SendGoal_Response__get_serialized_size,
  _NavigateToWp_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal_Response__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _NavigateToWp_SendGoal__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)(),
};

static rosidl_service_type_support_t _NavigateToWp_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_SendGoal__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_GetResult_Request__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult_Request",
  _NavigateToWp_GetResult_Request__cdr_serialize,
  _NavigateToWp_GetResult_Request__cdr_deserialize,
  _NavigateToWp_GetResult_Request__get_serialized_size,
  _NavigateToWp_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult_Request__handle;
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
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  waypoint_navigation_interfaces::action::NavigateToWp_Result &);
size_t get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Result &,
  size_t current_alignment);
size_t
max_serialized_size_NavigateToWp_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_NavigateToWp_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_GetResult_Response__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult_Response",
  _NavigateToWp_GetResult_Response__cdr_serialize,
  _NavigateToWp_GetResult_Response__cdr_deserialize,
  _NavigateToWp_GetResult_Response__get_serialized_size,
  _NavigateToWp_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _NavigateToWp_GetResult__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)(),
};

static rosidl_service_type_support_t _NavigateToWp_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_GetResult__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace waypoint_navigation_interfaces
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  waypoint_navigation_interfaces::action::NavigateToWp_Feedback &);
size_t get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_NavigateToWp_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_serialize(
  const waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
get_serialized_size(
  const waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_waypoint_navigation_interfaces
max_serialized_size_NavigateToWp_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::max_serialized_size_NavigateToWp_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NavigateToWp_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigateToWp_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigateToWp_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigateToWp_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NavigateToWp_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _NavigateToWp_FeedbackMessage__callbacks = {
  "waypoint_navigation_interfaces::action",
  "NavigateToWp_FeedbackMessage",
  _NavigateToWp_FeedbackMessage__cdr_serialize,
  _NavigateToWp_FeedbackMessage__cdr_deserialize,
  _NavigateToWp_FeedbackMessage__get_serialized_size,
  _NavigateToWp_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _NavigateToWp_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigateToWp_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>()
{
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_FeedbackMessage)() {
  return &waypoint_navigation_interfaces::action::typesupport_fastrtps_cpp::_NavigateToWp_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
