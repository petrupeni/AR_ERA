"""Setup configuration for the uavsandbox package."""

from setuptools import find_packages, setup

package_name = 'uavsandbox'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Petru Peni',
    maintainer_email='petrupeni@gmail.com',
    description='Crazyflie Mixer Sandbox',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sandbox = uavsandbox.sandbox:main',
            'flatness = uavsandbox.flatness_controller:main',
            'planner = uavsandbox.trajectory_planner:main',
        ],
    },
)
