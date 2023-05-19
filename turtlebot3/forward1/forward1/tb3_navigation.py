import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from std_srvs.srv import Empty
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Quaternion
from math import radians
from pyquaternion import Quaternion as PyQuaternion

class TB3Navigation(Node):

    def __init__(self):
        super().__init__('tb3_navigation')
        
        # Declare the coordinates of interest
        self.xCafe = 1.0
        self.yCafe = 2.0
        self.cafe_theta = -135.0  # In degrees

        self.xOffice1 = 4.0
        self.yOffice1 = 2.0
        self.office1_theta = -90.0

        self.xOffice2 = 4.0
        self.yOffice2 = -2.0
        self.office2_theta = 90.0

        self.xOffice3 = 1.0
        self.yOffice3 = -2.0
        self.office3_theta = 135.0

        self.action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        while not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().info('Waiting for the navigate_to_pose action server...')

    def euler_to_quaternion(self, euler):
        quaternion = PyQuaternion(axis=[0, 0, 1], angle=radians(euler))
        return Quaternion(x=quaternion.x, y=quaternion.y, z=quaternion.z, w=quaternion.w)

    def move_to_goal(self, x_goal, y_goal, theta_goal):
        goal_pose = NavigateToPose.Goal()
        goal_pose.pose.pose.position.x = x_goal
        goal_pose.pose.pose.position.y = y_goal
        goal_pose.pose.pose.orientation = self.euler_to_quaternion(theta_goal)  # Convert degrees to radians

        future = self.action_client.send_goal_async(goal_pose)
        rclpy.spin_until_future_complete(self, future)

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return False

        self.get_logger().info('Goal accepted :)')
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)

        result = result_future.result().result
        status = result_future.result().status
        if status == 4:
            self.get_logger().info('Goal was aborted.')
            return False
        elif status == 5:
            self.get_logger().info('Goal was rejected.')
            return False
        elif status == 8:
            self.get_logger().info('Goal received a cancel request after it started executing.')
            return False

        self.get_logger().info('Goal: success!')
        return True

    def user_input_handler(self):
        while True:
            print("Choose a destination:\n0. Cafe\n1. Office1\n2. Office2\n3. Office3\nq. Quit")
            choice = input()

            goal_reached = False

            if choice == '0':
                goal_reached = self.move_to_goal(self.xCafe, self.yCafe, self.cafe_theta)

            elif choice == '1':
                goal_reached = self.move_to_goal(self.xOffice1, self.yOffice1, self.office1_theta)

            elif choice == '2':
                goal_reached = self.move_to_goal(self.xOffice2, self.yOffice2, self.office2_theta)

            elif choice == '3':
                goal_reached = self.move_to_goal(self.xOffice3, self.yOffice3, self.office3_theta)

            elif choice == 'q':
                break

            if goal_reached:
                self.get_logger().info("Congratulations!")
            else:
                self.get_logger().info("Hard Luck!")

def main(args=None):
    rclpy.init(args=args)
    tb3_navigation = TB3Navigation()
    tb3_navigation.user_input_handler()
    tb3_navigation.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
