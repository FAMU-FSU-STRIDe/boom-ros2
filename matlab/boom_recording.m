clear
close all

node = ros2node("matlab_node");

recorder = TopicRecorder(node, "/starq/boom/info", "starq_interfaces/BoomEncoderInfo");

recorder.startRecording();

pause(10.0)

recorder.stopRecording();

tilt_data = [recorder.RecordingData.tilt];
orientation_data = [recorder.RecordingData.orientation];

figure
subplot(2,1,1)
plot(tilt_data)
ylabel("Tilt (ticks)")
subplot(2,1,2)
plot(orientation_data)
ylabel("orientation (rev)")

clear node % closes ROS node