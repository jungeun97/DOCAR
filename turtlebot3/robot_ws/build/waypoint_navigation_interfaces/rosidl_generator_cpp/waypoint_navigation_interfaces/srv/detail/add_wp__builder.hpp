// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__BUILDER_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__BUILDER_HPP_

#include "waypoint_navigation_interfaces/srv/detail/add_wp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddWp_Request_wp
{
public:
  Init_AddWp_Request_wp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::srv::AddWp_Request wp(::waypoint_navigation_interfaces::srv::AddWp_Request::_wp_type arg)
  {
    msg_.wp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::srv::AddWp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::srv::AddWp_Request>()
{
  return waypoint_navigation_interfaces::srv::builder::Init_AddWp_Request_wp();
}

}  // namespace waypoint_navigation_interfaces


namespace waypoint_navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddWp_Response_overwrite
{
public:
  Init_AddWp_Response_overwrite()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation_interfaces::srv::AddWp_Response overwrite(::waypoint_navigation_interfaces::srv::AddWp_Response::_overwrite_type arg)
  {
    msg_.overwrite = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation_interfaces::srv::AddWp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation_interfaces::srv::AddWp_Response>()
{
  return waypoint_navigation_interfaces::srv::builder::Init_AddWp_Response_overwrite();
}

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__BUILDER_HPP_
