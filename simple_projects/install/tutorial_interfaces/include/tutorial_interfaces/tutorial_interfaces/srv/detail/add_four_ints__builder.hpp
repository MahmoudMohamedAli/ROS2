// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/AddFourInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/add_four_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddFourInts_Request_d
{
public:
  explicit Init_AddFourInts_Request_d(::tutorial_interfaces::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::AddFourInts_Request d(::tutorial_interfaces::srv::AddFourInts_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_c
{
public:
  explicit Init_AddFourInts_Request_c(::tutorial_interfaces::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddFourInts_Request_d c(::tutorial_interfaces::srv::AddFourInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_AddFourInts_Request_d(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_b
{
public:
  explicit Init_AddFourInts_Request_b(::tutorial_interfaces::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddFourInts_Request_c b(::tutorial_interfaces::srv::AddFourInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddFourInts_Request_c(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_a
{
public:
  Init_AddFourInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddFourInts_Request_b a(::tutorial_interfaces::srv::AddFourInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddFourInts_Request_b(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddFourInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::AddFourInts_Request>()
{
  return tutorial_interfaces::srv::builder::Init_AddFourInts_Request_a();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddFourInts_Response_sum
{
public:
  Init_AddFourInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::AddFourInts_Response sum(::tutorial_interfaces::srv::AddFourInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::AddFourInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::AddFourInts_Response>()
{
  return tutorial_interfaces::srv::builder::Init_AddFourInts_Response_sum();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_
