// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from waypoint_navigation_interfaces:msg/Wp.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__FUNCTIONS_H_
#define WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "waypoint_navigation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "waypoint_navigation_interfaces/msg/detail/wp__struct.h"

/// Initialize msg/Wp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * waypoint_navigation_interfaces__msg__Wp
 * )) before or use
 * waypoint_navigation_interfaces__msg__Wp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__init(waypoint_navigation_interfaces__msg__Wp * msg);

/// Finalize msg/Wp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
void
waypoint_navigation_interfaces__msg__Wp__fini(waypoint_navigation_interfaces__msg__Wp * msg);

/// Create msg/Wp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * waypoint_navigation_interfaces__msg__Wp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
waypoint_navigation_interfaces__msg__Wp *
waypoint_navigation_interfaces__msg__Wp__create();

/// Destroy msg/Wp message.
/**
 * It calls
 * waypoint_navigation_interfaces__msg__Wp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
void
waypoint_navigation_interfaces__msg__Wp__destroy(waypoint_navigation_interfaces__msg__Wp * msg);

/// Check for msg/Wp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__are_equal(const waypoint_navigation_interfaces__msg__Wp * lhs, const waypoint_navigation_interfaces__msg__Wp * rhs);

/// Copy a msg/Wp message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__copy(
  const waypoint_navigation_interfaces__msg__Wp * input,
  waypoint_navigation_interfaces__msg__Wp * output);

/// Initialize array of msg/Wp messages.
/**
 * It allocates the memory for the number of elements and calls
 * waypoint_navigation_interfaces__msg__Wp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__Sequence__init(waypoint_navigation_interfaces__msg__Wp__Sequence * array, size_t size);

/// Finalize array of msg/Wp messages.
/**
 * It calls
 * waypoint_navigation_interfaces__msg__Wp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
void
waypoint_navigation_interfaces__msg__Wp__Sequence__fini(waypoint_navigation_interfaces__msg__Wp__Sequence * array);

/// Create array of msg/Wp messages.
/**
 * It allocates the memory for the array and calls
 * waypoint_navigation_interfaces__msg__Wp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
waypoint_navigation_interfaces__msg__Wp__Sequence *
waypoint_navigation_interfaces__msg__Wp__Sequence__create(size_t size);

/// Destroy array of msg/Wp messages.
/**
 * It calls
 * waypoint_navigation_interfaces__msg__Wp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
void
waypoint_navigation_interfaces__msg__Wp__Sequence__destroy(waypoint_navigation_interfaces__msg__Wp__Sequence * array);

/// Check for msg/Wp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__Sequence__are_equal(const waypoint_navigation_interfaces__msg__Wp__Sequence * lhs, const waypoint_navigation_interfaces__msg__Wp__Sequence * rhs);

/// Copy an array of msg/Wp messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_waypoint_navigation_interfaces
bool
waypoint_navigation_interfaces__msg__Wp__Sequence__copy(
  const waypoint_navigation_interfaces__msg__Wp__Sequence * input,
  waypoint_navigation_interfaces__msg__Wp__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION_INTERFACES__MSG__DETAIL__WP__FUNCTIONS_H_
