# CMake generated Testfile for 
# Source directory: /home/turtlebot/nav2_ws/src/navigation2/nav2_voxel_grid/test
# Build directory: /home/turtlebot/nav2_ws/build/nav2_voxel_grid/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(voxel_grid_tests "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/turtlebot/nav2_ws/build/nav2_voxel_grid/test_results/nav2_voxel_grid/voxel_grid_tests.gtest.xml" "--package-name" "nav2_voxel_grid" "--output-file" "/home/turtlebot/nav2_ws/build/nav2_voxel_grid/ament_cmake_gtest/voxel_grid_tests.txt" "--command" "/home/turtlebot/nav2_ws/build/nav2_voxel_grid/test/voxel_grid_tests" "--gtest_output=xml:/home/turtlebot/nav2_ws/build/nav2_voxel_grid/test_results/nav2_voxel_grid/voxel_grid_tests.gtest.xml")
set_tests_properties(voxel_grid_tests PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/turtlebot/nav2_ws/build/nav2_voxel_grid/test/voxel_grid_tests" TIMEOUT "60" WORKING_DIRECTORY "/home/turtlebot/nav2_ws/build/nav2_voxel_grid/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/turtlebot/nav2_ws/src/navigation2/nav2_voxel_grid/test/CMakeLists.txt;1;ament_add_gtest;/home/turtlebot/nav2_ws/src/navigation2/nav2_voxel_grid/test/CMakeLists.txt;0;")
subdirs("../gtest")
