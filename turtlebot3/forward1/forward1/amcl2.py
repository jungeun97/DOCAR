import rclpy
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient


class SimpleNavigation(Node):

    def __init__(self):
        super().__init__('simple_navigation')
        self.action_client = ActionClient(self, NavigateToPose, '/navigate_to_pose')
        self.has_goal = False

    def send_goal(self, goal_pose):
        goal = NavigateToPose.Goal()
        goal.pose.pose = goal_pose.pose
        goal.pose.header.frame_id = 'map'

        self.action_client.wait_for_server()
        self.action_client.send_goal_async(goal, feedback_callback=self.nav_feedback_callback)
        self.has_goal = True

    def navigate_to_goal(self, x: float, y: float, theta: float):
        if not self.has_goal:
            goal_pose = PoseStamped()

            goal_pose.pose.position.x = (x + 1.05) / 0.05
            goal_pose.pose.position.y = (y + 1.8) / 0.05

            from math import sin, cos
            goal_pose.pose.orientation.z = sin(theta * 0.5)
            goal_pose.pose.orientation.w = cos(theta * 0.5)

            self.send_goal(goal_pose)

    def nav_feedback_callback(self, feedback_msg):
        self.get_logger().info('Current pose (%.2f, %.2f)' % (
            feedback_msg.feedback.current_pose.pose.position.x * 0.05 - 1.05,
            feedback_msg.feedback.current_pose.pose.position.y * 0.05 - 1.8))


def main(args=None):
    rclpy.init(args=args)
    navigation = SimpleNavigation()

    x, y, theta = 5.0, -3.0, 0.5
    navigation.navigate_to_goal(x, y, theta)

    try:
        rclpy.spin(navigation)
    except KeyboardInterrupt:
        pass

    navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
