cmake_minimum_required(VERSION 3.8)
project(fundementals_Ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

set(dependencies rclcpp
                 rclpy
                 std_msgs)

include_directories(include)

add_executable(simple_publisher_cpp src/simple_publisher.cpp)
ament_target_dependencies(simple_publisher_cpp ${dependencies})

add_executable(simple_subscriber_cpp src/simple_subscriber.cpp)
ament_target_dependencies(simple_subscriber_cpp ${dependencies})

install(DIRECTORY fundementals_Ros2 scripts DESTINATION share/${PROJECT_NAME})
install(DIRECTORY include DESTINATION include)

#install Cpp executables
install(
  TARGETS
  simple_publisher_cpp
  simple_subscriber_cpp
 DESTINATION lib/${PROJECT_NAME}
)

#install Python executables
ament_python_install_package(${PROJECT_NAME})

install(
  PROGRAMS
  fundementals_Ros2/py_simple_publisher.py
  fundementals_Ros2/py_simple_subscriber.py
  DESTINATION lib/${PROJECT_NAME}
  )

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

ament_export_include_directories(include)


ament_package()
