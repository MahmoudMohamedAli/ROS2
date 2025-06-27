
#include"rclcpp/rclcpp.hpp"
#include"tutorial_interfaces/srv/add_four_ints.hpp"
#include<string>

void handle_add_four_ints(
  const std::shared_ptr<tutorial_interfaces::srv::AddFourInts::Request> request,
  std::shared_ptr<tutorial_interfaces::srv::AddFourInts::Response> response)
{
  response->sum = request->a + request->b + request->c + request->d;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: a=%ld, b=%ld, c=%ld, d=%ld", request->a, request->b, request->c, request->d);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv); //init ROS2
  auto node = rclcpp::Node::make_shared("add_four_ints_server"); //create a node named "add_four_ints_server"

  //create a service of type add_four_ints with the name "add_four_ints"
  auto service = node->create_service<tutorial_interfaces::srv::AddFourInts>(
    "add_four_ints", &handle_add_four_ints);

  // Log that the service is ready
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add four ints.");

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
