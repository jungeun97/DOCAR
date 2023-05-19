import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import PoseStamped

class GoalPublisher(Node):
    def __init__(self):
        super().__init__("goal_publisher")
        qos = QoSProfile(depth=10)
        self.goal_publisher = self.create_publisher(PoseStamped, "/goal_pose", qos)

    def send_goal(self, x, y, yaw):
        goal = PoseStamped()
        goal.header.frame_id = "map"

        goal.pose.position.x = x
        goal.pose.position.y = y
        goal.pose.position.z = 0.0

        import math
        goal.pose.orientation.x = 0.0
        goal.pose.orientation.y = 0.0
        goal.pose.orientation.z = math.sin(yaw * 0.5)
        goal.pose.orientation.w = math.cos(yaw * 0.5)

        self.goal_publisher.publish(goal)

def main(args=None):
    rclpy.init(args=args)
    goal_publisher = GoalPublisher()

    x_goal = 0.9
    y_goal = 1.0
    yaw_goal = 0.0

    goal_publisher.send_goal(x_goal, y_goal, yaw_goal)

    rclpy.spin_once(goal_publisher)
    goal_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
