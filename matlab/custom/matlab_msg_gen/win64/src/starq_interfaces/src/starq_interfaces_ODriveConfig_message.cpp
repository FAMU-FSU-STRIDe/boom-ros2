// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/ODriveConfig
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
#include "starq_interfaces/msg/o_drive_config.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_ODriveConfig_common : public MATLABROS2MsgInterface<starq_interfaces::msg::ODriveConfig> {
  public:
    virtual ~ros2_starq_interfaces_msg_ODriveConfig_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::ODriveConfig* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveConfig* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_ODriveConfig_common::copy_from_struct(starq_interfaces::msg::ODriveConfig* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //id
        const matlab::data::TypedArray<uint8_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
    try {
        //can_id
        const matlab::data::TypedArray<uint8_t> can_id_arr = arr["can_id"];
        msg->can_id = can_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_id' is wrong type; expected a uint8.");
    }
    try {
        //requested_state
        const matlab::data::TypedArray<uint32_t> requested_state_arr = arr["requested_state"];
        msg->requested_state = requested_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'requested_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'requested_state' is wrong type; expected a uint32.");
    }
    try {
        //control_mode
        const matlab::data::TypedArray<uint32_t> control_mode_arr = arr["control_mode"];
        msg->control_mode = control_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_mode' is wrong type; expected a uint32.");
    }
    try {
        //input_mode
        const matlab::data::TypedArray<uint32_t> input_mode_arr = arr["input_mode"];
        msg->input_mode = input_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_mode' is wrong type; expected a uint32.");
    }
    try {
        //velocity_limit
        const matlab::data::TypedArray<float> velocity_limit_arr = arr["velocity_limit"];
        msg->velocity_limit = velocity_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity_limit' is wrong type; expected a single.");
    }
    try {
        //current_limit
        const matlab::data::TypedArray<float> current_limit_arr = arr["current_limit"];
        msg->current_limit = current_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_limit' is wrong type; expected a single.");
    }
    try {
        //trap_traj_velocity_limit
        const matlab::data::TypedArray<float> trap_traj_velocity_limit_arr = arr["trap_traj_velocity_limit"];
        msg->trap_traj_velocity_limit = trap_traj_velocity_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trap_traj_velocity_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trap_traj_velocity_limit' is wrong type; expected a single.");
    }
    try {
        //trap_traj_acceleration_limit
        const matlab::data::TypedArray<float> trap_traj_acceleration_limit_arr = arr["trap_traj_acceleration_limit"];
        msg->trap_traj_acceleration_limit = trap_traj_acceleration_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trap_traj_acceleration_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trap_traj_acceleration_limit' is wrong type; expected a single.");
    }
    try {
        //trap_traj_deceleration_limit
        const matlab::data::TypedArray<float> trap_traj_deceleration_limit_arr = arr["trap_traj_deceleration_limit"];
        msg->trap_traj_deceleration_limit = trap_traj_deceleration_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trap_traj_deceleration_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trap_traj_deceleration_limit' is wrong type; expected a single.");
    }
    try {
        //trap_traj_inertia
        const matlab::data::TypedArray<float> trap_traj_inertia_arr = arr["trap_traj_inertia"];
        msg->trap_traj_inertia = trap_traj_inertia_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trap_traj_inertia' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trap_traj_inertia' is wrong type; expected a single.");
    }
    try {
        //position_gain
        const matlab::data::TypedArray<float> position_gain_arr = arr["position_gain"];
        msg->position_gain = position_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_gain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_gain' is wrong type; expected a single.");
    }
    try {
        //velocity_gain
        const matlab::data::TypedArray<float> velocity_gain_arr = arr["velocity_gain"];
        msg->velocity_gain = velocity_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_gain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity_gain' is wrong type; expected a single.");
    }
    try {
        //velocity_integrator_gain
        const matlab::data::TypedArray<float> velocity_integrator_gain_arr = arr["velocity_integrator_gain"];
        msg->velocity_integrator_gain = velocity_integrator_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_integrator_gain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity_integrator_gain' is wrong type; expected a single.");
    }
    try {
        //gear_ratio
        const matlab::data::TypedArray<float> gear_ratio_arr = arr["gear_ratio"];
        msg->gear_ratio = gear_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gear_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gear_ratio' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_ODriveConfig_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::ODriveConfig* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","id","can_id","requested_state","control_mode","input_mode","velocity_limit","current_limit","trap_traj_velocity_limit","trap_traj_acceleration_limit","trap_traj_deceleration_limit","trap_traj_inertia","position_gain","velocity_gain","velocity_integrator_gain","gear_ratio"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/ODriveConfig");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // can_id
    auto currentElement_can_id = (msg + ctr)->can_id;
    outArray[ctr]["can_id"] = factory.createScalar(currentElement_can_id);
    // requested_state
    auto currentElement_requested_state = (msg + ctr)->requested_state;
    outArray[ctr]["requested_state"] = factory.createScalar(currentElement_requested_state);
    // control_mode
    auto currentElement_control_mode = (msg + ctr)->control_mode;
    outArray[ctr]["control_mode"] = factory.createScalar(currentElement_control_mode);
    // input_mode
    auto currentElement_input_mode = (msg + ctr)->input_mode;
    outArray[ctr]["input_mode"] = factory.createScalar(currentElement_input_mode);
    // velocity_limit
    auto currentElement_velocity_limit = (msg + ctr)->velocity_limit;
    outArray[ctr]["velocity_limit"] = factory.createScalar(currentElement_velocity_limit);
    // current_limit
    auto currentElement_current_limit = (msg + ctr)->current_limit;
    outArray[ctr]["current_limit"] = factory.createScalar(currentElement_current_limit);
    // trap_traj_velocity_limit
    auto currentElement_trap_traj_velocity_limit = (msg + ctr)->trap_traj_velocity_limit;
    outArray[ctr]["trap_traj_velocity_limit"] = factory.createScalar(currentElement_trap_traj_velocity_limit);
    // trap_traj_acceleration_limit
    auto currentElement_trap_traj_acceleration_limit = (msg + ctr)->trap_traj_acceleration_limit;
    outArray[ctr]["trap_traj_acceleration_limit"] = factory.createScalar(currentElement_trap_traj_acceleration_limit);
    // trap_traj_deceleration_limit
    auto currentElement_trap_traj_deceleration_limit = (msg + ctr)->trap_traj_deceleration_limit;
    outArray[ctr]["trap_traj_deceleration_limit"] = factory.createScalar(currentElement_trap_traj_deceleration_limit);
    // trap_traj_inertia
    auto currentElement_trap_traj_inertia = (msg + ctr)->trap_traj_inertia;
    outArray[ctr]["trap_traj_inertia"] = factory.createScalar(currentElement_trap_traj_inertia);
    // position_gain
    auto currentElement_position_gain = (msg + ctr)->position_gain;
    outArray[ctr]["position_gain"] = factory.createScalar(currentElement_position_gain);
    // velocity_gain
    auto currentElement_velocity_gain = (msg + ctr)->velocity_gain;
    outArray[ctr]["velocity_gain"] = factory.createScalar(currentElement_velocity_gain);
    // velocity_integrator_gain
    auto currentElement_velocity_integrator_gain = (msg + ctr)->velocity_integrator_gain;
    outArray[ctr]["velocity_integrator_gain"] = factory.createScalar(currentElement_velocity_integrator_gain);
    // gear_ratio
    auto currentElement_gear_ratio = (msg + ctr)->gear_ratio;
    outArray[ctr]["gear_ratio"] = factory.createScalar(currentElement_gear_ratio);
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_ODriveConfig_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_ODriveConfig_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_ODriveConfig_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::ODriveConfig,ros2_starq_interfaces_msg_ODriveConfig_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_ODriveConfig_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::ODriveConfig,ros2_starq_interfaces_msg_ODriveConfig_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_ODriveConfig_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::ODriveConfig>();
    ros2_starq_interfaces_msg_ODriveConfig_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_ODriveConfig_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_ODriveConfig_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::ODriveConfig*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_ODriveConfig_common, MATLABROS2MsgInterface<starq_interfaces::msg::ODriveConfig>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_ODriveConfig_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER