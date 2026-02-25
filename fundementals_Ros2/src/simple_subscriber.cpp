#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"


class simple_subscriber : public rclcpp::Node
{
private:
  /* data */
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
public:
  simple_subscriber() : Node("subscriperNodeCpp")
  {
    subscription_ = create_subscription<std_msgs::msg::String>("/cpp_topic" ,10,
                                                              std::bind(&simple_subscriber::topicFun , this , std::placeholders::_1));
                                                            
  }
  void topicFun(std_msgs::msg::String msg)
  {
    RCLCPP_INFO(get_logger(),(" I heard: %s", msg.data.c_str()));
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc,argv);
  auto sub_node = std::make_shared<simple_subscriber>();
  rclcpp::spin(sub_node);
  rclcpp::shutdown();
  return 0;

}