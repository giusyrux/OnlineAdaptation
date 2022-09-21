// Generated by gencpp from file hri_msgs/Gaze.msg
// DO NOT EDIT!


#ifndef HRI_MSGS_MESSAGE_GAZE_H
#define HRI_MSGS_MESSAGE_GAZE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace hri_msgs
{
template <class ContainerAllocator>
struct Gaze_
{
  typedef Gaze_<ContainerAllocator> Type;

  Gaze_()
    : header()
    , sender()
    , receiver()  {
    }
  Gaze_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sender(_alloc)
    , receiver(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _receiver_type;
  _receiver_type receiver;





  typedef boost::shared_ptr< ::hri_msgs::Gaze_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hri_msgs::Gaze_<ContainerAllocator> const> ConstPtr;

}; // struct Gaze_

typedef ::hri_msgs::Gaze_<std::allocator<void> > Gaze;

typedef boost::shared_ptr< ::hri_msgs::Gaze > GazePtr;
typedef boost::shared_ptr< ::hri_msgs::Gaze const> GazeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hri_msgs::Gaze_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hri_msgs::Gaze_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hri_msgs::Gaze_<ContainerAllocator1> & lhs, const ::hri_msgs::Gaze_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sender == rhs.sender &&
    lhs.receiver == rhs.receiver;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hri_msgs::Gaze_<ContainerAllocator1> & lhs, const ::hri_msgs::Gaze_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hri_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::Gaze_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::Gaze_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::Gaze_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::Gaze_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::Gaze_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::Gaze_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hri_msgs::Gaze_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1408dc110169ebd2a0cd704f3af52beb";
  }

  static const char* value(const ::hri_msgs::Gaze_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1408dc110169ebd2ULL;
  static const uint64_t static_value2 = 0xa0cd704f3af52bebULL;
};

template<class ContainerAllocator>
struct DataType< ::hri_msgs::Gaze_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hri_msgs/Gaze";
  }

  static const char* value(const ::hri_msgs::Gaze_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hri_msgs::Gaze_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Represents the gaze direction from a particular person (sender ID) to the\n"
"# person that is being gazed to (receiver ID).\n"
"#\n"
"# If the sender or receiver IDs are empty, it means that the gaze respectively\n"
"# originates or is targeted to the robot itself.\n"
"Header header\n"
"\n"
"string sender\n"
"string receiver\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::hri_msgs::Gaze_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hri_msgs::Gaze_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sender);
      stream.next(m.receiver);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gaze_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hri_msgs::Gaze_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hri_msgs::Gaze_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "receiver: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.receiver);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRI_MSGS_MESSAGE_GAZE_H
