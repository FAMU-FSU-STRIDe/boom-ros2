// Copyright 2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/RunLegTrajectoryGoal
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
#include "starq_interfaces/action/run_leg_trajectory.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ActionTemplates.hpp"
class STARQ_INTERFACES_EXPORT starq_interfaces_msg_RunLegTrajectoryGoal_common : public MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Goal> {
  public:
    virtual ~starq_interfaces_msg_RunLegTrajectoryGoal_common(){}
    virtual void copy_from_struct(starq_interfaces::action::RunLegTrajectory::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void starq_interfaces_msg_RunLegTrajectoryGoal_common::copy_from_struct(starq_interfaces::action::RunLegTrajectory::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //publish_rate
        const matlab::data::TypedArray<float> publish_rate_arr = arr["publish_rate"];
        msg->publish_rate = publish_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'publish_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'publish_rate' is wrong type; expected a single.");
    }
    try {
        //trajectory
        const matlab::data::StructArray trajectory_arr = arr["trajectory"];
        for (auto _trajectoryarr : trajectory_arr) {
        	starq_interfaces::msg::LegCommandArray _val;
        auto msgClassPtr_trajectory = getCommonObject<starq_interfaces::msg::LegCommandArray>("ros2_starq_interfaces_msg_LegCommandArray_common",loader);
        msgClassPtr_trajectory->copy_from_struct(&_val,_trajectoryarr,loader);
        	msg->trajectory.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trajectory' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T starq_interfaces_msg_RunLegTrajectoryGoal_common::get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","publish_rate","trajectory"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/RunLegTrajectoryGoal");
    // publish_rate
    auto currentElement_publish_rate = (msg + ctr)->publish_rate;
    outArray[ctr]["publish_rate"] = factory.createScalar(currentElement_publish_rate);
    // trajectory
    auto currentElement_trajectory = (msg + ctr)->trajectory;
    auto msgClassPtr_trajectory = getCommonObject<starq_interfaces::msg::LegCommandArray>("ros2_starq_interfaces_msg_LegCommandArray_common",loader);
    outArray[ctr]["trajectory"] = msgClassPtr_trajectory->get_arr(factory,&currentElement_trajectory[0],loader,currentElement_trajectory.size());
    }
    return std::move(outArray);
  }

class STARQ_INTERFACES_EXPORT starq_interfaces_msg_RunLegTrajectoryResult_common : public MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Result> {
  public:
    virtual ~starq_interfaces_msg_RunLegTrajectoryResult_common(){}
    virtual void copy_from_struct(starq_interfaces::action::RunLegTrajectory::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void starq_interfaces_msg_RunLegTrajectoryResult_common::copy_from_struct(starq_interfaces::action::RunLegTrajectory::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //leg_infos
        const matlab::data::StructArray leg_infos_arr = arr["leg_infos"];
        for (auto _leg_infosarr : leg_infos_arr) {
        	starq_interfaces::msg::LegInfoArray _val;
        auto msgClassPtr_leg_infos = getCommonObject<starq_interfaces::msg::LegInfoArray>("ros2_starq_interfaces_msg_LegInfoArray_common",loader);
        msgClassPtr_leg_infos->copy_from_struct(&_val,_leg_infosarr,loader);
        	msg->leg_infos.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'leg_infos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'leg_infos' is wrong type; expected a struct.");
    }
    try {
        //motor_infos
        const matlab::data::StructArray motor_infos_arr = arr["motor_infos"];
        for (auto _motor_infosarr : motor_infos_arr) {
        	starq_interfaces::msg::ODriveInfoArray _val;
        auto msgClassPtr_motor_infos = getCommonObject<starq_interfaces::msg::ODriveInfoArray>("ros2_starq_interfaces_msg_ODriveInfoArray_common",loader);
        msgClassPtr_motor_infos->copy_from_struct(&_val,_motor_infosarr,loader);
        	msg->motor_infos.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_infos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'motor_infos' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T starq_interfaces_msg_RunLegTrajectoryResult_common::get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","leg_infos","motor_infos"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/RunLegTrajectoryResult");
    // leg_infos
    auto currentElement_leg_infos = (msg + ctr)->leg_infos;
    auto msgClassPtr_leg_infos = getCommonObject<starq_interfaces::msg::LegInfoArray>("ros2_starq_interfaces_msg_LegInfoArray_common",loader);
    outArray[ctr]["leg_infos"] = msgClassPtr_leg_infos->get_arr(factory,&currentElement_leg_infos[0],loader,currentElement_leg_infos.size());
    // motor_infos
    auto currentElement_motor_infos = (msg + ctr)->motor_infos;
    auto msgClassPtr_motor_infos = getCommonObject<starq_interfaces::msg::ODriveInfoArray>("ros2_starq_interfaces_msg_ODriveInfoArray_common",loader);
    outArray[ctr]["motor_infos"] = msgClassPtr_motor_infos->get_arr(factory,&currentElement_motor_infos[0],loader,currentElement_motor_infos.size());
    }
    return std::move(outArray);
  }

class STARQ_INTERFACES_EXPORT starq_interfaces_msg_RunLegTrajectoryFeedback_common : public MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Feedback> {
  public:
    virtual ~starq_interfaces_msg_RunLegTrajectoryFeedback_common(){}
    virtual void copy_from_struct(starq_interfaces::action::RunLegTrajectory::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void starq_interfaces_msg_RunLegTrajectoryFeedback_common::copy_from_struct(starq_interfaces::action::RunLegTrajectory::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //lastest_leg_info
        const matlab::data::StructArray lastest_leg_info_arr = arr["lastest_leg_info"];
        auto msgClassPtr_lastest_leg_info = getCommonObject<starq_interfaces::msg::LegInfoArray>("ros2_starq_interfaces_msg_LegInfoArray_common",loader);
        msgClassPtr_lastest_leg_info->copy_from_struct(&msg->lastest_leg_info,lastest_leg_info_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lastest_leg_info' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lastest_leg_info' is wrong type; expected a struct.");
    }
    try {
        //latest_motor_info
        const matlab::data::StructArray latest_motor_info_arr = arr["latest_motor_info"];
        auto msgClassPtr_latest_motor_info = getCommonObject<starq_interfaces::msg::ODriveInfoArray>("ros2_starq_interfaces_msg_ODriveInfoArray_common",loader);
        msgClassPtr_latest_motor_info->copy_from_struct(&msg->latest_motor_info,latest_motor_info_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latest_motor_info' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'latest_motor_info' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T starq_interfaces_msg_RunLegTrajectoryFeedback_common::get_arr(MDFactory_T& factory, const starq_interfaces::action::RunLegTrajectory::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","lastest_leg_info","latest_motor_info"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/RunLegTrajectoryFeedback");
    // lastest_leg_info
    auto currentElement_lastest_leg_info = (msg + ctr)->lastest_leg_info;
    auto msgClassPtr_lastest_leg_info = getCommonObject<starq_interfaces::msg::LegInfoArray>("ros2_starq_interfaces_msg_LegInfoArray_common",loader);
    outArray[ctr]["lastest_leg_info"] = msgClassPtr_lastest_leg_info->get_arr(factory, &currentElement_lastest_leg_info, loader);
    // latest_motor_info
    auto currentElement_latest_motor_info = (msg + ctr)->latest_motor_info;
    auto msgClassPtr_latest_motor_info = getCommonObject<starq_interfaces::msg::ODriveInfoArray>("ros2_starq_interfaces_msg_ODriveInfoArray_common",loader);
    outArray[ctr]["latest_motor_info"] = msgClassPtr_latest_motor_info->get_arr(factory, &currentElement_latest_motor_info, loader);
    }
    return std::move(outArray);
  }

class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_RunLegTrajectory_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_RunLegTrajectory_action(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABActClientInterface> generateActClientInterface();
    virtual matlab::data::StructArray generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
    virtual std::shared_ptr<void> generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_RunLegTrajectory_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<starq_interfaces::action::RunLegTrajectory::Goal,starq_interfaces_msg_RunLegTrajectoryGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<starq_interfaces::action::RunLegTrajectory::Feedback,starq_interfaces_msg_RunLegTrajectoryFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<starq_interfaces::action::RunLegTrajectory::Result,starq_interfaces_msg_RunLegTrajectoryResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_RunLegTrajectory_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<starq_interfaces::action::RunLegTrajectory::Goal,starq_interfaces_msg_RunLegTrajectoryGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<starq_interfaces::action::RunLegTrajectory::Feedback,starq_interfaces_msg_RunLegTrajectoryFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<starq_interfaces::action::RunLegTrajectory::Result,starq_interfaces_msg_RunLegTrajectoryResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_starq_interfaces_RunLegTrajectory_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<starq_interfaces::action::RunLegTrajectory,starq_interfaces::action::RunLegTrajectory::Goal,starq_interfaces::action::RunLegTrajectory::Feedback::ConstSharedPtr,starq_interfaces::action::RunLegTrajectory::Result::ConstSharedPtr,starq_interfaces_msg_RunLegTrajectoryGoal_common,starq_interfaces_msg_RunLegTrajectoryFeedback_common,starq_interfaces_msg_RunLegTrajectoryResult_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_RunLegTrajectory_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<starq_interfaces::action::RunLegTrajectory::Goal>();
        starq_interfaces_msg_RunLegTrajectoryGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<starq_interfaces::action::RunLegTrajectory::Feedback>();
        starq_interfaces_msg_RunLegTrajectoryFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<starq_interfaces::action::RunLegTrajectory::Result>();
        starq_interfaces_msg_RunLegTrajectoryResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_starq_interfaces_RunLegTrajectory_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    starq_interfaces_msg_RunLegTrajectoryGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (starq_interfaces::action::RunLegTrajectory::Goal*)msgPtr, loader);
    }else if(type == eResult){
        starq_interfaces_msg_RunLegTrajectoryResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (starq_interfaces::action::RunLegTrajectory::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        starq_interfaces_msg_RunLegTrajectoryFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (starq_interfaces::action::RunLegTrajectory::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(starq_interfaces_msg_RunLegTrajectoryGoal_common, MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Goal>)
CLASS_LOADER_REGISTER_CLASS(starq_interfaces_msg_RunLegTrajectoryFeedback_common, MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Feedback>)
CLASS_LOADER_REGISTER_CLASS(starq_interfaces_msg_RunLegTrajectoryResult_common, MATLABROS2MsgInterface<starq_interfaces::action::RunLegTrajectory::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_RunLegTrajectory_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1