from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    return LaunchDescription([
    # Include robot.launch.py
    IncludeLaunchDescription(
        PythonLaunchDescriptionSource('/opt/ros/foxy/share/turtlebot3_bringup/launch/robot.launch.py'),
    ),
    # Include navigation2.launch.py
    IncludeLaunchDescription(
        PythonLaunchDescriptionSource('/opt/ros/foxy/share/turtlebot3_navigation2/launch/navigation2.launch.py'),
    ),
    # Add TB3 Navigation Node
    Node(
        package='forward1',
        executable='tb3_navigation',
        name='tb3_navigation_node',
        output='screen'
    ),
])

