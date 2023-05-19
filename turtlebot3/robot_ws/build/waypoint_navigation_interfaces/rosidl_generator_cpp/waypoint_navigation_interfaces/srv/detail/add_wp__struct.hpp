// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from waypoint_navigation_interfaces:srv/AddWp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_HPP_
#define WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'wp'
#include "waypoint_navigation_interfaces/msg/detail/wp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Request __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Request __declspec(deprecated)
#endif

namespace waypoint_navigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddWp_Request_
{
  using Type = AddWp_Request_<ContainerAllocator>;

  explicit AddWp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wp(_init)
  {
    (void)_init;
  }

  explicit AddWp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _wp_type =
    waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator>;
  _wp_type wp;

  // setters for named parameter idiom
  Type & set__wp(
    const waypoint_navigation_interfaces::msg::Wp_<ContainerAllocator> & _arg)
  {
    this->wp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Request
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Request
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddWp_Request_ & other) const
  {
    if (this->wp != other.wp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddWp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddWp_Request_

// alias to use template instance with default allocator
using AddWp_Request =
  waypoint_navigation_interfaces::srv::AddWp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation_interfaces


#ifndef _WIN32
# define DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Response __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Response __declspec(deprecated)
#endif

namespace waypoint_navigation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddWp_Response_
{
  using Type = AddWp_Response_<ContainerAllocator>;

  explicit AddWp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overwrite = false;
    }
  }

  explicit AddWp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->overwrite = false;
    }
  }

  // field types and members
  using _overwrite_type =
    bool;
  _overwrite_type overwrite;

  // setters for named parameter idiom
  Type & set__overwrite(
    const bool & _arg)
  {
    this->overwrite = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Response
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation_interfaces__srv__AddWp_Response
    std::shared_ptr<waypoint_navigation_interfaces::srv::AddWp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddWp_Response_ & other) const
  {
    if (this->overwrite != other.overwrite) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddWp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddWp_Response_

// alias to use template instance with default allocator
using AddWp_Response =
  waypoint_navigation_interfaces::srv::AddWp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

namespace waypoint_navigation_interfaces
{

namespace srv
{

struct AddWp
{
  using Request = waypoint_navigation_interfaces::srv::AddWp_Request;
  using Response = waypoint_navigation_interfaces::srv::AddWp_Response;
};

}  // namespace srv

}  // namespace waypoint_navigation_interfaces

#endif  // WAYPOINT_NAVIGATION_INTERFACES__SRV__DETAIL__ADD_WP__STRUCT_HPP_
