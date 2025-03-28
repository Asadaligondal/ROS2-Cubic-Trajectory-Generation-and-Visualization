import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from ar_interface.msg import CubicTrajParams, CubicTrajCoeffs
from ar_interface.srv import ComputeCubicTraj
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class CubicTrajPlanner(Node):
    def __init__(self):
        super().__init__('cubic_traj_planner')
        qos = QoSProfile(reliability=ReliabilityPolicy.RELIABLE, history=HistoryPolicy.KEEP_LAST, depth=10)
        self.subscription = self.create_subscription(
            CubicTrajParams, 'traj_params', self.callback, qos)
        self.publisher = self.create_publisher(CubicTrajCoeffs, 'traj_coeffs', qos)
        self.cli = self.create_client(ComputeCubicTraj, 'compute_cubic_traj')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for compute_cubic_traj service...')
        self.pending_future = None
        self.timer = self.create_timer(0.1, self.process_future)
        self.last_msg = None
        self.get_logger().info('Cubic Trajectory Planner Node started')

    def callback(self, msg):
        self.get_logger().info(f'Received /traj_params: p0={msg.p0:.2f}, pf={msg.pf:.2f}, t0={msg.t0:.2f}, tf={msg.tf:.2f}')
        req = ComputeCubicTraj.Request()
        req.p0 = msg.p0
        req.pf = msg.pf
        req.v0 = msg.v0
        req.vf = msg.vf
        req.t0 = msg.t0
        req.tf = msg.tf
        self.last_msg = msg  # Store message for later use
        self.pending_future = self.cli.call_async(req)

    def process_future(self):
        if self.pending_future is not None and self.pending_future.done():
            try:
                response = self.pending_future.result()
                if response is not None:
                    self.get_logger().info(f'Service response: a0={response.a0:.2f}, a1={response.a1:.2f}, a2={response.a2:.2f}, a3={response.a3:.2f}')
                    coeff_msg = CubicTrajCoeffs()
                    coeff_msg.a0 = response.a0
                    coeff_msg.a1 = response.a1
                    coeff_msg.a2 = response.a2
                    coeff_msg.a3 = response.a3
                    coeff_msg.t0 = self.last_msg.t0
                    coeff_msg.tf = self.last_msg.tf
                    self.publisher.publish(coeff_msg)
                    self.get_logger().info(f'Published to /traj_coeffs: a0={response.a0:.2f}, t0={coeff_msg.t0:.2f}, tf={coeff_msg.tf:.2f}')
                else:
                    self.get_logger().error('Service returned None')
            except Exception as e:
                self.get_logger().error(f'Future failed: {str(e)}')
            self.pending_future = None  # Reset for next message

def main(args=None):
    rclpy.init(args=args)
    node = CubicTrajPlanner()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()