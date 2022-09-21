// Generated by gencpp from file hri_msgs/FacialActionUnits.msg
// DO NOT EDIT!


#ifndef HRI_MSGS_MESSAGE_FACIALACTIONUNITS_H
#define HRI_MSGS_MESSAGE_FACIALACTIONUNITS_H


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
struct FacialActionUnits_
{
  typedef FacialActionUnits_<ContainerAllocator> Type;

  FacialActionUnits_()
    : header()
    , FAU()
    , intensity()
    , confidence()  {
    }
  FacialActionUnits_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , FAU(_alloc)
    , intensity(_alloc)
    , confidence(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _FAU_type;
  _FAU_type FAU;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _intensity_type;
  _intensity_type intensity;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidence_type;
  _confidence_type confidence;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NEUTRAL_FACE)
  #undef NEUTRAL_FACE
#endif
#if defined(_WIN32) && defined(INNER_BROW_RAISER)
  #undef INNER_BROW_RAISER
#endif
#if defined(_WIN32) && defined(OUTER_BROW_RAISER)
  #undef OUTER_BROW_RAISER
#endif
#if defined(_WIN32) && defined(BROW_LOWERER)
  #undef BROW_LOWERER
#endif
#if defined(_WIN32) && defined(UPPER_LID_RAISER)
  #undef UPPER_LID_RAISER
#endif
#if defined(_WIN32) && defined(CHEEK_RAISER)
  #undef CHEEK_RAISER
#endif
#if defined(_WIN32) && defined(LID_TIGHTENER)
  #undef LID_TIGHTENER
#endif
#if defined(_WIN32) && defined(LIPS_TOWARD_EACH_OTHER)
  #undef LIPS_TOWARD_EACH_OTHER
#endif
#if defined(_WIN32) && defined(NOSE_WRINKLER)
  #undef NOSE_WRINKLER
#endif
#if defined(_WIN32) && defined(UPPER_LIP_RAISER)
  #undef UPPER_LIP_RAISER
#endif
#if defined(_WIN32) && defined(NASOLABIAL_DEEPENER)
  #undef NASOLABIAL_DEEPENER
#endif
#if defined(_WIN32) && defined(LIP_CORNER_PULLER)
  #undef LIP_CORNER_PULLER
#endif
#if defined(_WIN32) && defined(SHARP_LIP_PULLER)
  #undef SHARP_LIP_PULLER
#endif
#if defined(_WIN32) && defined(DIMPLER)
  #undef DIMPLER
#endif
#if defined(_WIN32) && defined(LIP_CORNER_DEPRESSOR)
  #undef LIP_CORNER_DEPRESSOR
#endif
#if defined(_WIN32) && defined(LOWER_LIP_DEPRESSOR)
  #undef LOWER_LIP_DEPRESSOR
#endif
#if defined(_WIN32) && defined(CHIN_RAISER)
  #undef CHIN_RAISER
#endif
#if defined(_WIN32) && defined(LIP_PUCKER)
  #undef LIP_PUCKER
#endif
#if defined(_WIN32) && defined(TONGUE_SHOW)
  #undef TONGUE_SHOW
#endif
#if defined(_WIN32) && defined(LIP_STRETCHER)
  #undef LIP_STRETCHER
#endif
#if defined(_WIN32) && defined(NECK_TIGHTENER)
  #undef NECK_TIGHTENER
#endif
#if defined(_WIN32) && defined(LIP_FUNNELER)
  #undef LIP_FUNNELER
#endif
#if defined(_WIN32) && defined(LIP_TIGHTENER)
  #undef LIP_TIGHTENER
#endif
#if defined(_WIN32) && defined(LIP_PRESSOR)
  #undef LIP_PRESSOR
#endif
#if defined(_WIN32) && defined(LIPS_PART)
  #undef LIPS_PART
#endif
#if defined(_WIN32) && defined(JAW_DROP)
  #undef JAW_DROP
#endif
#if defined(_WIN32) && defined(MOUTH_STRETCH)
  #undef MOUTH_STRETCH
#endif
#if defined(_WIN32) && defined(LIP_SUCK)
  #undef LIP_SUCK
#endif
#if defined(_WIN32) && defined(HEAD_TURN_LEFT)
  #undef HEAD_TURN_LEFT
#endif
#if defined(_WIN32) && defined(HEAD_TURN_RIGHT)
  #undef HEAD_TURN_RIGHT
#endif
#if defined(_WIN32) && defined(HEAD_UP)
  #undef HEAD_UP
#endif
#if defined(_WIN32) && defined(HEAD_DOWN)
  #undef HEAD_DOWN
#endif
#if defined(_WIN32) && defined(HEAD_TILT_LEFT)
  #undef HEAD_TILT_LEFT
#endif
#if defined(_WIN32) && defined(HEAD_TILT_RIGHT)
  #undef HEAD_TILT_RIGHT
#endif
#if defined(_WIN32) && defined(HEAD_FORWARD)
  #undef HEAD_FORWARD
#endif
#if defined(_WIN32) && defined(HEAD_BACK)
  #undef HEAD_BACK
#endif
#if defined(_WIN32) && defined(EYES_TURN_LEFT)
  #undef EYES_TURN_LEFT
#endif
#if defined(_WIN32) && defined(EYES_TURN_RIGHT)
  #undef EYES_TURN_RIGHT
#endif
#if defined(_WIN32) && defined(EYES_UP)
  #undef EYES_UP
#endif
#if defined(_WIN32) && defined(EYES_DOWN)
  #undef EYES_DOWN
#endif
#if defined(_WIN32) && defined(WALLEYE)
  #undef WALLEYE
#endif
#if defined(_WIN32) && defined(CROSS_EYE)
  #undef CROSS_EYE
#endif
#if defined(_WIN32) && defined(EYES_POSITIONED_TO_LOOK_AT_OTHER_PERSON)
  #undef EYES_POSITIONED_TO_LOOK_AT_OTHER_PERSON
#endif
#if defined(_WIN32) && defined(BROWS_AND_FOREHEAD_NOT_VISIBLE)
  #undef BROWS_AND_FOREHEAD_NOT_VISIBLE
#endif
#if defined(_WIN32) && defined(EYES_NOT_VISIBLE)
  #undef EYES_NOT_VISIBLE
#endif
#if defined(_WIN32) && defined(LOWER_FACE_NOT_VISIBLE)
  #undef LOWER_FACE_NOT_VISIBLE
#endif
#if defined(_WIN32) && defined(ENTIRE_FACE_NOT_VISIBLE)
  #undef ENTIRE_FACE_NOT_VISIBLE
#endif
#if defined(_WIN32) && defined(UNSOCIABLE)
  #undef UNSOCIABLE
#endif
#if defined(_WIN32) && defined(JAW_THRUST)
  #undef JAW_THRUST
#endif
#if defined(_WIN32) && defined(JAW_SIDEWAYS)
  #undef JAW_SIDEWAYS
#endif
#if defined(_WIN32) && defined(JAW_CLENCHER)
  #undef JAW_CLENCHER
#endif
#if defined(_WIN32) && defined(LIP_BITE)
  #undef LIP_BITE
#endif
#if defined(_WIN32) && defined(CHEEK_BLOW)
  #undef CHEEK_BLOW
#endif
#if defined(_WIN32) && defined(CHEEK_PUFF)
  #undef CHEEK_PUFF
#endif
#if defined(_WIN32) && defined(CHEEK_SUCK)
  #undef CHEEK_SUCK
#endif
#if defined(_WIN32) && defined(TONGUE_BULGE)
  #undef TONGUE_BULGE
#endif
#if defined(_WIN32) && defined(LIP_WIPE)
  #undef LIP_WIPE
#endif
#if defined(_WIN32) && defined(NOSTRIL_DILATOR)
  #undef NOSTRIL_DILATOR
#endif
#if defined(_WIN32) && defined(NOSTRIL_COMPRESSOR)
  #undef NOSTRIL_COMPRESSOR
#endif
#if defined(_WIN32) && defined(SNIFF)
  #undef SNIFF
#endif
#if defined(_WIN32) && defined(LID_DROOP)
  #undef LID_DROOP
#endif
#if defined(_WIN32) && defined(SLIT)
  #undef SLIT
#endif
#if defined(_WIN32) && defined(EYES_CLOSED)
  #undef EYES_CLOSED
#endif
#if defined(_WIN32) && defined(SQUINT)
  #undef SQUINT
#endif
#if defined(_WIN32) && defined(BLINK)
  #undef BLINK
#endif
#if defined(_WIN32) && defined(WINK)
  #undef WINK
#endif
#if defined(_WIN32) && defined(SPEECH)
  #undef SPEECH
#endif
#if defined(_WIN32) && defined(SWALLOW)
  #undef SWALLOW
#endif
#if defined(_WIN32) && defined(CHEWING)
  #undef CHEWING
#endif
#if defined(_WIN32) && defined(SHOULDER_SHRUG)
  #undef SHOULDER_SHRUG
#endif
#if defined(_WIN32) && defined(HEAD_SHAKE_BACK_AND_FORTH)
  #undef HEAD_SHAKE_BACK_AND_FORTH
#endif
#if defined(_WIN32) && defined(HEAD_NOD_UP_AND_DOWN)
  #undef HEAD_NOD_UP_AND_DOWN
#endif
#if defined(_WIN32) && defined(FLASH)
  #undef FLASH
#endif
#if defined(_WIN32) && defined(PARTIAL_FLASH)
  #undef PARTIAL_FLASH
#endif
#if defined(_WIN32) && defined(SHIVER_TREMBLE)
  #undef SHIVER_TREMBLE
#endif
#if defined(_WIN32) && defined(FAST_UP_DOWN_LOOK)
  #undef FAST_UP_DOWN_LOOK
#endif

