import rclpy
from rclpy.node import Node
from ar_interface.srv import ComputeCubicTraj

class ComputeCubicCoeffs(Node):
    def __init__(self):
        super().__init__('compute_cubic_coeffs')
        # Create service
        self.srv = self.create_service(ComputeCubicTraj, 'compute_cubic_traj', self.compute_callback)
        self.get_logger().info('Compute Cubic Coefficients Service started')

    def compute_callback(self, request, response):
        # Extract parameters
        p0, pf, v0, vf, t0, tf = request.p0, request.pf, request.v0, request.vf, request.t0, request.tf
        dt = tf - t0

        # Compute cubic polynomial coefficients: p(t) = a0 + a1*t + a2*t^2 + a3*t^3
        # Using boundary conditions: p(t0)=p0, p(tf)=pf, p'(t0)=v0, p'(tf)=vf
        a0 = p0
        a1 = v0
        a2 = (3*(pf - p0) - (2*v0 + vf)*dt) / (dt**2)
        a3 = (2*(p0 - pf) + (v0 + vf)*dt) / (dt**3)

        # Populate response
        response.a0 = a0
        response.a1 = a1
        response.a2 = a2
        response.a3 = a3

        self.get_logger().info(f'Computed: a0={a0:.2f}, a1={a1:.2f}, a2={a2:.2f}, a3={a3:.2f}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ComputeCubicCoeffs()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()