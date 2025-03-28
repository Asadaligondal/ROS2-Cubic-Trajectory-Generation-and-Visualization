cmake_minimum_required(VERSION 3.8)
project(ar_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)  # Added this line to explicitly find std_msgs

# Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CubicTrajParams.msg"
  "msg/CubicTrajCoeffs.msg"
  "srv/ComputeCubicTraj.srv"
  DEPENDENCIES std_msgs
)

ament_package()