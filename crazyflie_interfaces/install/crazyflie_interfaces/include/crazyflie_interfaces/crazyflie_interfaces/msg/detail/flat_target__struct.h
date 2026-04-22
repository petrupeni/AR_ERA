// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crazyflie_interfaces:msg/FlatTarget.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_H_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/FlatTarget in the package crazyflie_interfaces.
typedef struct crazyflie_interfaces__msg__FlatTarget
{
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 jerk;
  geometry_msgs__msg__Vector3 snap;
  double yaw;
  double yaw_rate;
  double yaw_accel;
} crazyflie_interfaces__msg__FlatTarget;

// Struct for a sequence of crazyflie_interfaces__msg__FlatTarget.
typedef struct crazyflie_interfaces__msg__FlatTarget__Sequence
{
  crazyflie_interfaces__msg__FlatTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_interfaces__msg__FlatTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_H_
