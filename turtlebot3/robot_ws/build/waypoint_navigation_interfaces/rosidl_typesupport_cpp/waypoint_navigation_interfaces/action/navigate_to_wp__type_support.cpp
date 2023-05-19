// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation_interfaces:action/NavigateToWp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_Goal_type_support_ids_t;

static const _NavigateToWp_Goal_type_support_ids_t _NavigateToWp_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_Goal_type_support_symbol_names_t _NavigateToWp_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Goal)),
  }
};

typedef struct _NavigateToWp_Goal_type_support_data_t
{
  void * data[2];
} _NavigateToWp_Goal_type_support_data_t;

static _NavigateToWp_Goal_type_support_data_t _NavigateToWp_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_Goal_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Goal>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Goal)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_Result_type_support_ids_t;

static const _NavigateToWp_Result_type_support_ids_t _NavigateToWp_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_Result_type_support_symbol_names_t _NavigateToWp_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Result)),
  }
};

typedef struct _NavigateToWp_Result_type_support_data_t
{
  void * data[2];
} _NavigateToWp_Result_type_support_data_t;

static _NavigateToWp_Result_type_support_data_t _NavigateToWp_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_Result_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Result>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Result)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_Feedback_type_support_ids_t;

static const _NavigateToWp_Feedback_type_support_ids_t _NavigateToWp_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_Feedback_type_support_symbol_names_t _NavigateToWp_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)),
  }
};

typedef struct _NavigateToWp_Feedback_type_support_data_t
{
  void * data[2];
} _NavigateToWp_Feedback_type_support_data_t;

static _NavigateToWp_Feedback_type_support_data_t _NavigateToWp_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_Feedback_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_Feedback)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_SendGoal_Request_type_support_ids_t;

static const _NavigateToWp_SendGoal_Request_type_support_ids_t _NavigateToWp_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_SendGoal_Request_type_support_symbol_names_t _NavigateToWp_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)),
  }
};

typedef struct _NavigateToWp_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavigateToWp_SendGoal_Request_type_support_data_t;

static _NavigateToWp_SendGoal_Request_type_support_data_t _NavigateToWp_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_SendGoal_Request_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Request)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_SendGoal_Response_type_support_ids_t;

static const _NavigateToWp_SendGoal_Response_type_support_ids_t _NavigateToWp_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_SendGoal_Response_type_support_symbol_names_t _NavigateToWp_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)),
  }
};

typedef struct _NavigateToWp_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavigateToWp_SendGoal_Response_type_support_data_t;

static _NavigateToWp_SendGoal_Response_type_support_data_t _NavigateToWp_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_SendGoal_Response_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal_Response)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_SendGoal_type_support_ids_t;

static const _NavigateToWp_SendGoal_type_support_ids_t _NavigateToWp_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_SendGoal_type_support_symbol_names_t _NavigateToWp_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_SendGoal)),
  }
};

typedef struct _NavigateToWp_SendGoal_type_support_data_t
{
  void * data[2];
} _NavigateToWp_SendGoal_type_support_data_t;

static _NavigateToWp_SendGoal_type_support_data_t _NavigateToWp_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_SendGoal_service_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateToWp_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_SendGoal>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_GetResult_Request_type_support_ids_t;

static const _NavigateToWp_GetResult_Request_type_support_ids_t _NavigateToWp_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_GetResult_Request_type_support_symbol_names_t _NavigateToWp_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)),
  }
};

typedef struct _NavigateToWp_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavigateToWp_GetResult_Request_type_support_data_t;

static _NavigateToWp_GetResult_Request_type_support_data_t _NavigateToWp_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_GetResult_Request_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Request)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_GetResult_Response_type_support_ids_t;

static const _NavigateToWp_GetResult_Response_type_support_ids_t _NavigateToWp_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_GetResult_Response_type_support_symbol_names_t _NavigateToWp_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)),
  }
};

typedef struct _NavigateToWp_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavigateToWp_GetResult_Response_type_support_data_t;

static _NavigateToWp_GetResult_Response_type_support_data_t _NavigateToWp_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_GetResult_Response_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult_Response)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_GetResult_type_support_ids_t;

static const _NavigateToWp_GetResult_type_support_ids_t _NavigateToWp_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_GetResult_type_support_symbol_names_t _NavigateToWp_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_GetResult)),
  }
};

typedef struct _NavigateToWp_GetResult_type_support_data_t
{
  void * data[2];
} _NavigateToWp_GetResult_type_support_data_t;

static _NavigateToWp_GetResult_type_support_data_t _NavigateToWp_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_GetResult_service_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateToWp_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_GetResult>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavigateToWp_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToWp_FeedbackMessage_type_support_ids_t;

static const _NavigateToWp_FeedbackMessage_type_support_ids_t _NavigateToWp_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavigateToWp_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToWp_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToWp_FeedbackMessage_type_support_symbol_names_t _NavigateToWp_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation_interfaces, action, NavigateToWp_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation_interfaces, action, NavigateToWp_FeedbackMessage)),
  }
};

typedef struct _NavigateToWp_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavigateToWp_FeedbackMessage_type_support_data_t;

static _NavigateToWp_FeedbackMessage_type_support_data_t _NavigateToWp_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToWp_FeedbackMessage_message_typesupport_map = {
  2,
  "waypoint_navigation_interfaces",
  &_NavigateToWp_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToWp_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToWp_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToWp_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToWp_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>()
{
  return &::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation_interfaces, action, NavigateToWp_FeedbackMessage)() {
  return get_message_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "waypoint_navigation_interfaces/action/detail/navigate_to_wp__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace waypoint_navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t NavigateToWp_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<waypoint_navigation_interfaces::action::NavigateToWp>()
{
  using ::waypoint_navigation_interfaces::action::rosidl_typesupport_cpp::NavigateToWp_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  NavigateToWp_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::waypoint_navigation_interfaces::action::NavigateToWp::Impl::SendGoalService>();
  NavigateToWp_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::waypoint_navigation_interfaces::action::NavigateToWp::Impl::GetResultService>();
  NavigateToWp_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::waypoint_navigation_interfaces::action::NavigateToWp::Impl::CancelGoalService>();
  NavigateToWp_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::waypoint_navigation_interfaces::action::NavigateToWp::Impl::FeedbackMessage>();
  NavigateToWp_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::waypoint_navigation_interfaces::action::NavigateToWp::Impl::GoalStatusMessage>();
  return &NavigateToWp_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
