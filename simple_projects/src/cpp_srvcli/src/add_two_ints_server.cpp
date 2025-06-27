
#include"rclcpp/rclcpp.hpp"
#include"example_interfaces/srv/add_two_ints.hpp"
#include<string>

void handle_add_two_ints(
  const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request,
  std::shared_ptr<example_interfaces::srv::AddTwoInts::Response> response)
{
  response->sum = request->a + request->b;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request: a=%ld, b=%ld", request->a, request->b);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv); //init ROS2 
  auto node = rclcpp::Node::make_shared("add_two_ints_server"); //create a node named "add_two_ints_server"
  
  //create a service of type AddTwoInts with the name "add_two_ints"
  auto service = node->create_service<example_interfaces::srv::AddTwoInts>(
    "add_two_ints", &handle_add_two_ints);
  
    // Log that the service is ready
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");
  
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
