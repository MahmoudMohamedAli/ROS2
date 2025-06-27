#include "rclcpp/rclcpp.hpp"
#include"tutorial_interfaces/srv/add_four_ints.hpp"
#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv); // Initialize ROS2
  //add var value
  auto defaultvalues  =0;

  if (argc != 5) {  // Check if the correct number of arguments is provided
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: add_four_ints_client X Y Z W");
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "1,2,3,4 are the four integers to be added");
      defaultvalues = 1; // Set default values to 1
      argv[1] = "1";
      argv[2] = "2";
      argv[3] = "3";
      argv[4] = "4";
      //return 1;
  }

  auto node = rclcpp::Node::make_shared("add_four_ints_client");
  auto client = node->create_client<tutorial_interfaces::srv::AddFourInts>("add_four_ints");

  auto request = std::make_shared<tutorial_interfaces::srv::AddFourInts::Request>();
  request->a = atoll(argv[1]);
  request->b = atoll(argv[2]);
  request->c = atoll(argv[3]);
  request->d = atoll(argv[4]);

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_three_ints");
  }

  rclcpp::shutdown();
  return 0;
}