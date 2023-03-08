// Generated by gencpp from file morai_msgs/SyncModeInfo.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_SYNCMODEINFO_H
#define MORAI_MSGS_MESSAGE_SYNCMODEINFO_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace morai_msgs
{
template <class ContainerAllocator>
struct SyncModeInfo_
{
  typedef SyncModeInfo_<ContainerAllocator> Type;

  SyncModeInfo_()
    : master_id()
    , status(false)
    , frame(0)
    , can_send_tick(false)  {
    }
  SyncModeInfo_(const ContainerAllocator& _alloc)
    : master_id(_alloc)
    , status(false)
    , frame(0)
    , can_send_tick(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _master_id_type;
  _master_id_type master_id;

   typedef uint8_t _status_type;
  _status_type status;

   typedef uint64_t _frame_type;
  _frame_type frame;

   typedef uint8_t _can_send_tick_type;
  _can_send_tick_type can_send_tick;





  typedef boost::shared_ptr< ::morai_msgs::SyncModeInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::SyncModeInfo_<ContainerAllocator> const> ConstPtr;

}; // struct SyncModeInfo_

typedef ::morai_msgs::SyncModeInfo_<std::allocator<void> > SyncModeInfo;

typedef boost::shared_ptr< ::morai_msgs::SyncModeInfo > SyncModeInfoPtr;
typedef boost::shared_ptr< ::morai_msgs::SyncModeInfo const> SyncModeInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::SyncModeInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::SyncModeInfo_<ContainerAllocator1> & lhs, const ::morai_msgs::SyncModeInfo_<ContainerAllocator2> & rhs)
{
  return lhs.master_id == rhs.master_id &&
    lhs.status == rhs.status &&
    lhs.frame == rhs.frame &&
    lhs.can_send_tick == rhs.can_send_tick;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::SyncModeInfo_<ContainerAllocator1> & lhs, const ::morai_msgs::SyncModeInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SyncModeInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SyncModeInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SyncModeInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d9bc8fdf24a57461d5bcf823494e818";
  }

  static const char* value(const ::morai_msgs::SyncModeInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d9bc8fdf24a5746ULL;
  static const uint64_t static_value2 = 0x1d5bcf823494e818ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/SyncModeInfo";
  }

  static const char* value(const ::morai_msgs::SyncModeInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string master_id\n"
"bool status\n"
"uint64 frame\n"
"\n"
"bool can_send_tick\n"
;
  }

  static const char* value(const ::morai_msgs::SyncModeInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.master_id);
      stream.next(m.status);
      stream.next(m.frame);
      stream.next(m.can_send_tick);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncModeInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::SyncModeInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::SyncModeInfo_<ContainerAllocator>& v)
  {
    s << indent << "master_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.master_id);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "frame: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.frame);
    s << indent << "can_send_tick: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_send_tick);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_SYNCMODEINFO_H
