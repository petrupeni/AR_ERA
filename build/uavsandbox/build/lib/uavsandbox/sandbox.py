import math
import threading

import rclpy
from actuator_msgs.msg import Actuators
from geometry_msgs.msg import Twist
from rclpy.node import Node


class SandBox(Node):
    def __init__(self):
        super().__init__('sandbox')

        # 1. Parameters
        self.declare_parameter('process_rate', 200.0)
        self.declare_parameter('arm_length', 0.046)
        self.declare_parameter('thrust_coefficient', 1.28192e-08)
        self.declare_parameter('drag_coefficient', 8.06428e-05)

        process_rate = self.get_parameter('process_rate').value
        arm_length = self.get_parameter('arm_length').value
        thrust_coefficient = self.get_parameter('thrust_coefficient').value
        drag_coefficient = self.get_parameter('drag_coefficient').value

        # 2. Physics Math
        torque_arm = arm_length / math.sqrt(2)
        self.k_thrust = 1.0 / thrust_coefficient
        self.k_torque = 1.0 / (thrust_coefficient * torque_arm)
        self.k_drag = 1.0 / drag_coefficient

        # 3. State Variables
        self.desired_thrust = 0.0
        self.desired_roll_torque = 0.0
        self.desired_pitch_torque = 0.0
        self.desired_yaw_torque = 0.0
        self.input_lock = threading.Lock()

        # 4. Pubs & Subs mapped to Gazebo Simulator
        self.motor_command_publisher = self.create_publisher(
            Actuators, '/crazyflie/motor_speed', 10
        )

        self.subscription = self.create_subscription(
            Twist, '/cmd_vel', self.manual_control_callback, 10
        )

        # 5. Timer
        self.process_timer = self.create_timer(1.0 / process_rate, self.process)
        self.get_logger().info(
            'SandBox active! Listening to /cmd_vel -> Publishing to /crazyflie/motor_speed'
        )

    def manual_control_callback(self, msg):
        with self.input_lock:
            # Map keyboard Twist limits to Crazyflie dynamics
            self.desired_thrust = max(0.0, msg.linear.z)
            self.desired_roll_torque = msg.linear.y
            self.desired_pitch_torque = msg.linear.x
            self.desired_yaw_torque = msg.angular.z

    def process(self):
        with self.input_lock:
            thrust = self.desired_thrust
            roll = self.desired_roll_torque
            pitch = self.desired_pitch_torque
            yaw = self.desired_yaw_torque

        # Mixer Logic
        thrust_part = self.k_thrust * thrust
        roll_part = self.k_torque * roll
        pitch_part = self.k_torque * pitch
        yaw_part = self.k_drag * yaw

        m1_sq = thrust_part - roll_part - pitch_part - yaw_part
        m2_sq = thrust_part - roll_part + pitch_part + yaw_part
        m3_sq = thrust_part + roll_part + pitch_part - yaw_part
        m4_sq = thrust_part + roll_part - pitch_part + yaw_part

        # Create Actuators message for Gazebo Bridge
        msg = Actuators()
        msg.velocity = [
            float(0.5 * math.sqrt(max(0.0, m1_sq))),
            float(0.5 * math.sqrt(max(0.0, m2_sq))),
            float(0.5 * math.sqrt(max(0.0, m3_sq))),
            float(0.5 * math.sqrt(max(0.0, m4_sq))),
        ]

        self.motor_command_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = SandBox()
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
