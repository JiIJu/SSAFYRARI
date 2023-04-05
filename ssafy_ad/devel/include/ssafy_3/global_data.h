// Generated by gencpp from file ssafy_3/global_data.msg
// DO NOT EDIT!


#ifndef SSAFY_3_MESSAGE_GLOBAL_DATA_H
#define SSAFY_3_MESSAGE_GLOBAL_DATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ssafy_3
{
template <class ContainerAllocator>
struct global_data_
{
  typedef global_data_<ContainerAllocator> Type;

  global_data_()
    : nodes_idx()
    , links_idx()  {
    }
  global_data_(const ContainerAllocator& _alloc)
    : nodes_idx(_alloc)
    , links_idx(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _nodes_idx_type;
  _nodes_idx_type nodes_idx;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _links_idx_type;
  _links_idx_type links_idx;





  typedef boost::shared_ptr< ::ssafy_3::global_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ssafy_3::global_data_<ContainerAllocator> const> ConstPtr;

}; // struct global_data_

typedef ::ssafy_3::global_data_<std::allocator<void> > global_data;

typedef boost::shared_ptr< ::ssafy_3::global_data > global_dataPtr;
typedef boost::shared_ptr< ::ssafy_3::global_data const> global_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ssafy_3::global_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ssafy_3::global_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ssafy_3::global_data_<ContainerAllocator1> & lhs, const ::ssafy_3::global_data_<ContainerAllocator2> & rhs)
{
  return lhs.nodes_idx == rhs.nodes_idx &&
    lhs.links_idx == rhs.links_idx;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ssafy_3::global_data_<ContainerAllocator1> & lhs, const ::ssafy_3::global_data_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ssafy_3

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ssafy_3::global_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ssafy_3::global_data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ssafy_3::global_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ssafy_3::global_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ssafy_3::global_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ssafy_3::global_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ssafy_3::global_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02d022257e750283e1f48933d4a8d19c";
  }

  static const char* value(const ::ssafy_3::global_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02d022257e750283ULL;
  static const uint64_t static_value2 = 0xe1f48933d4a8d19cULL;
};

template<class ContainerAllocator>
struct DataType< ::ssafy_3::global_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ssafy_3/global_data";
  }

  static const char* value(const ::ssafy_3::global_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ssafy_3::global_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] nodes_idx\n"
"string[] links_idx\n"
;
  }

  static const char* value(const ::ssafy_3::global_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ssafy_3::global_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodes_idx);
      stream.next(m.links_idx);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct global_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ssafy_3::global_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ssafy_3::global_data_<ContainerAllocator>& v)
  {
    s << indent << "nodes_idx[]" << std::endl;
    for (size_t i = 0; i < v.nodes_idx.size(); ++i)
    {
      s << indent << "  nodes_idx[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.nodes_idx[i]);
    }
    s << indent << "links_idx[]" << std::endl;
    for (size_t i = 0; i < v.links_idx.size(); ++i)
    {
      s << indent << "  links_idx[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.links_idx[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SSAFY_3_MESSAGE_GLOBAL_DATA_H
