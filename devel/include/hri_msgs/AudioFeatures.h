// Generated by gencpp from file hri_msgs/AudioFeatures.msg
// DO NOT EDIT!


#ifndef HRI_MSGS_MESSAGE_AUDIOFEATURES_H
#define HRI_MSGS_MESSAGE_AUDIOFEATURES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hri_msgs
{
template <class ContainerAllocator>
struct AudioFeatures_
{
  typedef AudioFeatures_<ContainerAllocator> Type;

  AudioFeatures_()
    : ZCR(0.0)
    , RMS(0.0)
    , pitch(0.0)
    , HNR(0.0)
    , MFCC()  {
    }
  AudioFeatures_(const ContainerAllocator& _alloc)
    : ZCR(0.0)
    , RMS(0.0)
    , pitch(0.0)
    , HNR(0.0)
    , MFCC(_alloc)  {
  (void)_alloc;
    }



   typedef float _ZCR_type;
  _ZCR_type ZCR;

   typedef float _RMS_type;
  _RMS_type RMS;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _HNR_type;
  _HNR_type HNR;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _MFCC_type;
  _MFCC_type MFCC;





  typedef boost::shared_ptr< ::hri_msgs::AudioFeatures_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hri_msgs::AudioFeatures_<ContainerAllocator> const> ConstPtr;

}; // struct AudioFeatures_

typedef ::hri_msgs::AudioFeatures_<std::allocator<void> > AudioFeatures;

typedef boost::shared_ptr< ::hri_msgs::AudioFeatures > AudioFeaturesPtr;
typedef boost::shared_ptr< ::hri_msgs::AudioFeatures const> AudioFeaturesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hri_msgs::AudioFeatures_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hri_msgs::AudioFeatures_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hri_msgs::AudioFeatures_<ContainerAllocator1> & lhs, const ::hri_msgs::AudioFeatures_<ContainerAllocator2> & rhs)
{
  return lhs.ZCR == rhs.ZCR &&
    lhs.RMS == rhs.RMS &&
    lhs.pitch == rhs.pitch &&
    lhs.HNR == rhs.HNR &&
    lhs.MFCC == rhs.MFCC;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hri_msgs::AudioFeatures_<ContainerAllocator1> & lhs, const ::hri_msgs::AudioFeatures_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hri_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::AudioFeatures_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::AudioFeatures_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::AudioFeatures_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1942f4cd8b6bb147f1ccb9aded9b6535";
  }

  static const char* value(const ::hri_msgs::AudioFeatures_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1942f4cd8b6bb147ULL;
  static const uint64_t static_value2 = 0xf1ccb9aded9b6535ULL;
};

template<class ContainerAllocator>
struct DataType< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hri_msgs/AudioFeatures";
  }

  static const char* value(const ::hri_msgs::AudioFeatures_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message encodes the 16 audio features selected\n"
"# in the INTERSPEECH2009 challenge.\n"
"# \n"
"# Reference: Schuller, Steidl, Batliner, The INTERSPEECH 2009 Emotion Challenge\n"
"# \n"
"# They can be extract using the OpenSMILE toolkit with the present\n"
"# IS09_emotion.conf\n"
"\n"
"float32 ZCR # zero-crossing rate from the time signal\n"
"float32 RMS # root mean square frame energy\n"
"float32 pitch # pitch frequency (normalised to 500 Hz)\n"
"float32 HNR # harmonics-to-noise ratio by autocorrelation function\n"
"float32[] MFCC # mel-frequency cepstral coefficients 1 to 12\n"
;
  }

  static const char* value(const ::hri_msgs::AudioFeatures_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ZCR);
      stream.next(m.RMS);
      stream.next(m.pitch);
      stream.next(m.HNR);
      stream.next(m.MFCC);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AudioFeatures_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hri_msgs::AudioFeatures_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hri_msgs::AudioFeatures_<ContainerAllocator>& v)
  {
    s << indent << "ZCR: ";
    Printer<float>::stream(s, indent + "  ", v.ZCR);
    s << indent << "RMS: ";
    Printer<float>::stream(s, indent + "  ", v.RMS);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "HNR: ";
    Printer<float>::stream(s, indent + "  ", v.HNR);
    s << indent << "MFCC[]" << std::endl;
    for (size_t i = 0; i < v.MFCC.size(); ++i)
    {
      s << indent << "  MFCC[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.MFCC[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRI_MSGS_MESSAGE_AUDIOFEATURES_H