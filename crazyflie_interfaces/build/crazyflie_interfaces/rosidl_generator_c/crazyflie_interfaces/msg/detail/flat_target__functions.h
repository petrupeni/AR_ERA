// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crazyflie_interfaces:msg/FlatTarget.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__FUNCTIONS_H_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crazyflie_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "crazyflie_interfaces/msg/detail/flat_target__struct.h"

/// Initialize msg/FlatTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_interfaces__msg__FlatTarget
 * )) before or use
 * crazyflie_interfaces__msg__FlatTarget__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__init(crazyflie_interfaces__msg__FlatTarget * msg);

/// Finalize msg/FlatTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
void
crazyflie_interfaces__msg__FlatTarget__fini(crazyflie_interfaces__msg__FlatTarget * msg);

/// Create msg/FlatTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_interfaces__msg__FlatTarget__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
crazyflie_interfaces__msg__FlatTarget *
crazyflie_interfaces__msg__FlatTarget__create();

/// Destroy msg/FlatTarget message.
/**
 * It calls
 * crazyflie_interfaces__msg__FlatTarget__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
void
crazyflie_interfaces__msg__FlatTarget__destroy(crazyflie_interfaces__msg__FlatTarget * msg);

/// Check for msg/FlatTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__are_equal(const crazyflie_interfaces__msg__FlatTarget * lhs, const crazyflie_interfaces__msg__FlatTarget * rhs);

/// Copy a msg/FlatTarget message.
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
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__copy(
  const crazyflie_interfaces__msg__FlatTarget * input,
  crazyflie_interfaces__msg__FlatTarget * output);

/// Initialize array of msg/FlatTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_interfaces__msg__FlatTarget__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__Sequence__init(crazyflie_interfaces__msg__FlatTarget__Sequence * array, size_t size);

/// Finalize array of msg/FlatTarget messages.
/**
 * It calls
 * crazyflie_interfaces__msg__FlatTarget__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
void
crazyflie_interfaces__msg__FlatTarget__Sequence__fini(crazyflie_interfaces__msg__FlatTarget__Sequence * array);

/// Create array of msg/FlatTarget messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_interfaces__msg__FlatTarget__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
crazyflie_interfaces__msg__FlatTarget__Sequence *
crazyflie_interfaces__msg__FlatTarget__Sequence__create(size_t size);

/// Destroy array of msg/FlatTarget messages.
/**
 * It calls
 * crazyflie_interfaces__msg__FlatTarget__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
void
crazyflie_interfaces__msg__FlatTarget__Sequence__destroy(crazyflie_interfaces__msg__FlatTarget__Sequence * array);

/// Check for msg/FlatTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__Sequence__are_equal(const crazyflie_interfaces__msg__FlatTarget__Sequence * lhs, const crazyflie_interfaces__msg__FlatTarget__Sequence * rhs);

/// Copy an array of msg/FlatTarget messages.
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
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
bool
crazyflie_interfaces__msg__FlatTarget__Sequence__copy(
  const crazyflie_interfaces__msg__FlatTarget__Sequence * input,
  crazyflie_interfaces__msg__FlatTarget__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__FUNCTIONS_H_
