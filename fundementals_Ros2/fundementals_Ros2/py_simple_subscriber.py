#! /usr/bin/env python3
"""
Description:
  This is a simple subscriber node that subscribes to the topic and prints the received message.
---
publishing Topic:
  - None
---
Subscription:
  - Topic Name: /simple_topic
  - Message Type: std_msgs/String
---
Author: Mahmoud Elkot
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
class SimpleSubscriber(Node):
  def __init__(self):
    super().__init__("Simple_Subscriber_Node")
    self.sub_node =  self.create_subscription(String,"/simple_topic",self.listenercall,10)

  def listenercall(self, msg):
    self.get_logger().info(f'i heard "{msg.data}"')


def main(args=None):
  rclpy.init(args=args)
  simplesub =  SimpleSubscriber()
  rclpy.spin(simplesub)
  simplesub.destroy_node()
  rclpy.shutdown()

if __name__ == "__main__":
  main()
