// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#ifndef CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_H_
#define CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ThrustAndTorque in the package cf_control_msgs.
/**
  * UAV control with total thrust and torque
 */
typedef struct cf_control_msgs__msg__ThrustAndTorque
{
  uint64_t timestamp;
  double collective_thrust;
  geometry_msgs__msg__Vector3 torque;
} cf_control_msgs__msg__ThrustAndTorque;

// Struct for a sequence of cf_control_msgs__msg__ThrustAndTorque.
typedef struct cf_control_msgs__msg__ThrustAndTorque__Sequence
{
  cf_control_msgs__msg__ThrustAndTorque * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_control_msgs__msg__ThrustAndTorque__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_H_
