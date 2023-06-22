// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/ODriveInfo
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
#include "starq_interfaces/msg/o_drive_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_ODriveInfo_common : public MATLABROS2MsgInterface<starq_interfaces::msg::ODriveInfo> {
  public:
    virtual ~ros2_starq_interfaces_msg_ODriveInfo_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::ODriveInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_ODriveInfo_common::copy_from_struct(starq_interfaces::msg::ODriveInfo* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
    try {
        //fault
        const matlab::data::TypedArray<uint32_t> fault_arr = arr["fault"];
        msg->fault = fault_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fault' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fault' is wrong type; expected a uint32.");
    }
    try {
        //pos_estimate
        const matlab::data::TypedArray<float> pos_estimate_arr = arr["pos_estimate"];
        msg->pos_estimate = pos_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_estimate' is wrong type; expected a single.");
    }
    try {
        //vel_estimate
        const matlab::data::TypedArray<float> vel_estimate_arr = arr["vel_estimate"];
        msg->vel_estimate = vel_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_estimate' is wrong type; expected a single.");
    }
    try {
        //torque_estimate
        const matlab::data::TypedArray<float> torque_estimate_arr = arr["torque_estimate"];
        msg->torque_estimate = torque_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torque_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'torque_estimate' is wrong type; expected a single.");
    }
    try {
        //torque_target
        const matlab::data::TypedArray<float> torque_target_arr = arr["torque_target"];
        msg->torque_target = torque_target_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torque_target' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'torque_target' is wrong type; expected a single.");
    }
    try {
        //iq_setpoint
        const matlab::data::TypedArray<float> iq_setpoint_arr = arr["iq_setpoint"];
        msg->iq_setpoint = iq_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'iq_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'iq_setpoint' is wrong type; expected a single.");
    }
    try {
        //iq_measured
        const matlab::data::TypedArray<float> iq_measured_arr = arr["iq_measured"];
        msg->iq_measured = iq_measured_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'iq_measured' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'iq_measured' is wrong type; expected a single.");
    }
    try {
        //motor_temperature
        const matlab::data::TypedArray<float> motor_temperature_arr = arr["motor_temperature"];
        msg->motor_temperature = motor_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'motor_temperature' is wrong type; expected a single.");
    }
    try {
        //bus_voltage
        const matlab::data::TypedArray<float> bus_voltage_arr = arr["bus_voltage"];
        msg->bus_voltage = bus_voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bus_voltage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bus_voltage' is wrong type; expected a single.");
    }
    try {
        //bus_current
        const matlab::data::TypedArray<float> bus_current_arr = arr["bus_current"];
        msg->bus_current = bus_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bus_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bus_current' is wrong type; expected a single.");
    }
    try {
        //pos_error
        const matlab::data::TypedArray<float> pos_error_arr = arr["pos_error"];
        msg->pos_error = pos_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_error' is wrong type; expected a single.");
    }
    try {
        //vel_error
        const matlab::data::TypedArray<float> vel_error_arr = arr["vel_error"];
        msg->vel_error = vel_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_error' is wrong type; expected a single.");
    }
    try {
        //torque_error
        const matlab::data::TypedArray<float> torque_error_arr = arr["torque_error"];
        msg->torque_error = torque_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torque_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'torque_error' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_ODriveInfo_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","state","fault","pos_estimate","vel_estimate","torque_estimate","torque_target","iq_setpoint","iq_measured","motor_temperature","bus_voltage","bus_current","pos_error","vel_error","torque_error"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/ODriveInfo");
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    // fault
    auto currentElement_fault = (msg + ctr)->fault;
    outArray[ctr]["fault"] = factory.createScalar(currentElement_fault);
    // pos_estimate
    auto currentElement_pos_estimate = (msg + ctr)->pos_estimate;
    outArray[ctr]["pos_estimate"] = factory.createScalar(currentElement_pos_estimate);
    // vel_estimate
    auto currentElement_vel_estimate = (msg + ctr)->vel_estimate;
    outArray[ctr]["vel_estimate"] = factory.createScalar(currentElement_vel_estimate);
    // torque_estimate
    auto currentElement_torque_estimate = (msg + ctr)->torque_estimate;
    outArray[ctr]["torque_estimate"] = factory.createScalar(currentElement_torque_estimate);
    // torque_target
    auto currentElement_torque_target = (msg + ctr)->torque_target;
    outArray[ctr]["torque_target"] = factory.createScalar(currentElement_torque_target);
    // iq_setpoint
    auto currentElement_iq_setpoint = (msg + ctr)->iq_setpoint;
    outArray[ctr]["iq_setpoint"] = factory.createScalar(currentElement_iq_setpoint);
    // iq_measured
    auto currentElement_iq_measured = (msg + ctr)->iq_measured;
    outArray[ctr]["iq_measured"] = factory.createScalar(currentElement_iq_measured);
    // motor_temperature
    auto currentElement_motor_temperature = (msg + ctr)->motor_temperature;
    outArray[ctr]["motor_temperature"] = factory.createScalar(currentElement_motor_temperature);
    // bus_voltage
    auto currentElement_bus_voltage = (msg + ctr)->bus_voltage;
    outArray[ctr]["bus_voltage"] = factory.createScalar(currentElement_bus_voltage);
    // bus_current
    auto currentElement_bus_current = (msg + ctr)->bus_current;
    outArray[ctr]["bus_current"] = factory.createScalar(currentElement_bus_current);
    // pos_error
    auto currentElement_pos_error = (msg + ctr)->pos_error;
    outArray[ctr]["pos_error"] = factory.createScalar(currentElement_pos_error);
    // vel_error
    auto currentElement_vel_error = (msg + ctr)->vel_error;
    outArray[ctr]["vel_error"] = factory.createScalar(currentElement_vel_error);
    // torque_error
    auto currentElement_torque_error = (msg + ctr)->torque_error;
    outArray[ctr]["torque_error"] = factory.createScalar(currentElement_torque_error);
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_ODriveInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_ODriveInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_ODriveInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::ODriveInfo,ros2_starq_interfaces_msg_ODriveInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_ODriveInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::ODriveInfo,ros2_starq_interfaces_msg_ODriveInfo_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_ODriveInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::ODriveInfo>();
    ros2_starq_interfaces_msg_ODriveInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_ODriveInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_ODriveInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::ODriveInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_ODriveInfo_common, MATLABROS2MsgInterface<starq_interfaces::msg::ODriveInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_ODriveInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER