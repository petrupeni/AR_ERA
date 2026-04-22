// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crazyflie_interfaces:msg/FlatTarget.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_HPP_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crazyflie_interfaces__msg__FlatTarget __attribute__((deprecated))
#else
# define DEPRECATED__crazyflie_interfaces__msg__FlatTarget __declspec(deprecated)
#endif

namespace crazyflie_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlatTarget_
{
  using Type = FlatTarget_<ContainerAllocator>;

  explicit FlatTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    acceleration(_init),
    jerk(_init),
    snap(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->yaw_rate = 0.0;
      this->yaw_accel = 0.0;
    }
  }

  explicit FlatTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    jerk(_alloc, _init),
    snap(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->yaw_rate = 0.0;
      this->yaw_accel = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _jerk_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _jerk_type jerk;
  using _snap_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _snap_type snap;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _yaw_accel_type =
    double;
  _yaw_accel_type yaw_accel;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__snap(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->snap = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__yaw_accel(
    const double & _arg)
  {
    this->yaw_accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazyflie_interfaces__msg__FlatTarget
    std::shared_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazyflie_interfaces__msg__FlatTarget
    std::shared_ptr<crazyflie_interfaces::msg::FlatTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlatTarget_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->snap != other.snap) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->yaw_accel != other.yaw_accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlatTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlatTarget_

// alias to use template instance with default allocator
using FlatTarget =
  crazyflie_interfaces::msg::FlatTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crazyflie_interfaces

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__STRUCT_HPP_
