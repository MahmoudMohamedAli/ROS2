// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/AddFourInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__AddFourInts_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__AddFourInts_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddFourInts_Request_
{
  using Type = AddFourInts_Request_<ContainerAllocator>;

  explicit AddFourInts_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
      this->d = 0ll;
    }
  }

  explicit AddFourInts_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
      this->d = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;
  using _d_type =
    int64_t;
  _d_type d;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const int64_t & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__AddFourInts_Request
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__AddFourInts_Request
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddFourInts_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddFourInts_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddFourInts_Request_

// alias to use template instance with default allocator
using AddFourInts_Request =
  tutorial_interfaces::srv::AddFourInts_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__AddFourInts_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__AddFourInts_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddFourInts_Response_
{
  using Type = AddFourInts_Response_<ContainerAllocator>;

  explicit AddFourInts_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit AddFourInts_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__AddFourInts_Response
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__AddFourInts_Response
    std::shared_ptr<tutorial_interfaces::srv::AddFourInts_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddFourInts_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddFourInts_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddFourInts_Response_

// alias to use template instance with default allocator
using AddFourInts_Response =
  tutorial_interfaces::srv::AddFourInts_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct AddFourInts
{
  using Request = tutorial_interfaces::srv::AddFourInts_Request;
  using Response = tutorial_interfaces::srv::AddFourInts_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_HPP_
