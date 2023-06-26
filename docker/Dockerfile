FROM ros:humble

RUN apt-get update
RUN apt-get install -y \
        python3-pip

RUN pip3 install \
        odrive \
        can \
        cantools

RUN pip3 install serial pyserial
RUN pip3 install setuptools==58.2.0

RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc

WORKDIR /starq_ws
