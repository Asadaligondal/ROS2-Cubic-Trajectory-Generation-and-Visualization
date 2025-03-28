import rclpy
from rclpy.node import Node
import random
from ar_interface.msg import CubicTrajParams

class PointsGenerator(Node):
    def __init__(self):
        super().__init__('points_generator')
        # Create publisher for trajectory parameters
        self.publisher = self.create_publisher(CubicTrajParams, 'traj_params', 10)
        # Set timer to publish every 10 seconds
        self.timer = self.create_timer(10.0, self.timer_callback)
        self.get_logger().info('Points Generator Node started')

    def timer_callback(self):
        # Generate random parameters
        p0 = random.uniform(-10.0, 10.0)  # Initial position [-10, 10]
        pf = random.uniform(-10.0, 10.0)  # Final position [-10, 10]
        v0 = random.uniform(-10.0, 10.0)  # Initial velocity [-10, 10]
        vf = random.uniform(-10.0, 10.0)  # Final velocity [-10, 10]
        t0 = 0.0                          # Initial time always 0
        dt = random.uniform(4.0, 8.0)     # Random duration between 4 and 8
        tf = t0 + dt                      # Final time

        # Create and populate message
        msg = CubicTrajParams()
        msg.p0 = p0
        msg.pf = pf
        msg.v0 = v0
        msg.vf = vf
        msg.t0 = t0
        msg.tf = tf

        # Publish message
        self.publisher.publish(msg)
        self.get_logger().info(f'Published: p0={p0:.2f}, pf={pf:.2f}, v0={v0:.2f}, vf={vf:.2f}, t0={t0:.2f}, tf={tf:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = PointsGenerator()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()