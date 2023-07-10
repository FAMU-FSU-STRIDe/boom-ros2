classdef TopicRecorder < handle
    
    properties
        Node
        Subscriber
        isRecording
        Data
        Size
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
            obj.Size = 0;
            obj.Data = repmat(ros2message(obj.Subscriber), expected_size, 1);
            obj.isRecording = true;
        end

        function stopRecording(obj)
            obj.isRecording = false;
        end

    end

    methods (Access=private)
        function msgCallback(obj, msg)
            if (obj.isRecording)
                obj.Size = obj.Size + 1;
                obj.Data(obj.Size) = msg;
            end
        end
    end
end

