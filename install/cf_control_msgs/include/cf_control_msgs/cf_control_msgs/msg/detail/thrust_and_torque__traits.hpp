// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#ifndef CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__TRAITS_HPP_
#define CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cf_control_msgs/msg/detail/thrust_and_torque__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace cf_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThrustAndTorque & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: collective_thrust
  {
    out << "collective_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.collective_thrust, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    to_flow_style_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThrustAndTorque & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: collective_thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collective_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.collective_thrust, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_block_style_yaml(msg.torque, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThrustAndTorque & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cf_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cf_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cf_control_msgs::msg::ThrustAndTorque & msg,
  std::ostream & out, size_t indentation = 0)
{
  cf_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cf_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cf_control_msgs::msg::ThrustAndTorque & msg)
{
  return cf_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cf_control_msgs::msg::ThrustAndTorque>()
{
  return "cf_control_msgs::msg::ThrustAndTorque";
}

template<>
inline const char * name<cf_control_msgs::msg::ThrustAndTorque>()
{
  return "cf_control_msgs/msg/ThrustAndTorque";
}

template<>
struct has_fixed_size<cf_control_msgs::msg::ThrustAndTorque>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<cf_control_msgs::msg::ThrustAndTorque>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<cf_control_msgs::msg::ThrustAndTorque>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CF_CONTROL_MSGS__MSG__DETAIL__THRUST_AND_TORQUE__TRAITS_HPP_
