ROS2 Cubic Trajectory Generator

A ROS2 Humble project generating and visualizing cubic trajectories using a multi-node system. Computes position, velocity, and acceleration from random parameters, visualized in rqt_plot.
Prerequisites

    ROS2 Humble
    Python 3.8+
    Gazebo Harmonic (optional, for compatibility)
    colcon build tool

Setup

    Clone the repository:
    bash

git clone https://github.com/[YourUsername]/ROS2-Cubic-Trajectory-Generator.git
cd ROS2-Cubic-Trajectory-Generator
Source ROS2:
bash
source /opt/ros/humble/setup.bash
Build the workspace:
bash

    colcon build
    source install/setup.bash

Running the Project

    Launch the nodes:
    bash

ros2 launch ar_test cubic_traj_gen.launch.py
Visualize trajectories:
bash

    rqt
        Add /position_trajectory, /velocity_trajectory, /acceleration_trajectory in the Plot plugin.
        Set time window to 15 seconds.

Notes

    Trajectories update every 2 seconds, published at 5-second intervals.
    Check terminal logs for debugging.
