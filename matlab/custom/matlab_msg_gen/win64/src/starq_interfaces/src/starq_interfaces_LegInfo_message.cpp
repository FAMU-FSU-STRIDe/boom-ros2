// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/LegInfo
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
#include "starq_interfaces/msg/leg_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_LegInfo_common : public MATLABROS2MsgInterface<starq_interfaces::msg::LegInfo> {
  public:
    virtual ~ros2_starq_interfaces_msg_LegInfo_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::LegInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_LegInfo_common::copy_from_struct(starq_interfaces::msg::LegInfo* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //pos_estimate
        const matlab::data::TypedArray<float> pos_estimate_arr = arr["pos_estimate"];
        size_t nelem = pos_estimate_arr.getNumberOfElements();
        	msg->pos_estimate.resize(nelem);
        	std::copy(pos_estimate_arr.begin(), pos_estimate_arr.begin()+nelem, msg->pos_estimate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_estimate' is wrong type; expected a single.");
    }
    try {
        //vel_estimate
        const matlab::data::TypedArray<float> vel_estimate_arr = arr["vel_estimate"];
        size_t nelem = vel_estimate_arr.getNumberOfElements();
        	msg->vel_estimate.resize(nelem);
        	std::copy(vel_estimate_arr.begin(), vel_estimate_arr.begin()+nelem, msg->vel_estimate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_estimate' is wrong type; expected a single.");
    }
    try {
        //acc_estimate
        const matlab::data::TypedArray<float> acc_estimate_arr = arr["acc_estimate"];
        size_t nelem = acc_estimate_arr.getNumberOfElements();
        	msg->acc_estimate.resize(nelem);
        	std::copy(acc_estimate_arr.begin(), acc_estimate_arr.begin()+nelem, msg->acc_estimate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acc_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acc_estimate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_LegInfo_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","pos_estimate","vel_estimate","acc_estimate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/LegInfo");
    // pos_estimate
    auto currentElement_pos_estimate = (msg + ctr)->pos_estimate;
    outArray[ctr]["pos_estimate"] = factory.createArray<starq_interfaces::msg::LegInfo::_pos_estimate_type::const_iterator, float>({currentElement_pos_estimate.size(), 1}, currentElement_pos_estimate.begin(), currentElement_pos_estimate.end());
    // vel_estimate
    auto currentElement_vel_estimate = (msg + ctr)->vel_estimate;
    outArray[ctr]["vel_estimate"] = factory.createArray<starq_interfaces::msg::LegInfo::_vel_estimate_type::const_iterator, float>({currentElement_vel_estimate.size(), 1}, currentElement_vel_estimate.begin(), currentElement_vel_estimate.end());
    // acc_estimate
    auto currentElement_acc_estimate = (msg + ctr)->acc_estimate;
    outArray[ctr]["acc_estimate"] = factory.createArray<starq_interfaces::msg::LegInfo::_acc_estimate_type::const_iterator, float>({currentElement_acc_estimate.size(), 1}, currentElement_acc_estimate.begin(), currentElement_acc_estimate.end());
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_LegInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_LegInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_LegInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::LegInfo,ros2_starq_interfaces_msg_LegInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_LegInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::LegInfo,ros2_starq_interfaces_msg_LegInfo_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_LegInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::LegInfo>();
    ros2_starq_interfaces_msg_LegInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_LegInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_LegInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::LegInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_LegInfo_common, MATLABROS2MsgInterface<starq_interfaces::msg::LegInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_LegInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER