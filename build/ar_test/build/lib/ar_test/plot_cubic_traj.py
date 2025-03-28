import rclpy
from rclpy.node import Node
from ar_interface.msg import CubicTrajCoeffs
from std_msgs.msg import Float64
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class PlotCubicTraj(Node):
    def __init__(self):
        super().__init__('plot_cubic_traj')
        qos = QoSProfile(reliability=ReliabilityPolicy.RELIABLE, history=HistoryPolicy.KEEP_LAST, depth=10)
        self.subscription = self.create_subscription(
            CubicTrajCoeffs, '/traj_coeffs', self.callback, qos)
        self.pos_pub = self.create_publisher(Float64, '/position_trajectory', qos)
        self.vel_pub = self.create_publisher(Float64, '/velocity_trajectory', qos)
        self.acc_pub = self.create_publisher(Float64, '/acceleration_trajectory', qos)
        # Trajectory parameters
        self.a0 = self.a1 = self.a2 = self.a3 = self.t0 = self.tf = 0.0
        self.t = 0.0
        self.active = False
        # Timer for publishing at 100 Hz
        self.timer = self.create_timer(0.01, self.publish_trajectory)
        self.get_logger().info('Plot Cubic Trajectory Node started')

    def callback(self, msg):
        self.get_logger().info(f'Received /traj_coeffs: a0={msg.a0:.2f}, t0={msg.t0:.2f}, tf={msg.tf:.2f}')
        # Update coefficients and reset time
        self.a0, self.a1, self.a2, self.a3 = msg.a0, msg.a1, msg.a2, msg.a3
        self.t0, self.tf = msg.t0, msg.tf
        self.t = self.t0
        self.active = True

    def publish_trajectory(self):
        if not self.active or not rclpy.ok():
            return
        t_rel = self.t - self.t0
        if self.t <= self.tf:
            pos = self.a0 + self.a1*t_rel + self.a2*(t_rel**2) + self.a3*(t_rel**3)
            vel = self.a1 + 2*self.a2*t_rel + 3*self.a3*(t_rel**2)
            acc = 2*self.a2 + 6*self.a3*t_rel
            self.get_logger().info(f'Publishing: pos={pos:.2f}, vel={vel:.2f}, acc={acc:.2f}, t={self.t:.2f}')
            self.pos_pub.publish(Float64(data=pos))
            self.vel_pub.publish(Float64(data=vel))
            self.acc_pub.publish(Float64(data=acc))
            self.t += 0.01
        else:
            self.active = False  # Stop until next message

def main(args=None):
    rclpy.init(args=args)
    node = PlotCubicTraj()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()