// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#ifndef CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__BUILDER_HPP_
#define CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cf_control_msgs/msg/detail/thrust_and_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cf_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ThrustAndTorque_torque
{
public:
  explicit Init_ThrustAndTorque_torque(::cf_control_msgs::msg::ThrustAndTorque & msg)
  : msg_(msg)
  {}
  ::cf_control_msgs::msg::ThrustAndTorque torque(::cf_control_msgs::msg::ThrustAndTorque::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_control_msgs::msg::ThrustAndTorque msg_;
};

class Init_ThrustAndTorque_collective_thrust
{
public:
  explicit Init_ThrustAndTorque_collective_thrust(::cf_control_msgs::msg::ThrustAndTorque & msg)
  : msg_(msg)
  {}
  Init_ThrustAndTorque_torque collective_thrust(::cf_control_msgs::msg::ThrustAndTorque::_collective_thrust_type arg)
  {
    msg_.collective_thrust = std::move(arg);
    return Init_ThrustAndTorque_torque(msg_);
  }

private:
  ::cf_control_msgs::msg::ThrustAndTorque msg_;
};

class Init_ThrustAndTorque_timestamp
{
public:
  Init_ThrustAndTorque_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrustAndTorque_collective_thrust timestamp(::cf_control_msgs::msg::ThrustAndTorque::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ThrustAndTorque_collective_thrust(msg_);
  }

private:
  ::cf_control_msgs::msg::ThrustAndTorque msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_control_msgs::msg::ThrustAndTorque>()
{
  return cf_control_msgs::msg::builder::Init_ThrustAndTorque_timestamp();
}

}  // namespace cf_control_msgs

#endif  // CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__BUILDER_HPP_
