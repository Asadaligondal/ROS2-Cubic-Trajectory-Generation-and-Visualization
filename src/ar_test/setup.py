from setuptools import setup
import os
from glob import glob

package_name = 'ar_test'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='Cubic trajectory generator for ROS2 coursework',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'points_generator = ar_test.points_generator:main',
            'cubic_traj_planner = ar_test.cubic_traj_planner:main',
            'compute_cubic_coeffs = ar_test.compute_cubic_coeffs:main',
            'plot_cubic_traj = ar_test.plot_cubic_traj:main',
        ],
    },
)