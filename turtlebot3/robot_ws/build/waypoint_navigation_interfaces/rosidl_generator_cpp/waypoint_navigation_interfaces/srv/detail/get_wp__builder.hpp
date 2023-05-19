// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation_interfaces:srv/GetWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__BUILDER_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__BUILDER_HPP_

#include "waypoint_navigation_interfaces/srv/detail/get_wp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWp_Request_wp_id
{
public:
  Init_GetWp_Request_wp_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::srv::GetWp_Request wp_id(::waypoint_navigation_interfaces::srv::GetWp_Request::_wp_id_type arg)
  {
    msg_.wp_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::srv::GetWp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::srv::GetWp_Request>()
{
  return waypoint_navigation_interfaces::srv::builder::Init_GetWp_Request_wp_id();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWp_Response_wp
{
public:
  Init_GetWp_Response_wp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::srv::GetWp_Response wp(::waypoint_navigation_interfaces::srv::GetWp_Response::_wp_type arg)
  {
    msg_.wp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::srv::GetWp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::srv::GetWp_Response>()
{
  return waypoint_navigation_interfaces::srv::builder::Init_GetWp_Response_wp();
}

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__GET_WP__BUILDER_HPP_
