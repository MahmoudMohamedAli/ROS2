cmake_minimum_required(VERSION 3.8)
project(cpp_srvcli_threeints)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tutorial_interfaces REQUIRED)
#find_package(rosidl_default_generators REQUIRED)

#rosidl_generate_interfaces(${PROJECT_NAME}
#  "srv/AddThreeInts.srv"
#)

add_executable(server_3 src/add_three_ints_server.cpp)
ament_target_dependencies(server_3 rclcpp tutorial_interfaces)

add_executable(client_3 src/add_three_ints_client.cpp)
ament_target_dependencies(client_3 rclcpp tutorial_interfaces)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(TARGETS
    server_3
    client_3
    DESTINATION lib/${PROJECT_NAME})

ament_package()
