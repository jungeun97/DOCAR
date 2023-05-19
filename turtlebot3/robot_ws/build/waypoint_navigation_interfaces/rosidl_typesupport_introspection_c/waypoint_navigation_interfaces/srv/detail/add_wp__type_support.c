// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "waypoint_navigation_interfaces/srv/detail/add_wp__rosidl_typesupport_introspection_c.h"
#include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"
#include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"


// Include directives for member types
// Member `wp`
#include "waypoint_navigation_interfaces/msg/wp.h"
// Member `wp`
#include "waypoint_navigation_interfaces/msg/detail/wp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation_interfaces__srv__AddWp_Request__init(message_memory);
}

void AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_fini_function(void * message_memory)
{
  waypoint_navigation_interfaces__srv__AddWp_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_member_array[1] = {
  {
    "wp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces__srv__AddWp_Request, wp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_members = {
  "waypoint_navigation_interfaces__srv",  // message namespace
  "AddWp_Request",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation_interfaces__srv__AddWp_Request),
  AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_member_array,  // message members
  AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_type_support_handle = {
  0,
  &AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Request)() {
  AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, msg, Wp)();
  if (!AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_type_support_handle.typesupport_identifier) {
    AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddWp_Request__rosidl_typesupport_introspection_c__AddWp_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__functions.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation_interfaces__srv__AddWp_Response__init(message_memory);
}

void AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_fini_function(void * message_memory)
{
  waypoint_navigation_interfaces__srv__AddWp_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_member_array[1] = {
  {
    "overwrite",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation_interfaces__srv__AddWp_Response, overwrite),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_members = {
  "waypoint_navigation_interfaces__srv",  // message namespace
  "AddWp_Response",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation_interfaces__srv__AddWp_Response),
  AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_member_array,  // message members
  AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_type_support_handle = {
  0,
  &AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Response)() {
  if (!AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_type_support_handle.typesupport_identifier) {
    AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddWp_Response__rosidl_typesupport_introspection_c__AddWp_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "waypoint_navigation_interfaces/srv/detail/add_wp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_members = {
  "waypoint_navigation_interfaces__srv",  // service namespace
  "AddWp",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_Request_message_type_support_handle,
  NULL  // response message
  // waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_Response_message_type_support_handle
};

static rosidl_service_type_support_t waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_type_support_handle = {
  0,
  &waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp)() {
  if (!waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_type_support_handle.typesupport_identifier) {
    waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation_interfaces, srv, AddWp_Response)()->data;
  }

  return &waypoint_navigation_interfaces__srv__detail__add_wp__rosidl_typesupport_introspection_c__AddWp_service_type_support_handle;
}
