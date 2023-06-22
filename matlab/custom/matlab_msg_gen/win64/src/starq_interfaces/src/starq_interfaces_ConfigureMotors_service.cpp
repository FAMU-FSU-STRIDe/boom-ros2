// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/ConfigureMotorsRequest
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
#include "starq_interfaces/srv/configure_motors.hpp"
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
#include "ROS2ServiceTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_ConfigureMotorsRequest_common : public MATLABROS2MsgInterface<starq_interfaces::srv::ConfigureMotors::Request> {
  public:
    virtual ~ros2_starq_interfaces_msg_ConfigureMotorsRequest_common(){}
    virtual void copy_from_struct(starq_interfaces::srv::ConfigureMotors::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::srv::ConfigureMotors::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_ConfigureMotorsRequest_common::copy_from_struct(starq_interfaces::srv::ConfigureMotors::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //configs
        const matlab::data::StructArray configs_arr = arr["configs"];
        for (auto _configsarr : configs_arr) {
        	starq_interfaces::msg::ODriveConfig _val;
        auto msgClassPtr_configs = getCommonObject<starq_interfaces::msg::ODriveConfig>("ros2_starq_interfaces_msg_ODriveConfig_common",loader);
        msgClassPtr_configs->copy_from_struct(&_val,_configsarr,loader);
        	msg->configs.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'configs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'configs' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_ConfigureMotorsRequest_common::get_arr(MDFactory_T& factory, const starq_interfaces::srv::ConfigureMotors::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","configs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/ConfigureMotorsRequest");
    // configs
    auto currentElement_configs = (msg + ctr)->configs;
    auto msgClassPtr_configs = getCommonObject<starq_interfaces::msg::ODriveConfig>("ros2_starq_interfaces_msg_ODriveConfig_common",loader);
    outArray[ctr]["configs"] = msgClassPtr_configs->get_arr(factory,&currentElement_configs[0],loader,currentElement_configs.size());
    }
    return std::move(outArray);
  }
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_ConfigureMotorsResponse_common : public MATLABROS2MsgInterface<starq_interfaces::srv::ConfigureMotors::Response> {
  public:
    virtual ~ros2_starq_interfaces_msg_ConfigureMotorsResponse_common(){}
    virtual void copy_from_struct(starq_interfaces::srv::ConfigureMotors::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::srv::ConfigureMotors::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_ConfigureMotorsResponse_common::copy_from_struct(starq_interfaces::srv::ConfigureMotors::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_ConfigureMotorsResponse_common::get_arr(MDFactory_T& factory, const starq_interfaces::srv::ConfigureMotors::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/ConfigureMotorsResponse");
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_ConfigureMotors_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_ConfigureMotors_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_ConfigureMotors_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<starq_interfaces::srv::ConfigureMotors::Request,ros2_starq_interfaces_msg_ConfigureMotorsRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<starq_interfaces::srv::ConfigureMotors::Response,ros2_starq_interfaces_msg_ConfigureMotorsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_starq_interfaces_ConfigureMotors_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<starq_interfaces::srv::ConfigureMotors::Request,ros2_starq_interfaces_msg_ConfigureMotorsRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<starq_interfaces::srv::ConfigureMotors::Response,ros2_starq_interfaces_msg_ConfigureMotorsResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_starq_interfaces_ConfigureMotors_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<starq_interfaces::srv::ConfigureMotors::Request>();
        ros2_starq_interfaces_msg_ConfigureMotorsRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<starq_interfaces::srv::ConfigureMotors::Response>();
        ros2_starq_interfaces_msg_ConfigureMotorsResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_starq_interfaces_ConfigureMotors_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<starq_interfaces::srv::ConfigureMotors,starq_interfaces::srv::ConfigureMotors::Request,starq_interfaces::srv::ConfigureMotors::Response,ros2_starq_interfaces_msg_ConfigureMotorsRequest_common,ros2_starq_interfaces_msg_ConfigureMotorsResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_starq_interfaces_ConfigureMotors_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<starq_interfaces::srv::ConfigureMotors,starq_interfaces::srv::ConfigureMotors::Request,starq_interfaces::srv::ConfigureMotors::Response,ros2_starq_interfaces_msg_ConfigureMotorsRequest_common,ros2_starq_interfaces_msg_ConfigureMotorsResponse_common,rclcpp::Client<starq_interfaces::srv::ConfigureMotors>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_starq_interfaces_ConfigureMotors_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_starq_interfaces_msg_ConfigureMotorsRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (starq_interfaces::srv::ConfigureMotors::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_starq_interfaces_msg_ConfigureMotorsResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (starq_interfaces::srv::ConfigureMotors::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_ConfigureMotorsRequest_common, MATLABROS2MsgInterface<starq_interfaces::srv::ConfigureMotors::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_ConfigureMotorsResponse_common, MATLABROS2MsgInterface<starq_interfaces::srv::ConfigureMotors::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_ConfigureMotors_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
