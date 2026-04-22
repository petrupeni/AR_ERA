"""Test module for verifying physics calculations for UAV flatness-based control.

This module contains functions to calculate thrust and torque values based on
target accelerations, jerks, snaps, and yaw commands, and validates them against
expected values from a CSV test file.
"""

import csv
import math
import os

import numpy as np


def calculate_physics(
    mass,
    g,
    I_matrix,
    target_acc,
    target_jerk,
    target_snap,
    target_yaw,
    target_yaw_rate,
    target_yaw_acc,
):
    """Calculate thrust and torques based on target flat outputs."""
    acc_total = target_acc + np.array([0.0, 0.0, g])
    thrust = mass * np.linalg.norm(acc_total)
    z_B = acc_total / np.linalg.norm(acc_total)

    x_C = np.array([math.cos(target_yaw), math.sin(target_yaw), 0.0])
    y_B_raw = np.cross(z_B, x_C)
    y_B = y_B_raw / np.linalg.norm(y_B_raw)
    x_B = np.cross(y_B, z_B)

    h_omega = (mass / thrust) * (target_jerk - np.dot(target_jerk, z_B) * z_B)
    omega_x = -np.dot(h_omega, y_B)
    omega_y = np.dot(h_omega, x_B)
    omega_z = target_yaw_rate * z_B[2]
    omega = np.array([omega_x, omega_y, omega_z])

    j_z = np.dot(target_jerk, z_B)
    s_x = np.dot(target_snap, x_B)
    s_y = np.dot(target_snap, y_B)

    omega_dot_x = (
        -(mass / thrust) * s_y - 2.0 * (mass / thrust) * j_z * omega_x + omega_y * omega_z
    )
    omega_dot_y = (mass / thrust) * s_x - 2.0 * (mass / thrust) * j_z * omega_y - omega_x * omega_z
    omega_dot_z = target_yaw_acc * z_B[2]
    omega_dot = np.array([omega_dot_x, omega_dot_y, omega_dot_z])

    tau = I_matrix @ omega_dot + np.cross(omega, I_matrix @ omega)

    return thrust, tau[0], tau[1], tau[2]


def run_tests(csv_filepath):
    """Run physics calculation tests from a CSV file."""
    with open(csv_filepath, mode='r') as file:
        reader = csv.DictReader(file)
        passed = 0
        total = 0

        for row in reader:
            total += 1
            test_name = row['test_name']

            mass = float(row['in_mass'])
            g = float(row['in_gravity'])
            I_matrix = np.diag(
                [float(row['in_I_xx']), float(row['in_I_yy']), float(row['in_I_zz'])]
            )

            t_acc = np.array(
                [float(row['in_acc_x']), float(row['in_acc_y']), float(row['in_acc_z'])]
            )
            t_jerk = np.array(
                [float(row['in_jerk_x']), float(row['in_jerk_y']), float(row['in_jerk_z'])]
            )
            t_snap = np.array(
                [float(row['in_snap_x']), float(row['in_snap_y']), float(row['in_snap_z'])]
            )

            t_yaw = float(row['in_yaw'])
            t_yaw_rate = float(row['in_yaw_rate'])
            t_yaw_acc = float(row['in_yaw_acceleration'])

            calc_thrust, calc_tau_x, calc_tau_y, calc_tau_z = calculate_physics(
                mass, g, I_matrix, t_acc, t_jerk, t_snap, t_yaw, t_yaw_rate, t_yaw_acc
            )

            expected_thrust = float(row['out_thrust'])
            expected_tau_x = float(row['out_torque_x'])
            expected_tau_y = float(row['out_torque_y'])
            expected_tau_z = float(row['out_torque_z'])

            tolerance = 1e-4
            if (
                math.isclose(calc_thrust, expected_thrust, abs_tol=tolerance)
                and math.isclose(calc_tau_x, expected_tau_x, abs_tol=tolerance)
                and math.isclose(calc_tau_y, expected_tau_y, abs_tol=tolerance)
                and math.isclose(calc_tau_z, expected_tau_z, abs_tol=tolerance)
            ):
                print(f'PASSED: {test_name}')
                passed += 1
            else:
                print(f'FAILED: {test_name}')
                print(f'Expected Thrust: {expected_thrust:.4f}, Got: {calc_thrust:.4f}')
                print(
                    f'Expected Torques: [{expected_tau_x:.4f}, {expected_tau_y:.4f}, {expected_tau_z:.4f}]'
                )
                print(f'Got Torques:      [{calc_tau_x:.4f}, {calc_tau_y:.4f}, {calc_tau_z:.4f}]')

        print(f'\n--- TEST SUMMARY: {passed}/{total} Passed ---')


if __name__ == '__main__':
    script_dir = os.path.dirname(os.path.abspath(__file__))
    csv_relative_path = os.path.join(script_dir, 'trajectory_from_flat_output_test_data.csv')
    run_tests(csv_relative_path)
