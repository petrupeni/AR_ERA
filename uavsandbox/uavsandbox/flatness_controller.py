import math

import numpy as np
import rclpy
from actuator_msgs.msg import Actuators
from crazyflie_interfaces.msg import FlatTarget
from rclpy.node import Node


class FlatnessController(Node):
    def __init__(self):
        super().__init__('flatness_controller')

        self.mass = 2.1
        self.g_force = 9.81
        self.I_matrix = np.diag([0.02167, 0.02167, 0.04])

        self.declare_parameter('process_rate', 200.0)
        self.arm_lenght = 0.046
        self.c_thrust = 1.28192e-08
        self.c_drag = 8.06428e-05

        torque_arm = self.arm_lenght / math.sqrt(2)
        self.k_thrust = 1.0 / self.c_thrust
        self.k_torque = 1.0 / (self.c_thrust * torque_arm)
        self.k_drag = 1.0 / self.c_drag

        self.target_acc = np.zeros(3)
        self.target_jerk = np.zeros(3)
        self.target_snap = np.zeros(3)
        self.target_yaw = 0.0
        self.target_yaw_rate = 0.0
        self.target_yaw_acc = 0.0

        self.motor_pub = self.create_publisher(Actuators, '/crazyflie/motor_speed', 10)

        self.target_sub = self.create_subscription(
            FlatTarget, '/crazyflie/flat_target', self.target_callback, 10
        )

        process_rate = self.get_parameter('process_rate').value
        self.timer = self.create_timer(1.0 / process_rate, self.control_loop)

        self.get_logger.info('Flatness controler is active')

    def target_callback(self, msg):
        self.target_acc = np.array([msg.acceleration.x, msg.acceleration.y, msg.acceleration.z])
        self.target_jerk = np.array([msg.jerk.x, msg.jerk.y, msg.jerk.z])
        self.target_snap = np.array([msg.snap.x, msg.snap.y, msg.snap.z])
        self.target_yaw = msg.yaw
        self.target_yaw_rate = msg.yaw_rate
        self.target_yaw_acc = msg.yaw_acc

    def calculate_physics(self):
        acc_total = self.target_acc + np.array([0.0, 0.0, self.g_force])
        thrust = self.mass * np.linalg.norm(acc_total)
        z_B = acc_total / np.linalg.norm(acc_total)

        x_C = np.array([math.cos(self.target_yaw), math.sin(self.target_yaw), 0.0])
        y_B_raw = np.cross(z_B, x_C)
        y_B = y_B_raw / np.linalg.norm(y_B_raw)
        x_B = np.cross(y_B, z_B)

        h_omega = (self.mass / thrust) * (self.target_jerk - np.dot(self.target_jerk, z_B) * z_B)
        omega_x = -np.dot(h_omega, y_B)
        omega_y = np.dot(h_omega, x_B)
        omega_z = self.target_yaw_rate * z_B[2]
        omega = np.array([omega_x, omega_y, omega_z])

        j_z = np.dot(self.target_jerk, z_B)
        s_x = np.dot(self.target_snap, x_B)
        s_y = np.dot(self.target_snap, y_B)

        omega_dot_x = (
            (self.mass / thrust) * s_x
            - 2.0 * (self.mass / thrust) * j_z * omega_y
            - omega_x * omega_z
        )
        omega_dot_y = (
            (self.mass / thrust) * s_y
            + 2.0 * (self.mass / thrust) * j_z * omega_x
            - omega_y * omega_z
        )
        omega_dot_z = self.target_yaw_acc * z_B[2]
        omega_dot = np.array([omega_dot_x, omega_dot_y, omega_dot_z])

        tau = self.I_matrix @ omega_dot + np.cross(omega, self.I_matrix @ omega)

        return thrust, tau[0], tau[1], tau[2]

    def control_loop(self):
        thrust, tau_x, tau_y, tau_z = self.calculate_physics()

        t_part = self.k_thrust * thrust
        r_part = self.k_torque * tau_x
        p_part = self.k_torque * tau_y
        y_part = self.k_drag * tau_z

        m1_sq = t_part - r_part - p_part - y_part
        m2_sq = t_part - r_part + p_part + y_part
        m3_sq = t_part + r_part + p_part - y_part
        m4_sq = t_part + r_part - p_part + y_part

        msg = Actuators()
        msg.velocity = [
            float(0.5 * math.sqrt(max(0.0, m1_sq))),
            float(0.5 * math.sqrt(max(0.0, m2_sq))),
            float(0.5 * math.sqrt(max(0.0, m3_sq))),
            float(0.5 * math.sqrt(max(0.0, m4_sq))),
        ]
        self.motor_pub.publish(msg)

    def main(args=None):
        rclpy.init(args=args)
        node = FlatnessController()
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
