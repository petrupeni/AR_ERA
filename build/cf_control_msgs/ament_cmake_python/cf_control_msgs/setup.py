from setuptools import find_packages
from setuptools import setup

setup(
    name='cf_control_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('cf_control_msgs', 'cf_control_msgs.*')),
)
