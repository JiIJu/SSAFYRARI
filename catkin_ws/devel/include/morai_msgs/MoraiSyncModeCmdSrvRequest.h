// Generated by gencpp from file morai_msgs/MoraiSyncModeCmdSrvRequest.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MORAISYNCMODECMDSRVREQUEST_H
#define MORAI_MSGS_MESSAGE_MORAISYNCMODECMDSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/SyncModeCmd.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct MoraiSyncModeCmdSrvRequest_
{
  typedef MoraiSyncModeCmdSrvRequest_<ContainerAllocator> Type;

  MoraiSyncModeCmdSrvRequest_()
    : request()  {
    }
  MoraiSyncModeCmdSrvRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::SyncModeCmd_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoraiSyncModeCmdSrvRequest_

typedef ::morai_msgs::MoraiSyncModeCmdSrvRequest_<std::allocator<void> > MoraiSyncModeCmdSrvRequest;

typedef boost::shared_ptr< ::morai_msgs::MoraiSyncModeCmdSrvRequest > MoraiSyncModeCmdSrvRequestPtr;
typedef boost::shared_ptr< ::morai_msgs::MoraiSyncModeCmdSrvRequest const> MoraiSyncModeCmdSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.request == rhs.request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d8883f3f0d61ae36bc7cccae4a13743";
  }

  static const char* value(const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d8883f3f0d61ae3ULL;
  static const uint64_t static_value2 = 0x6bc7cccae4a13743ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/MoraiSyncModeCmdSrvRequest";
  }

  static const char* value(const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SyncModeCmd request\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/SyncModeCmd\n"
"string user_id\n"
"bool start_sync_mode\n"
"uint32 time_step\n"
;
  }

  static const char* value(const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoraiSyncModeCmdSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::MoraiSyncModeCmdSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    s << std::endl;
    Printer< ::morai_msgs::SyncModeCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MORAISYNCMODECMDSRVREQUEST_H
