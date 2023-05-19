# from launch import LaunchDescription
# from launch_ros.actions import Node

# def generate_launch_description():
#     return LaunchDescription([
#         Node(package='my_navigation_pkg', executable='my_navigation_node', output='screen', name='my_navigation_node'),
#     ])

from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory       
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    rviz_config_dir = os.path.join(
        get_package_share_directory('nav2_bringup'),
        'rviz',
        'nav2_default_view.rviz')

    return LaunchDescription([
        # Replace the path to your yaml files and topics accordingly
        # Node(package='map_server', executable='map_server', output='screen', parameters=['/home/turtlebot/map.yaml']),
        Node(package='nav2_map_server', executable='map_server', output='screen', parameters=['/home/turtlebot/map.yaml']),

        Node(package='nav2_bringup', executable='localization_launch.py', output='screen'),
        Node(package='nav2_bringup', executable='navigation_launch.py', output='screen'),
        # Node(package='my_navigation_pkg', executable='my_navigation_node', output='screen', name='my_navigation_node'),
        # Node(package='my_navigation_pkg', executable='move_to_goal', output='screen', name='move_to_goal_node'),
        Node(package='my_navigation_pkg', executable='my_navigation_node', output='screen', name='move_to_goal_node'),
        Node(
            package='rviz2',
            node_executable='rviz2',
            node_name='rviz2',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'),


        # Add additional nodes if necessary
    ])
