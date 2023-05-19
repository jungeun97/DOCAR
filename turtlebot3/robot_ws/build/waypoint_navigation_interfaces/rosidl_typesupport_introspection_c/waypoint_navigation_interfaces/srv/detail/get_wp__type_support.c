// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from waypoint_navigation_interfaces:srv/GetWp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "waypoint_navigation_interfaces/srv/detail/get_wp__rosidl_typesupport_introspection_c.h"
#include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "waypoint_navigation_interfaces/srv/detail/get_wp__functions.h"
#include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.h"


// Include directives for member types
// Member `wp_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation_interfaces__srv__GetWp_Request__init(message_memory);
}

void GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_fini_function(void * message_memory)
{
  waypoint_navigation_interfaces__srv__GetWp_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_member_array[1] = {
  {
    "wp_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces__srv__GetWp_Request, wp_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_members = {
  "waypoint_navigation_interfaces__srv",  // message namespace
  "GetWp_Request",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation_interfaces__srv__GetWp_Request),
  GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_member_array,  // message members
  GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_type_support_handle = {
  0,
  &GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Request)() {
  if (!GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_type_support_handle.typesupport_identifier) {
    GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWp_Request__rosidl_typesupport_introspection_c__GetWp_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__functions.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.h"


// Include directives for member types
// Member `wp`
#include "waypoint_navigation_interfaces/msg/wp.h"
// Member `wp`
#include "waypoint_navigation_interfaces/msg/detail/wp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation_interfaces__srv__GetWp_Response__init(message_memory);
}

void GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_fini_function(void * message_memory)
{
  waypoint_navigation_interfaces__srv__GetWp_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_member_array[1] = {
  {
    "wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces__srv__GetWp_Response, wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_members = {
  "waypoint_navigation_interfaces__srv",  // message namespace
  "GetWp_Response",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation_interfaces__srv__GetWp_Response),
  GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_member_array,  // message members
  GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_type_support_handle = {
  0,
  &GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Response)() {
  GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, msg, Wp)();
  if (!GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_type_support_handle.typesupport_identifier) {
    GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWp_Response__rosidl_typesupport_introspection_c__GetWp_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/get_wp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_members = {
  "waypoint_navigation_interfaces__srv",  // service namespace
  "GetWp",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_Request_message_type_support_handle,
  NULL  // response message
  // waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_Response_message_type_support_handle
};

static rosidl_service_type_support_t waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_type_support_handle = {
  0,
  &waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp)() {
  if (!waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_type_support_handle.typesupport_identifier) {
    waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, GetWp_Response)()->data;
  }

  return &waypoint_navigation_interfaces__srv__detail__get_wp__rosidl_typesupport_introspection_c__GetWp_service_type_support_handle;
}
