// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for starq_interfaces/LegConfig
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
#include "starq_interfaces/msg/leg_config.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_msg_LegConfig_common : public MATLABROS2MsgInterface<starq_interfaces::msg::LegConfig> {
  public:
    virtual ~ros2_starq_interfaces_msg_LegConfig_common(){}
    virtual void copy_from_struct(starq_interfaces::msg::LegConfig* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegConfig* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_starq_interfaces_msg_LegConfig_common::copy_from_struct(starq_interfaces::msg::LegConfig* msg, const matlab::data::Struct& arr,
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
        //kinematic_type
        const matlab::data::CharArray kinematic_type_arr = arr["kinematic_type"];
        msg->kinematic_type = kinematic_type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kinematic_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kinematic_type' is wrong type; expected a string.");
    }
    try {
        //motor_ids
        const matlab::data::TypedArray<uint8_t> motor_ids_arr = arr["motor_ids"];
        size_t nelem = motor_ids_arr.getNumberOfElements();
        	msg->motor_ids.resize(nelem);
        	std::copy(motor_ids_arr.begin(), motor_ids_arr.begin()+nelem, msg->motor_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'motor_ids' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_starq_interfaces_msg_LegConfig_common::get_arr(MDFactory_T& factory, const starq_interfaces::msg::LegConfig* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","id","kinematic_type","motor_ids"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("starq_interfaces/LegConfig");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // kinematic_type
    auto currentElement_kinematic_type = (msg + ctr)->kinematic_type;
    outArray[ctr]["kinematic_type"] = factory.createCharArray(currentElement_kinematic_type);
    // motor_ids
    auto currentElement_motor_ids = (msg + ctr)->motor_ids;
    outArray[ctr]["motor_ids"] = factory.createArray<starq_interfaces::msg::LegConfig::_motor_ids_type::const_iterator, uint8_t>({currentElement_motor_ids.size(), 1}, currentElement_motor_ids.begin(), currentElement_motor_ids.end());
    }
    return std::move(outArray);
  } 
class STARQ_INTERFACES_EXPORT ros2_starq_interfaces_LegConfig_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_starq_interfaces_LegConfig_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_starq_interfaces_LegConfig_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<starq_interfaces::msg::LegConfig,ros2_starq_interfaces_msg_LegConfig_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_starq_interfaces_LegConfig_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<starq_interfaces::msg::LegConfig,ros2_starq_interfaces_msg_LegConfig_common>>();
  }
  std::shared_ptr<void> ros2_starq_interfaces_LegConfig_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<starq_interfaces::msg::LegConfig>();
    ros2_starq_interfaces_msg_LegConfig_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_starq_interfaces_LegConfig_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_starq_interfaces_msg_LegConfig_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (starq_interfaces::msg::LegConfig*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_msg_LegConfig_common, MATLABROS2MsgInterface<starq_interfaces::msg::LegConfig>)
CLASS_LOADER_REGISTER_CLASS(ros2_starq_interfaces_LegConfig_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER