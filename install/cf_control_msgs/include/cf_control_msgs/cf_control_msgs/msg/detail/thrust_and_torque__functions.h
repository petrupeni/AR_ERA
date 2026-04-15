// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#ifndef CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__FUNCTIONS_H_
#define CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cf_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cf_control_msgs/msg/detail/thrust_and_torque__struct.h"

/// Initialize msg/ThrustAndTorque message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cf_control_msgs__msg__ThrustAndTorque
 * )) before or use
 * cf_control_msgs__msg__ThrustAndTorque__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__init(cf_control_msgs__msg__ThrustAndTorque * msg);

/// Finalize msg/ThrustAndTorque message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
void
cf_control_msgs__msg__ThrustAndTorque__fini(cf_control_msgs__msg__ThrustAndTorque * msg);

/// Create msg/ThrustAndTorque message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cf_control_msgs__msg__ThrustAndTorque__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
cf_control_msgs__msg__ThrustAndTorque *
cf_control_msgs__msg__ThrustAndTorque__create();

/// Destroy msg/ThrustAndTorque message.
/**
 * It calls
 * cf_control_msgs__msg__ThrustAndTorque__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
void
cf_control_msgs__msg__ThrustAndTorque__destroy(cf_control_msgs__msg__ThrustAndTorque * msg);

/// Check for msg/ThrustAndTorque message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__are_equal(const cf_control_msgs__msg__ThrustAndTorque * lhs, const cf_control_msgs__msg__ThrustAndTorque * rhs);

/// Copy a msg/ThrustAndTorque message.
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
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__copy(
  const cf_control_msgs__msg__ThrustAndTorque * input,
  cf_control_msgs__msg__ThrustAndTorque * output);

/// Initialize array of msg/ThrustAndTorque messages.
/**
 * It allocates the memory for the number of elements and calls
 * cf_control_msgs__msg__ThrustAndTorque__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__init(cf_control_msgs__msg__ThrustAndTorque__Sequence * array, size_t size);

/// Finalize array of msg/ThrustAndTorque messages.
/**
 * It calls
 * cf_control_msgs__msg__ThrustAndTorque__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
void
cf_control_msgs__msg__ThrustAndTorque__Sequence__fini(cf_control_msgs__msg__ThrustAndTorque__Sequence * array);

/// Create array of msg/ThrustAndTorque messages.
/**
 * It allocates the memory for the array and calls
 * cf_control_msgs__msg__ThrustAndTorque__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
cf_control_msgs__msg__ThrustAndTorque__Sequence *
cf_control_msgs__msg__ThrustAndTorque__Sequence__create(size_t size);

/// Destroy array of msg/ThrustAndTorque messages.
/**
 * It calls
 * cf_control_msgs__msg__ThrustAndTorque__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
void
cf_control_msgs__msg__ThrustAndTorque__Sequence__destroy(cf_control_msgs__msg__ThrustAndTorque__Sequence * array);

/// Check for msg/ThrustAndTorque message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__are_equal(const cf_control_msgs__msg__ThrustAndTorque__Sequence * lhs, const cf_control_msgs__msg__ThrustAndTorque__Sequence * rhs);

/// Copy an array of msg/ThrustAndTorque messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cf_control_msgs
bool
cf_control_msgs__msg__ThrustAndTorque__Sequence__copy(
  const cf_control_msgs__msg__ThrustAndTorque__Sequence * input,
  cf_control_msgs__msg__ThrustAndTorque__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__FUNCTIONS_H_
