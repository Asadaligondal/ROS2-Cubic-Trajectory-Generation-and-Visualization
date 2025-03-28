from setuptools import find_packages
from setuptools import setup

setup(
    name='ar_interface',
    version='0.0.0',
    packages=find_packages(
        include=('ar_interface', 'ar_interface.*')),
)
