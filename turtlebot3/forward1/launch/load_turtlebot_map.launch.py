from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='nav2_map_server',
            executable='map_server',
            arguments=['map:=/home/turtlebot/maps/map.yaml'],
            parameters=[{
                'use_sim_time': True
            }]
        )
    ])
