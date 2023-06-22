// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/LegCommand
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
#include "starq_interfaces/msg/leg_command.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_LegCommand_common : public MATLABROS2MsgInterface<starq_interfaces::msg::LegCommand> {
  public:
    virtual ~ros2_starq_interfaces_msg_LegCommand_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::LegCommand* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegCommand* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_LegCommand_common::copy_from_struct(starq_interfaces::msg::LegCommand* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //input_pos
        const matlab::data::TypedArray<float> input_pos_arr = arr["input_pos"];
        size_t nelem = input_pos_arr.getNumberOfElements();
        	msg->input_pos.resize(nelem);
        	std::copy(input_pos_arr.begin(), input_pos_arr.begin()+nelem, msg->input_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_pos' is wrong type; expected a single.");
    }
    try {
        //input_vel
        const matlab::data::TypedArray<float> input_vel_arr = arr["input_vel"];
        size_t nelem = input_vel_arr.getNumberOfElements();
        	msg->input_vel.resize(nelem);
        	std::copy(input_vel_arr.begin(), input_vel_arr.begin()+nelem, msg->input_vel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_vel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_vel' is wrong type; expected a single.");
    }
    try {
        //input_acc
        const matlab::data::TypedArray<float> input_acc_arr = arr["input_acc"];
        size_t nelem = input_acc_arr.getNumberOfElements();
        	msg->input_acc.resize(nelem);
        	std::copy(input_acc_arr.begin(), input_acc_arr.begin()+nelem, msg->input_acc.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_acc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_acc' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_LegCommand_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegCommand* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","input_pos","input_vel","input_acc"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/LegCommand");
    // input_pos
    auto currentElement_input_pos = (msg + ctr)->input_pos;
    outArray[ctr]["input_pos"] = factory.createArray<starq_interfaces::msg::LegCommand::_input_pos_type::const_iterator, float>({currentElement_input_pos.size(), 1}, currentElement_input_pos.begin(), currentElement_input_pos.end());
    // input_vel
    auto currentElement_input_vel = (msg + ctr)->input_vel;
    outArray[ctr]["input_vel"] = factory.createArray<starq_interfaces::msg::LegCommand::_input_vel_type::const_iterator, float>({currentElement_input_vel.size(), 1}, currentElement_input_vel.begin(), currentElement_input_vel.end());
    // input_acc
    auto currentElement_input_acc = (msg + ctr)->input_acc;
    outArray[ctr]["input_acc"] = factory.createArray<starq_interfaces::msg::LegCommand::_input_acc_type::const_iterator, float>({currentElement_input_acc.size(), 1}, currentElement_input_acc.begin(), currentElement_input_acc.end());
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_LegCommand_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_LegCommand_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_LegCommand_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::LegCommand,ros2_starq_interfaces_msg_LegCommand_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_LegCommand_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::LegCommand,ros2_starq_interfaces_msg_LegCommand_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_LegCommand_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::LegCommand>();
    ros2_starq_interfaces_msg_LegCommand_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_LegCommand_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_LegCommand_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::LegCommand*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_LegCommand_common, MATLABROS2MsgInterface<starq_interfaces::msg::LegCommand>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_LegCommand_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER