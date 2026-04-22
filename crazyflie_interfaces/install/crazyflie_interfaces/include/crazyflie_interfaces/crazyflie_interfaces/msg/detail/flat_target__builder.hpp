// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crazyflie_interfaces:msg/FlatTarget.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__BUILDER_HPP_
#define CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crazyflie_interfaces/msg/detail/flat_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crazyflie_interfaces
{

namespace msg
{

namespace builder
{

class Init_FlatTarget_yaw_accel
{
public:
  explicit Init_FlatTarget_yaw_accel(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  ::crazyflie_interfaces::msg::FlatTarget yaw_accel(::crazyflie_interfaces::msg::FlatTarget::_yaw_accel_type arg)
  {
    msg_.yaw_accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_yaw_rate
{
public:
  explicit Init_FlatTarget_yaw_rate(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_yaw_accel yaw_rate(::crazyflie_interfaces::msg::FlatTarget::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_FlatTarget_yaw_accel(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_yaw
{
public:
  explicit Init_FlatTarget_yaw(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_yaw_rate yaw(::crazyflie_interfaces::msg::FlatTarget::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_FlatTarget_yaw_rate(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_snap
{
public:
  explicit Init_FlatTarget_snap(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_yaw snap(::crazyflie_interfaces::msg::FlatTarget::_snap_type arg)
  {
    msg_.snap = std::move(arg);
    return Init_FlatTarget_yaw(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_jerk
{
public:
  explicit Init_FlatTarget_jerk(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_snap jerk(::crazyflie_interfaces::msg::FlatTarget::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_FlatTarget_snap(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_acceleration
{
public:
  explicit Init_FlatTarget_acceleration(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_jerk acceleration(::crazyflie_interfaces::msg::FlatTarget::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_FlatTarget_jerk(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_velocity
{
public:
  explicit Init_FlatTarget_velocity(::crazyflie_interfaces::msg::FlatTarget & msg)
  : msg_(msg)
  {}
  Init_FlatTarget_acceleration velocity(::crazyflie_interfaces::msg::FlatTarget::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_FlatTarget_acceleration(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

class Init_FlatTarget_position
{
public:
  Init_FlatTarget_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlatTarget_velocity position(::crazyflie_interfaces::msg::FlatTarget::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FlatTarget_velocity(msg_);
  }

private:
  ::crazyflie_interfaces::msg::FlatTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::msg::FlatTarget>()
{
  return crazyflie_interfaces::msg::builder::Init_FlatTarget_position();
}

}  // namespace crazyflie_interfaces

#endif  // CRAZYFLIE_INTERFACES__MSG__DETAIL__FLAT_TARGET__BUILDER_HPP_
