cmake_minimum_required(VERSION 3.8)
project(CPP_SrvClient_FourInts)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tutorial_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(server_4 src/add_four_ints_server.cpp)
ament_target_dependencies(server_4 rclcpp tutorial_interfaces)

add_executable(client_4 src/add_four_ints_client.cpp)
ament_target_dependencies(client_4 rclcpp tutorial_interfaces)
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
    server_4
    client_4
    DESTINATION lib/${PROJECT_NAME})

ament_package()
