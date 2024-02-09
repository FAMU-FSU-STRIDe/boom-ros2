from setuptools import setup

package_name = 'boom_motor_controller'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Jonathan Boylan',
    maintainer_email='jboylan@fsu.edu',
    description='Boom Motor Controller package',
    license='GPL-3.0-only',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_controller_node = boom_motor_controller.boom_motor_controller_node:main'
        ],
    },
)
