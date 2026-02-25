#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class simple_publisher : public rclcpp::Node
{
private:

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  size_t count_;
public:
  simple_publisher(): Node("PublisherNodeCpp"),count_(0)
  {
    publisher_ = create_publisher<std_msgs::msg::String>("/cpp_topic",10);
    timer_ = create_wall_timer(500ms, std::bind(&simple_publisher::timercallback , this));
  }

  void timercallback()
  {
    auto msg = std_msgs::msg::String();
    msg.data = "hello world" + std::to_string(count_);
    publisher_->publish(msg);
    RCLCPP_INFO(get_logger(), ("Publishing message " + msg.data).c_str());
    count_++;
  }
};

int main(int argc, char * argv[])
{
   // Initialize ROS 2.
  rclcpp::init(argc, argv);
 
  // Create an instance of the MinimalCppPublisher node and keep it running.
  auto simple_publisher_node = std::make_shared<simple_publisher>();
  rclcpp::spin(simple_publisher_node);
 
  // Shutdown ROS 2 upon node termination.
  rclcpp::shutdown();
 
  // End of program.
  return 0;

}