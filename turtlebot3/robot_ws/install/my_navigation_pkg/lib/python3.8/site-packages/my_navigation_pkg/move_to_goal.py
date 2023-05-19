import rclpy
from rclpy.node import Node
from nav_msgs.srv import GetMap
from geometry_msgs.msg import Twist, Vector3
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient
import math

class MapNavigation(Node):

    def __init__(self):
        super().__init__('map_navigation')
        self.location_options = {
            '0': {'name': 'Cafe', 'x': 7.31, 'y': 1.46},
            '1': {'name': 'Office 1', 'x': 5.10, 'y': -3.82},
            '2': {'name': 'Office 2', 'x': -2.35, 'y': -0.95},
            '3': {'name': 'Office 3', 'x': 35.20, 'y': 13.50}
        }

        self.get_logger().info('Waiting for the map server...')
        rclpy.init()
        self.client = self.create_client(GetMap, 'static_map')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Map server not available...')

        self.map_request()
       
        self.action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

    def map_request(self):
        request = GetMap.Request()
        future = self.client.call_async(request)
        future.add_done_callback(self.get_map_result)

    def get_map_result(self, future):
        result = future.result().map
        self.get_logger().info('Received map, choose destination.')

        choice = None
        while choice not in self.location_options.keys() and choice != 'q':
            choice = input("Enter the target location (0: Cafe, 1: Office 1, 2: Office 2, 3: Office 3) or 'q' to quit: ")

        if choice in self.location_options.keys():
            x_goal, y_goal = self.location_options[choice]['x'], self.location_options[choice]['y']
            self.navigate_to_location(x_goal, y_goal)
        else:
            self.get_logger().info('Quitting...')
            rclpy.shutdown()

    def navigate_to_location(self, x_goal, y_goal):

        if not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('Action server not available.')
            rclpy.shutdown()
            return

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.pose.position.x = x_goal
        goal_msg.pose.pose.position.y = y_goal
        goal_msg.pose.pose.orientation.z = 0.0
        goal_msg.pose.pose.orientation.w = 1.0

        self.get_logger().info('Sending goal, navigating...')
        send_goal_future = self.action_client.send_goal_async(goal_msg)

        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected.')
            return

        self.get_logger().info('Goal accepted, navigation in progress...')
        goal_handle.execute_async().add_done_callback(self.goal_execute_callback)

    def goal_execute_callback(self, status):
        if status.result().status == status.result().SUCCEEDED:
            self.get_logger().info('Navigation succeeded.')
        else:
            self.get_logger().error('Navigation failed.')

        rclpy.shutdown()

if __name__ == '__main__':
    try:
        node = MapNavigation()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
