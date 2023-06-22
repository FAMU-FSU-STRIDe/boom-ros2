// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/LegInfoArray
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
#include "starq_interfaces/msg/leg_info_array.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_LegInfoArray_common : public MATLABROS2MsgInterface<starq_interfaces::msg::LegInfoArray> {
  public:
    virtual ~ros2_starq_interfaces_msg_LegInfoArray_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::LegInfoArray* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegInfoArray* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_LegInfoArray_common::copy_from_struct(starq_interfaces::msg::LegInfoArray* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //infos
        const matlab::data::StructArray infos_arr = arr["infos"];
        for (auto _infosarr : infos_arr) {
        	starq_interfaces::msg::LegInfo _val;
        auto msgClassPtr_infos = getCommonObject<starq_interfaces::msg::LegInfo>("ros2_starq_interfaces_msg_LegInfo_common",loader);
        msgClassPtr_infos->copy_from_struct(&_val,_infosarr,loader);
        	msg->infos.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'infos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'infos' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_LegInfoArray_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegInfoArray* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","infos"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/LegInfoArray");
    // infos
    auto currentElement_infos = (msg + ctr)->infos;
    auto msgClassPtr_infos = getCommonObject<starq_interfaces::msg::LegInfo>("ros2_starq_interfaces_msg_LegInfo_common",loader);
    outArray[ctr]["infos"] = msgClassPtr_infos->get_arr(factory,&currentElement_infos[0],loader,currentElement_infos.size());
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_LegInfoArray_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_LegInfoArray_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_LegInfoArray_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::LegInfoArray,ros2_starq_interfaces_msg_LegInfoArray_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_LegInfoArray_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::LegInfoArray,ros2_starq_interfaces_msg_LegInfoArray_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_LegInfoArray_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::LegInfoArray>();
    ros2_starq_interfaces_msg_LegInfoArray_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_LegInfoArray_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_LegInfoArray_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::LegInfoArray*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_LegInfoArray_common, MATLABROS2MsgInterface<starq_interfaces::msg::LegInfoArray>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_LegInfoArray_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER