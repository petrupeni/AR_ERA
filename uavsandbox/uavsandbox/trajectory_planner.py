"""Trajectory planner node for publishing circular trajectory commands to Crazyflie."""

import math

import rclpy
from crazy_flie_interfaces import FlatTarget
from rclpy.node import Node


class TrajectoryPlanner(Node):
    """Publishes circular trajectory commands to Crazyflie at 100 Hz."""

    def __init__(self):
        """Initialize the trajectory planner node."""
        super().__init__('trajectory_planner')

        self.target_pub = self.create_publisher(FlatTarget, '/crazyflie/flat_target', 10)

        # Run at 100 Hz
        self.timer = self.create_timer(0.01, self.publish_trajectory)
        self.start_time = self.get_clock().now()

        # Circular Trajectory Parameters
        self.radius = 1.0  # R
        self.omega = 1.0  # angular speed
        self.z_0 = 2.0  # Hover height

        self.get_logger().info('Publishing circular path.')

    def publish_trajectory(self):
        """Publishes the current trajectory point based on elapsed time."""
        now = self.get_clock().now()
        t = (now - self.start_time).nanoseconds / 1e9
        msg = FlatTarget()

        # --- Slide 26: Circular Trajectory Math ---

        # Position
        msg.position.x = self.radius * math.cos(self.omega * t)
        msg.position.y = self.radius * math.sin(self.omega * t)
        msg.position.z = self.z_0

        # Velocity
        msg.velocity.x = -self.radius * self.omega * math.sin(self.omega * t)
        msg.velocity.y = self.radius * self.omega * math.cos(self.omega * t)
        msg.velocity.z = 0.0

        # Acceleration
        msg.acceleration.x = -self.radius * (self.omega**2) * math.cos(self.omega * t)
        msg.acceleration.y = -self.radius * (self.omega**2) * math.sin(self.omega * t)
        msg.acceleration.z = 0.0

        # Jerk (Derivative of acceleration)
        msg.jerk.x = self.radius * (self.omega**3) * math.sin(self.omega * t)
        msg.jerk.y = -self.radius * (self.omega**3) * math.cos(self.omega * t)
        msg.jerk.z = 0.0

        # Snap (Derivative of jerk)
        msg.snap.x = self.radius * (self.omega**4) * math.cos(self.omega * t)
        msg.snap.y = self.radius * (self.omega**4) * math.sin(self.omega * t)
        msg.snap.z = 0.0

        # Yaw control
        msg.yaw = math.pi + (self.omega * t)
        msg.yaw_rate = self.omega
        msg.yaw_accel = 0.0

        self.target_pub.publish(msg)


def main(args=None):
    """Main entry point for the trajectory planner node."""
    rclpy.init(args=args)
    node = TrajectoryPlanner()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
