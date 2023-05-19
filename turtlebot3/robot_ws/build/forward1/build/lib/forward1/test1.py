import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Pose, Point, Quaternion

def pixel_coordinates_to_map_coordinates(coord, origin, resolution):
    return coord * resolution + origin

class MapNavigation(Node):



    def __init__(self):
        super().__init__('map_navigation')

        origin = [-1.13, -0.769]
        resolution = 0.05

        self.xCafe = pixel_coordinates_to_map_coordinates(0.50, origin[0], resolution)
        self.yCafe = pixel_coordinates_to_map_coordinates(0.20, origin[1], resolution)
        self.xOffice1 = pixel_coordinates_to_map_coordinates(27.70, origin[0], resolution)
        self.yOffice1 = pixel_coordinates_to_map_coordinates(12.50, origin[1], resolution)
        self.xOffice2 = pixel_coordinates_to_map_coordinates(30.44, origin[0], resolution)
        self.yOffice2 = pixel_coordinates_to_map_coordinates(12.50, origin[1], resolution)
        self.xOffice3 = pixel_coordinates_to_map_coordinates(35.20, origin[0], resolution)
        self.yOffice3 = pixel_coordinates_to_map_coordinates(13.50, origin[1], resolution)

        self.goal_reached = False

        self.action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        
        while not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().info('Waiting for the move_base action server...')

        self.input_loop()

    

    def input_loop(self):
        while rclpy.ok():
            choice = self.choose()

            if choice == '0':
                goal_future = self.move_to_goal(self.xCafe, self.yCafe)

            elif choice == '1':
                goal_future = self.move_to_goal(self.xOffice1, self.yOffice1)

            elif choice == '2':
                goal_future = self.move_to_goal(self.xOffice2, self.yOffice2)

            elif choice == '3':
                goal_future = self.move_to_goal(self.xOffice3, self.yOffice3)

            if choice != 'q':
                # 수정: 요청이 완료될 때까지 기다림
                rclpy.spin_until_future_complete(self, goal_future)
                
                if self.goal_reached:
                    self.get_logger().info("Congratulations!")

                else:
                    self.get_logger().info("Hard Luck!")

            if choice == 'q':
                self.get_logger().info("Exit the program")
                rclpy.shutdown()
                break


    # def move_to_goal(self, xGoal, yGoal):
    #     goal_msg = NavigateToPose.Goal()
    #     goal_msg.pose.pose.position = Point(x=xGoal, y=yGoal, z=0.0)
    #     goal_msg.pose.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)

    #     self.get_logger().info("Sending goal location...")
    #     goal_handle_future = self.action_client.send_goal_async(goal_msg)

    #     goal_handle_future.add_done_callback(self.goal_response_callback)

    def move_to_goal(self, xGoal, yGoal):
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.pose.position = Point(x=xGoal, y=yGoal, z=0.0)
        goal_msg.pose.pose.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=1.0)

        self.get_logger().info("Sending goal location...")
        goal_handle_future = self.action_client.send_goal_async(goal_msg)
        
        # 수정: 반환값 설정
        return goal_handle_future


    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        goal_handle.get_result_async().add_done_callback(self.result_callback)

    def result_callback(self, future):
        goal_result = future.result().result
        status = goal_result.status

        if status == 4:
            self.get_logger().info("You have reached the destination")
            self.goal_reached = True
        else:
            self.get_logger().info("The robot failed to reach the destination")
            self.goal_reached = False

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
        choice = input()
        return choice

def main(args=None):
    rclpy.init(args=args)
    map_navigation = MapNavigation()
    try:
        rclpy.spin(map_navigation)
    finally:
        map_navigation.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