  enum {
    NEUTRAL_FACE = 0u,
    INNER_BROW_RAISER = 1u,
    OUTER_BROW_RAISER = 2u,
    BROW_LOWERER = 4u,
    UPPER_LID_RAISER = 5u,
    CHEEK_RAISER = 6u,
    LID_TIGHTENER = 7u,
    LIPS_TOWARD_EACH_OTHER = 8u,
    NOSE_WRINKLER = 9u,
    UPPER_LIP_RAISER = 10u,
    NASOLABIAL_DEEPENER = 11u,
    LIP_CORNER_PULLER = 12u,
    SHARP_LIP_PULLER = 13u,
    DIMPLER = 14u,
    LIP_CORNER_DEPRESSOR = 15u,
    LOWER_LIP_DEPRESSOR = 16u,
    CHIN_RAISER = 17u,
    LIP_PUCKER = 18u,
    TONGUE_SHOW = 19u,
    LIP_STRETCHER = 20u,
    NECK_TIGHTENER = 21u,
    LIP_FUNNELER = 22u,
    LIP_TIGHTENER = 23u,
    LIP_PRESSOR = 24u,
    LIPS_PART = 25u,
    JAW_DROP = 26u,
    MOUTH_STRETCH = 27u,
    LIP_SUCK = 28u,
    HEAD_TURN_LEFT = 51u,
    HEAD_TURN_RIGHT = 52u,
    HEAD_UP = 53u,
    HEAD_DOWN = 54u,
    HEAD_TILT_LEFT = 55u,
    HEAD_TILT_RIGHT = 56u,
    HEAD_FORWARD = 57u,
    HEAD_BACK = 58u,
    EYES_TURN_LEFT = 61u,
    EYES_TURN_RIGHT = 62u,
    EYES_UP = 63u,
    EYES_DOWN = 64u,
    WALLEYE = 65u,
    CROSS_EYE = 66u,
    EYES_POSITIONED_TO_LOOK_AT_OTHER_PERSON = 69u,
    BROWS_AND_FOREHEAD_NOT_VISIBLE = 70u,
    EYES_NOT_VISIBLE = 71u,
    LOWER_FACE_NOT_VISIBLE = 72u,
    ENTIRE_FACE_NOT_VISIBLE = 73u,
    UNSOCIABLE = 74u,
    JAW_THRUST = 29u,
    JAW_SIDEWAYS = 30u,
    JAW_CLENCHER = 31u,
    LIP_BITE = 32u,
    CHEEK_BLOW = 33u,
    CHEEK_PUFF = 34u,
    CHEEK_SUCK = 35u,
    TONGUE_BULGE = 36u,
    LIP_WIPE = 37u,
    NOSTRIL_DILATOR = 38u,
    NOSTRIL_COMPRESSOR = 39u,
    SNIFF = 40u,
    LID_DROOP = 41u,
    SLIT = 42u,
    EYES_CLOSED = 43u,
    SQUINT = 44u,
    BLINK = 45u,
    WINK = 46u,
    SPEECH = 50u,
    SWALLOW = 80u,
    CHEWING = 81u,
    SHOULDER_SHRUG = 82u,
    HEAD_SHAKE_BACK_AND_FORTH = 84u,
    HEAD_NOD_UP_AND_DOWN = 85u,
    FLASH = 91u,
    PARTIAL_FLASH = 92u,
    SHIVER_TREMBLE = 97u,
    FAST_UP_DOWN_LOOK = 98u,
  };


