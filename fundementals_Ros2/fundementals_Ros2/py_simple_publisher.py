#!/usr/bin/env python3

"""
Description:
  This is a simple publisher node that publishes a string message to the topic periodically.
---
Publishing Topic:
  - Topic Name: /simple_topic
  - Message Type: std_msgs/String

Subscription:
  - None
--- 
Author: Mahmoud Elkot
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class SimplePublisher(Node):
  """Create Simple Publisher class
  """
  def __init__(self):
    super().__init__("Simple_Publisher_Node")
    self.Publisher_1 = self.create_publisher(String,"/simple_topic",10)
    self.period_timer = 0.5
    self.i = 0
    self.timer = self.create_timer(self.period_timer , self.timerCallback)

  def timerCallback(self):
    """function called every 0.5 Second"""
    msg = String()
    msg.data = "Hello World %d" % self.i
    self.Publisher_1.publish(msg)
    self.get_logger().info("Publish msg '%s'" % msg.data)
    self.i =self.i + 1

def main(args = None):
  """Main Function"""
  rclpy.init(args=args)
  simplepublisher = SimplePublisher()
  rclpy.spin(simplepublisher)
  simplepublisher.destroy_node()
  rclpy.shutdown()

if __name__ == "__main__":
  main()