// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#ifndef CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_HPP_
#define CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cf_control_msgs__msg__ThrustAndTorque __attribute__((deprecated))
#else
# define DEPRECATED__cf_control_msgs__msg__ThrustAndTorque __declspec(deprecated)
#endif

namespace cf_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrustAndTorque_
{
  using Type = ThrustAndTorque_<ContainerAllocator>;

  explicit ThrustAndTorque_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torque(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->collective_thrust = 0.0;
    }
  }

  explicit ThrustAndTorque_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : torque(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->collective_thrust = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _collective_thrust_type =
    double;
  _collective_thrust_type collective_thrust;
  using _torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__collective_thrust(
    const double & _arg)
  {
    this->collective_thrust = _arg;
    return *this;
  }
  Type & set__torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_control_msgs__msg__ThrustAndTorque
    std::shared_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_control_msgs__msg__ThrustAndTorque
    std::shared_ptr<cf_control_msgs::msg::ThrustAndTorque_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrustAndTorque_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->collective_thrust != other.collective_thrust) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrustAndTorque_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrustAndTorque_

// alias to use template instance with default allocator
using ThrustAndTorque =
  cf_control_msgs::msg::ThrustAndTorque_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cf_control_msgs

#endif  // CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__STRUCT_HPP_
