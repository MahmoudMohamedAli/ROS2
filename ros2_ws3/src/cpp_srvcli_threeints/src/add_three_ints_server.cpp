
#include"rclcpp/rclcpp.hpp"
#include"tutorial_interfaces/srv/add_three_ints.hpp"
#include<string>

void handle_add_three_ints(
  const std::shared_ptr<tutorial_interfaces::srv::AddThreeInts::Request> request,
  std::shared_ptr<tutorial_interfaces::srv::AddThreeInts::Response> response)
{
  response->sum = request->a + request->b + request->c;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: a=%ld, b=%ld, c=%ld", request->a, request->b, request->c);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv); //init ROS2
  auto node = rclcpp::Node::make_shared("add_three_ints_server"); //create a node named "add_three_ints_server"

  //create a service of type AddThreeInts with the name "add_three_ints"
  auto service = node->create_service<tutorial_interfaces::srv::AddThreeInts>(
    "add_three_ints", &handle_add_three_ints);

  // Log that the service is ready
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add three ints.");

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
