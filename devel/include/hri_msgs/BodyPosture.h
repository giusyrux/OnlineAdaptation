// Generated by gencpp from file hri_msgs/BodyPosture.msg
// DO NOT EDIT!


#ifndef HRI_MSGS_MESSAGE_BODYPOSTURE_H
#define HRI_MSGS_MESSAGE_BODYPOSTURE_H


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
struct BodyPosture_
{
  typedef BodyPosture_<ContainerAllocator> Type;

  BodyPosture_()
    : header()
    , posture(0)  {
    }
  BodyPosture_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , posture(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _posture_type;
  _posture_type posture;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(STANDING)
  #undef STANDING
#endif
#if defined(_WIN32) && defined(SITTING)
  #undef SITTING
#endif
#if defined(_WIN32) && defined(CROUCHING)
  #undef CROUCHING
#endif
#if defined(_WIN32) && defined(LAYING)
  #undef LAYING
#endif
#if defined(_WIN32) && defined(OTHER)
  #undef OTHER
#endif

  enum {
    STANDING = 1u,
    SITTING = 2u,
    CROUCHING = 3u,
    LAYING = 4u,
    OTHER = 0u,
  };


  typedef boost::shared_ptr< ::hri_msgs::BodyPosture_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hri_msgs::BodyPosture_<ContainerAllocator> const> ConstPtr;

}; // struct BodyPosture_

typedef ::hri_msgs::BodyPosture_<std::allocator<void> > BodyPosture;

typedef boost::shared_ptr< ::hri_msgs::BodyPosture > BodyPosturePtr;
typedef boost::shared_ptr< ::hri_msgs::BodyPosture const> BodyPostureConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hri_msgs::BodyPosture_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hri_msgs::BodyPosture_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hri_msgs::BodyPosture_<ContainerAllocator1> & lhs, const ::hri_msgs::BodyPosture_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.posture == rhs.posture;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hri_msgs::BodyPosture_<ContainerAllocator1> & lhs, const ::hri_msgs::BodyPosture_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hri_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::BodyPosture_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::BodyPosture_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::BodyPosture_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::BodyPosture_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::BodyPosture_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::BodyPosture_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hri_msgs::BodyPosture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52f95070a71954a985e0ab92dd4d4eb9";
  }

  static const char* value(const ::hri_msgs::BodyPosture_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52f95070a71954a9ULL;
  static const uint64_t static_value2 = 0x85e0ab92dd4d4eb9ULL;
};

template<class ContainerAllocator>
struct DataType< ::hri_msgs::BodyPosture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hri_msgs/BodyPosture";
  }

  static const char* value(const ::hri_msgs::BodyPosture_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hri_msgs::BodyPosture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Describes the general body posture in a symbolic manner.\n"
"Header header\n"
"\n"
"uint8 STANDING = 1\n"
"uint8 SITTING = 2\n"
"uint8 CROUCHING = 3\n"
"uint8 LAYING = 4\n"
"\n"
"uint8 OTHER = 0\n"
"\n"
"uint8 posture # one of the above constants\n"
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

  static const char* value(const ::hri_msgs::BodyPosture_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hri_msgs::BodyPosture_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.posture);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BodyPosture_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hri_msgs::BodyPosture_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hri_msgs::BodyPosture_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "posture: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.posture);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRI_MSGS_MESSAGE_BODYPOSTURE_H
