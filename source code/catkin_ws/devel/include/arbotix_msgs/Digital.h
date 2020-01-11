// Generated by gencpp from file arbotix_msgs/Digital.msg
// DO NOT EDIT!


#ifndef ARBOTIX_MSGS_MESSAGE_DIGITAL_H
#define ARBOTIX_MSGS_MESSAGE_DIGITAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace arbotix_msgs
{
template <class ContainerAllocator>
struct Digital_
{
  typedef Digital_<ContainerAllocator> Type;

  Digital_()
    : header()
    , value(0)
    , direction(0)  {
    }
  Digital_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , value(0)
    , direction(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _value_type;
  _value_type value;

   typedef uint8_t _direction_type;
  _direction_type direction;



  enum {
    LOW = 0u,
    HIGH = 255u,
    INPUT = 0u,
    OUTPUT = 255u,
  };


  typedef boost::shared_ptr< ::arbotix_msgs::Digital_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arbotix_msgs::Digital_<ContainerAllocator> const> ConstPtr;

}; // struct Digital_

typedef ::arbotix_msgs::Digital_<std::allocator<void> > Digital;

typedef boost::shared_ptr< ::arbotix_msgs::Digital > DigitalPtr;
typedef boost::shared_ptr< ::arbotix_msgs::Digital const> DigitalConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arbotix_msgs::Digital_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arbotix_msgs::Digital_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arbotix_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'arbotix_msgs': ['/home/lin/catkin_ws/src/arbotix_ros/arbotix_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::Digital_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::Digital_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::Digital_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::Digital_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::Digital_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::Digital_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arbotix_msgs::Digital_<ContainerAllocator> >
{
  static const char* value()
  {
    return "84d79480c76268c7cdf109dc588e00c4";
  }

  static const char* value(const ::arbotix_msgs::Digital_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x84d79480c76268c7ULL;
  static const uint64_t static_value2 = 0xcdf109dc588e00c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::arbotix_msgs::Digital_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arbotix_msgs/Digital";
  }

  static const char* value(const ::arbotix_msgs::Digital_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arbotix_msgs::Digital_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Reading or command to a single digital IO pin.\n\
Header header\n\
\n\
# value of pin\n\
uint8 LOW=0\n\
uint8 HIGH=255\n\
\n\
uint8 value\n\
\n\
# direction of pin\n\
uint8 INPUT=0\n\
uint8 OUTPUT=255\n\
\n\
uint8 direction\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::arbotix_msgs::Digital_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arbotix_msgs::Digital_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.value);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Digital_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arbotix_msgs::Digital_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arbotix_msgs::Digital_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
    s << indent << "direction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARBOTIX_MSGS_MESSAGE_DIGITAL_H
