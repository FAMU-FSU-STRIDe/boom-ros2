classdef TopicRecorder < handle
    
    properties
        Node
        Subscriber
        isRecording
        RecordingData
        RecordingSize
    end
    
    methods
        function obj = TopicRecorder(node, topic_name, topic_type)
            obj.Node = node;
            obj.Subscriber = ros2subscriber(node, topic_name, topic_type, ...
                @obj.msgCallback);
        end

        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            obj.RecordingSize = 0;
            obj.RecordingData = repmat(ros2message(obj.Subscriber), expected_size, 1);
            obj.isRecording = true;
        end

        function stopRecording(obj)
            obj.isRecording = false;
        end

    end

    methods (Access=private)
        function msgCallback(obj, msg)
            if (obj.isRecording)
                obj.RecordingSize = obj.RecordingSize + 1;
                obj.RecordingData(obj.RecordingSize) = msg;
            end
        end
    end
end

