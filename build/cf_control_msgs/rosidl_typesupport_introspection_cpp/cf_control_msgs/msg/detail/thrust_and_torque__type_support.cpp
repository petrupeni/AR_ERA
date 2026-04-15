// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cf_control_msgs:msg/ThrustAndTorque.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cf_control_msgs/msg/detail/thrust_and_torque__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cf_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ThrustAndTorque_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cf_control_msgs::msg::ThrustAndTorque(_init);
}

void ThrustAndTorque_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cf_control_msgs::msg::ThrustAndTorque *>(message_memory);
  typed_message->~ThrustAndTorque();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ThrustAndTorque_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_control_msgs::msg::ThrustAndTorque, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collective_thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_control_msgs::msg::ThrustAndTorque, collective_thrust),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_control_msgs::msg::ThrustAndTorque, torque),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ThrustAndTorque_message_members = {
  "cf_control_msgs::msg",  // message namespace
  "ThrustAndTorque",  // message name
  3,  // number of fields
  sizeof(cf_control_msgs::msg::ThrustAndTorque),
  ThrustAndTorque_message_member_array,  // message members
  ThrustAndTorque_init_function,  // function to initialize message memory (memory has to be allocated)
  ThrustAndTorque_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ThrustAndTorque_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ThrustAndTorque_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cf_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cf_control_msgs::msg::ThrustAndTorque>()
{
  return &::cf_control_msgs::msg::rosidl_typesupport_introspection_cpp::ThrustAndTorque_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cf_control_msgs, msg, ThrustAndTorque)() {
  return &::cf_control_msgs::msg::rosidl_typesupport_introspection_cpp::ThrustAndTorque_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