  typedef boost::shared_ptr< ::hri_msgs::FacialActionUnits_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hri_msgs::FacialActionUnits_<ContainerAllocator> const> ConstPtr;

}; // struct FacialActionUnits_

typedef ::hri_msgs::FacialActionUnits_<std::allocator<void> > FacialActionUnits;

typedef boost::shared_ptr< ::hri_msgs::FacialActionUnits > FacialActionUnitsPtr;
typedef boost::shared_ptr< ::hri_msgs::FacialActionUnits const> FacialActionUnitsConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hri_msgs::FacialActionUnits_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hri_msgs::FacialActionUnits_<ContainerAllocator1> & lhs, const ::hri_msgs::FacialActionUnits_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.FAU == rhs.FAU &&
    lhs.intensity == rhs.intensity &&
    lhs.confidence == rhs.confidence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hri_msgs::FacialActionUnits_<ContainerAllocator1> & lhs, const ::hri_msgs::FacialActionUnits_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hri_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hri_msgs::FacialActionUnits_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hri_msgs::FacialActionUnits_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hri_msgs::FacialActionUnits_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7872c889685bdf665183ddf7f24a1dd9";
  }

  static const char* value(const ::hri_msgs::FacialActionUnits_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7872c889685bdf66ULL;
  static const uint64_t static_value2 = 0x5183ddf7f24a1dd9ULL;
};

