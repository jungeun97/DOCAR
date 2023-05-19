// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from waypoint_navigation_interfaces:srv/GetWps.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__TRAITS_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__TRAITS_HPP_

#include "waypoint_navigation_interfaces/srv/detail/get_wps__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::srv::GetWps_Request>()
{
  return "waypoint_navigation_interfaces::srv::GetWps_Request";
}

template<>
inline const char * name<waypoint_navigation_interfaces::srv::GetWps_Request>()
{
  return "waypoint_navigation_interfaces/srv/GetWps_Request";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::srv::GetWps_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::srv::GetWps_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<waypoint_navigation_interfaces::srv::GetWps_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::srv::GetWps_Response>()
{
  return "waypoint_navigation_interfaces::srv::GetWps_Response";
}

template<>
inline const char * name<waypoint_navigation_interfaces::srv::GetWps_Response>()
{
  return "waypoint_navigation_interfaces/srv/GetWps_Response";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::srv::GetWps_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::srv::GetWps_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<waypoint_navigation_interfaces::srv::GetWps_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation_interfaces::srv::GetWps>()
{
  return "waypoint_navigation_interfaces::srv::GetWps";
}

template<>
inline const char * name<waypoint_navigation_interfaces::srv::GetWps>()
{
  return "waypoint_navigation_interfaces/srv/GetWps";
}

template<>
struct has_fixed_size<waypoint_navigation_interfaces::srv::GetWps>
  : std::integral_constant<
    bool,
    has_fixed_size<waypoint_navigation_interfaces::srv::GetWps_Request>::value &&
    has_fixed_size<waypoint_navigation_interfaces::srv::GetWps_Response>::value
  >
{
};

template<>
struct has_bounded_size<waypoint_navigation_interfaces::srv::GetWps>
  : std::integral_constant<
    bool,
    has_bounded_size<waypoint_navigation_interfaces::srv::GetWps_Request>::value &&
    has_bounded_size<waypoint_navigation_interfaces::srv::GetWps_Response>::value
  >
{
};

template<>
struct is_service<waypoint_navigation_interfaces::srv::GetWps>
  : std::true_type
{
};

template<>
struct is_service_request<waypoint_navigation_interfaces::srv::GetWps_Request>
  : std::true_type
{
};

template<>
struct is_service_response<waypoint_navigation_interfaces::srv::GetWps_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WPS__TRAITS_HPP_
