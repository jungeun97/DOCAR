#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PointStamped
from nav2_msgs.action import ComputePathToPose, FollowWaypoints
from actionlib_ros2 import ActionClient

class NavigationExample(Node):

    def __init__(self):
        super().__init__('navigation_example')
        self.goal_pub = self.create_publisher(PointStamped, 'goal', 10)

        self.compute_path_action_client = ActionClient(
            self, ComputePathToPose, '/compute_path_to_pose')
        self.follow_waypoints_action_client = ActionClient(
            self, FollowWaypoints, '/follow_waypoints')

    def start_navigation(self, goal):
       point_stamped = PointStamped()
       point_stamped.point.x = goal[0]
       point_stamped.point.y = goal[1]
       point_stamped.point.z = goal[2]
       point_stamped.header.frame_id = 'map'

       self.goal_pub.publish(point_stamped)

def main(args=None):
    rclpy.init(args=args)
    navigation_example = NavigationExample()
    navigation_example.start_navigation([1.0, 1.0, 0.0])
    rclpy.spin(navigation_example)
    navigation_example.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
