import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import PoseStamped

class WaypointNavigation(Node):
    def __init__(self):
        super().__init__('waypoint_navigation')
        self.create_subscription(PoseStamped, "/amcl_pose", self.pose_callback, 10)

        self.waypoints = [
            (0.8, 0.2),
            (0.05, 0.33),
        ]
        self.index = 0
        self.client = ActionClient(self, NavigateToPose, 'NavigateToPose')

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Waypoint rejected :(')
            return

        self.get_logger().info('Waypoint accepted :)')
        goal_handle.result()

    def send_goal_to_next_waypoint(self):
        if self.index < len(self.waypoints):
            self.index += 1
            x, y = self.waypoints[self.index - 1]
            goal_msg = NavigateToPose.Goal()
            goal_msg.pose.pose.position.x = x
            goal_msg.pose.pose.position.y = y
            goal_msg.pose.pose.orientation.w = 1.0
            goal_msg.pose.header.frame_id = 'map'
            goal_msg.pose.header.stamp = self.get_clock().now().to_msg()

            self.get_logger().info(f'웨이포인트({self.index}/{len(self.waypoints)}) 로 이동: ({x}, {y})')
            self.client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback).add_done_callback(self.goal_response_callback)
        else:
            self.get_logger().info('모든 웨이포인트 방문 완료')

    def pose_callback(self, pose: PoseStamped):
        if pose is None:
            self.send_goal_to_next_waypoint()
            return

        distance_to_goal = ((pose.pose.position.x - self.waypoints[self.index][0]) ** 2 + (pose.pose.position.y - self.waypoints[self.index][1]) ** 2) ** 0.5
        if distance_to_goal < 0.1:
            self.send_goal_to_next_waypoint()

    def feedback_callback(self, feedback):
        self.get_logger().info(f'Error distance to waypoint: {feedback.feedback.distance_to_goal}')

def main(args=None):
    rclpy.init(args=args)
    waypoint_navigation = WaypointNavigation()

    rclpy.spin(waypoint_navigation)
    waypoint_navigation.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
