// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/ODriveCommand
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "starq_interfaces/msg/o_drive_command.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_ODriveCommand_common : public MATLABROS2MsgInterface<starq_interfaces::msg::ODriveCommand> {
  public:
    virtual ~ros2_starq_interfaces_msg_ODriveCommand_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::ODriveCommand* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveCommand* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_ODriveCommand_common::copy_from_struct(starq_interfaces::msg::ODriveCommand* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //input_position
        const matlab::data::TypedArray<float> input_position_arr = arr["input_position"];
        msg->input_position = input_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_position' is wrong type; expected a single.");
    }
    try {
        //input_velocity
        const matlab::data::TypedArray<float> input_velocity_arr = arr["input_velocity"];
        msg->input_velocity = input_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_velocity' is wrong type; expected a single.");
    }
    try {
        //input_torque
        const matlab::data::TypedArray<float> input_torque_arr = arr["input_torque"];
        msg->input_torque = input_torque_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_torque' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_torque' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_ODriveCommand_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveCommand* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","input_position","input_velocity","input_torque"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/ODriveCommand");
    // input_position
    auto currentElement_input_position = (msg + ctr)->input_position;
    outArray[ctr]["input_position"] = factory.createScalar(currentElement_input_position);
    // input_velocity
    auto currentElement_input_velocity = (msg + ctr)->input_velocity;
    outArray[ctr]["input_velocity"] = factory.createScalar(currentElement_input_velocity);
    // input_torque
    auto currentElement_input_torque = (msg + ctr)->input_torque;
    outArray[ctr]["input_torque"] = factory.createScalar(currentElement_input_torque);
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_ODriveCommand_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_ODriveCommand_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_ODriveCommand_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::ODriveCommand,ros2_starq_interfaces_msg_ODriveCommand_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_ODriveCommand_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::ODriveCommand,ros2_starq_interfaces_msg_ODriveCommand_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_ODriveCommand_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::ODriveCommand>();
    ros2_starq_interfaces_msg_ODriveCommand_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_ODriveCommand_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_ODriveCommand_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::ODriveCommand*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_ODriveCommand_common, MATLABROS2MsgInterface<starq_interfaces::msg::ODriveCommand>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_ODriveCommand_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER