from setuptools import setup

package_name = 'forward1'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='turtlebot',
    maintainer_email='turtlebot@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'forward1_1 = forward1.forward1_1:main',
            'forward1_2 = forward1.forward1_2:main',
            'amcl1 = forward1.amcl1:main',
            'amcl2 = forward1.amcl2:main',
            'test1 = forward1.test1:main',
            'tb3_navigation = forward1.tb3_navigation:main',
        ],
    },
)
