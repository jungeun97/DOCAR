import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
import tty
import sys
import termios

from geometry_msgs.msg import Pose, Point, Quaternion


class MapNavigation(Node):

    def __init__(self):
        super().__init__('map_navigation')

        # Declare the coordinates of interest
        self.xCafe = 1.5
        self.yCafe = -0.5
        self.xOffice1 = 2.0
        self.yOffice1 = -1.5
        self.xOffice2 = 1.0
        self.yOffice2 = 2.0
        self.xOffice3 = -1.0
        self.yOffice3 = 1.0
        self.goal_reached = False

        self.action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        while not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().info('Waiting for the move_base action server...')

        while True:
            choice = self.choose()

            if choice == '0':
                self.goal_reached = self.move_to_goal(self.xCafe, self.yCafe)

            elif choice == '1':
                self.goal_reached = self.move_to_goal(self.xOffice1, self.yOffice1)

            elif choice == '2':
                self.goal_reached = self.move_to_goal(self.xOffice2, self.yOffice2)

            elif choice == '3':
                self.goal_reached = self.move_to_goal(self.xOffice3, self.yOffice3)

            if choice != 'q':

                if self.goal_reached:
                    self.get_logger().info("Congratulations!")

                else:
                    self.get_logger().info("Hard Luck!")

            if choice == 'q':
                break
          
    def getch(self):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setraw(sys.stdin.fileno())
            ch = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
        return ch
    
    def choose(self):
        print("|-------------------------------|")
        print("|Press a key:")
        print("|'0': Cafe")
        print("|'1': Office 1")
        print("|'2': Office 2")
        print("|'3': Office 3")
        print("|'q': Quit")
        print("|-------------------------------|")
        print("|Where to go?")

        while True:
            # Get user input
            choice = self.getch().replace('\n', '')

            # Check if input is valid
            if choice not in ['0', '1', '2', '3', 'q']:
                print("Invalid choice. Please choose again.")
            elif choice == 'q':
                # Exit the program if the user types 'q'
                sys.exit(0)
            else:
                return choice  # valid, return the choice

    def move_to_goal(self, xGoal, yGoal):
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.pose.position = Point(x=xGoal, y=yGoal, z=0.0)
        goal_msg.pose.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)

        self.get_logger().info("Sending goal location...")
        goal_handle = self.action_client.send_goal_async(goal_msg)

        future_goal = goal_handle

        if future_goal.result():
            if future_goal.result().status == 4:
                self.get_logger().info("You have reached the destination")
                return True
            else:
                self.get_logger().info("The robot failed to reach the destination")
                return False
        else:
            self.get_logger().info("The robot failed to reach the destination")
            return False


def main(args=None):
    rclpy.init(args=args)
    map_navigation = MapNavigation()
    rclpy.spin(map_navigation)
    map_navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
