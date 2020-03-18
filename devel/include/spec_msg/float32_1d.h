// Generated by gencpp from file spec_msg/float32_1d.msg
// DO NOT EDIT!


#ifndef SPEC_MSG_MESSAGE_FLOAT32_1D_H
#define SPEC_MSG_MESSAGE_FLOAT32_1D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>

namespace spec_msg
{
template <class ContainerAllocator>
struct float32_1d_
{
  typedef float32_1d_<ContainerAllocator> Type;

  float32_1d_()
    : float_1d_data()  {
    }
  float32_1d_(const ContainerAllocator& _alloc)
    : float_1d_data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::std_msgs::Float32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float32_<ContainerAllocator> >::other >  _float_1d_data_type;
  _float_1d_data_type float_1d_data;





  typedef boost::shared_ptr< ::spec_msg::float32_1d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spec_msg::float32_1d_<ContainerAllocator> const> ConstPtr;

}; // struct float32_1d_

typedef ::spec_msg::float32_1d_<std::allocator<void> > float32_1d;

typedef boost::shared_ptr< ::spec_msg::float32_1d > float32_1dPtr;
typedef boost::shared_ptr< ::spec_msg::float32_1d const> float32_1dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spec_msg::float32_1d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spec_msg::float32_1d_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spec_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'spec_msg': ['/home/aiRobots/New_May/src/Robot/Vision/PclConverter/spec_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spec_msg::float32_1d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spec_msg::float32_1d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spec_msg::float32_1d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spec_msg::float32_1d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spec_msg::float32_1d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spec_msg::float32_1d_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spec_msg::float32_1d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c407a75cd6de77ccc99d99b2a57e318";
  }

  static const char* value(const ::spec_msg::float32_1d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c407a75cd6de77cULL;
  static const uint64_t static_value2 = 0xcc99d99b2a57e318ULL;
};

template<class ContainerAllocator>
struct DataType< ::spec_msg::float32_1d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spec_msg/float32_1d";
  }

  static const char* value(const ::spec_msg::float32_1d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spec_msg::float32_1d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float32[] float_1d_data\n\
\n\
================================================================================\n\
MSG: std_msgs/Float32\n\
float32 data\n\
";
  }

  static const char* value(const ::spec_msg::float32_1d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spec_msg::float32_1d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.float_1d_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct float32_1d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spec_msg::float32_1d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spec_msg::float32_1d_<ContainerAllocator>& v)
  {
    s << indent << "float_1d_data[]" << std::endl;
    for (size_t i = 0; i < v.float_1d_data.size(); ++i)
    {
      s << indent << "  float_1d_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "    ", v.float_1d_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPEC_MSG_MESSAGE_FLOAT32_1D_H