template<class ContainerAllocator>
struct DataType< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hri_msgs/FacialActionUnits";
  }

  static const char* value(const ::hri_msgs::FacialActionUnits_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message the intensity of each actions unit (AU), with their confidence, for a specific face.\n"
"#\n"
"# It follows the naming convention of the  Facial Action Coding System (FACS) developed by Ekman.\n"
"\n"
"Header header\n"
"\n"
"# List taken from https://en.wikipedia.org/wiki/Facial_Action_Coding_System\n"
"\n"
"# Main codes\n"
"uint8 NEUTRAL_FACE=0  # Neutral face \n"
"uint8 INNER_BROW_RAISER=1  # Inner brow raiser \n"
"uint8 OUTER_BROW_RAISER=2  # Outer brow raiser \n"
"uint8 BROW_LOWERER=4  # Brow lowerer \n"
"uint8 UPPER_LID_RAISER=5  # Upper lid raiser \n"
"uint8 CHEEK_RAISER=6  # Cheek raiser \n"
"uint8 LID_TIGHTENER=7  # Lid tightener \n"
"uint8 LIPS_TOWARD_EACH_OTHER=8  # Lips toward each other \n"
"uint8 NOSE_WRINKLER=9  # Nose wrinkler \n"
"uint8 UPPER_LIP_RAISER=10  # Upper lip raiser \n"
"uint8 NASOLABIAL_DEEPENER=11  # Nasolabial deepener \n"
"uint8 LIP_CORNER_PULLER=12  # Lip corner puller \n"
"uint8 SHARP_LIP_PULLER=13  # Sharp lip puller \n"
"uint8 DIMPLER=14  # Dimpler \n"
"uint8 LIP_CORNER_DEPRESSOR=15  # Lip corner depressor \n"
"uint8 LOWER_LIP_DEPRESSOR=16  # Lower lip depressor \n"
"uint8 CHIN_RAISER=17  # Chin raiser \n"
"uint8 LIP_PUCKER=18  # Lip pucker \n"
"uint8 TONGUE_SHOW=19  # Tongue show \n"
"uint8 LIP_STRETCHER=20  # Lip stretcher \n"
"uint8 NECK_TIGHTENER=21  # Neck tightener \n"
"uint8 LIP_FUNNELER=22  # Lip funneler \n"
"uint8 LIP_TIGHTENER=23  # Lip tightener \n"
"uint8 LIP_PRESSOR=24  # Lip pressor \n"
"uint8 LIPS_PART=25  # Lips part \n"
"uint8 JAW_DROP=26  # Jaw drop \n"
"uint8 MOUTH_STRETCH=27  # Mouth stretch \n"
"uint8 LIP_SUCK=28  # Lip suck \n"
"\n"
"# Head movement codes\n"
"uint8 HEAD_TURN_LEFT=51  # Head turn left\n"
"uint8 HEAD_TURN_RIGHT=52  # Head turn right\n"
"uint8 HEAD_UP=53  # Head up\n"
"uint8 HEAD_DOWN=54  # Head down\n"
"uint8 HEAD_TILT_LEFT=55  # Head tilt left\n"
"uint8 HEAD_TILT_RIGHT=56  # Head tilt right\n"
"uint8 HEAD_FORWARD=57  # Head forward\n"
"uint8 HEAD_BACK=58  # Head back\n"
"\n"
"# Eye movement codes\n"
"uint8 EYES_TURN_LEFT=61  # Eyes turn left\n"
"uint8 EYES_TURN_RIGHT=62  # Eyes turn right\n"
"uint8 EYES_UP=63  # Eyes up\n"
"uint8 EYES_DOWN=64  # Eyes down\n"
"uint8 WALLEYE=65  # Walleye\n"
"uint8 CROSS_EYE=66  # Cross-eye\n"
"uint8 EYES_POSITIONED_TO_LOOK_AT_OTHER_PERSON=69  # Eyes positioned to look at other person : The 4, 5, or 7, alone or in combination, occurs while the eye position is fixed on the other person in the conversation.\n"
"\n"
"# Visibility codes\n"
"uint8 BROWS_AND_FOREHEAD_NOT_VISIBLE=70  # Brows and forehead not visible\n"
"uint8 EYES_NOT_VISIBLE=71  # Eyes not visible\n"
"uint8 LOWER_FACE_NOT_VISIBLE=72  # Lower face not visible\n"
"uint8 ENTIRE_FACE_NOT_VISIBLE=73  # Entire face not visible\n"
"uint8 UNSOCIABLE=74  # Unsociable\n"
"\n"
"# Gross behavior codes\n"
"uint8 JAW_THRUST=29  # Jaw thrust\n"
"uint8 JAW_SIDEWAYS=30  # Jaw sideways\n"
"uint8 JAW_CLENCHER=31  # Jaw clencher : masseter\n"
"uint8 LIP_BITE=32  # [Lip] bite\n"
"uint8 CHEEK_BLOW=33  # [Cheek] blow\n"
"uint8 CHEEK_PUFF=34  # [Cheek] puff\n"
"uint8 CHEEK_SUCK=35  # [Cheek] suck\n"
"uint8 TONGUE_BULGE=36  # [Tongue] bulge\n"
"uint8 LIP_WIPE=37  # Lip wipe\n"
"uint8 NOSTRIL_DILATOR=38  # Nostril dilator : nasalis (pars alaris)\n"
"uint8 NOSTRIL_COMPRESSOR=39  # Nostril compressor : nasalis (pars transversa) and depressor septi nasi\n"
"uint8 SNIFF=40  # Sniff\n"
"uint8 LID_DROOP=41  # Lid droop : Levator palpebrae superioris (relaxation)\n"
"uint8 SLIT=42  # Slit : Orbicularis oculi muscle\n"
"uint8 EYES_CLOSED=43  # Eyes closed : Relaxation of Levator palpebrae superioris\n"
"uint8 SQUINT=44  # Squint : Corrugator supercilii and orbicularis oculi muscle\n"
"uint8 BLINK=45  # Blink : Relaxation of Levator palpebrae superioris; contraction of orbicularis oculi (pars palpebralis)\n"
"uint8 WINK=46  # Wink : orbicularis oculi\n"
"uint8 SPEECH=50  # Speech\n"
"uint8 SWALLOW=80  # Swallow\n"
"uint8 CHEWING=81  # Chewing\n"
"uint8 SHOULDER_SHRUG=82  # Shoulder shrug\n"
"uint8 HEAD_SHAKE_BACK_AND_FORTH=84  # Head shake back and forth\n"
"uint8 HEAD_NOD_UP_AND_DOWN=85  # Head nod up and down\n"
"uint8 FLASH=91  # Flash\n"
"uint8 PARTIAL_FLASH=92  # Partial flash\n"
"uint8 SHIVER_TREMBLE=97  # Shiver/tremble\n"
"uint8 FAST_UP_DOWN_LOOK=98  # Fast up-down look\n"
"\n"
"float32[] FAU\n"
"float32[] intensity # an array of 99 floats, one per AU. Use the constant defined above to access one specific AU.\n"
"float32[] confidence # an array of 99 floats, one per AU. Use the constant defined above to access one specific AU.\n"
"\n"
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

  static const char* value(const ::hri_msgs::FacialActionUnits_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.FAU);
      stream.next(m.intensity);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FacialActionUnits_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hri_msgs::FacialActionUnits_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hri_msgs::FacialActionUnits_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "FAU[]" << std::endl;
    for (size_t i = 0; i < v.FAU.size(); ++i)
    {
      s << indent << "  FAU[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.FAU[i]);
    }
    s << indent << "intensity[]" << std::endl;
    for (size_t i = 0; i < v.intensity.size(); ++i)
    {
      s << indent << "  intensity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.intensity[i]);
    }
    s << indent << "confidence[]" << std::endl;
    for (size_t i = 0; i < v.confidence.size(); ++i)
    {
      s << indent << "  confidence[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRI_MSGS_MESSAGE_FACIALACTIONUNITS_H