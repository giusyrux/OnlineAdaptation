# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hri_msgs/Skeleton2D.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import hri_msgs.msg
import std_msgs.msg

class Skeleton2D(genpy.Message):
  _md5sum = "efedc2dc59671380a1d9b497f0740be4"
  _type = "hri_msgs/Skeleton2D"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# This message contains a list of skeletal keypoints 
# (0, 0) is at top-left corner of image

Header header        # Header timestamp should be acquisition time of the original image

# skeletal key Points naming
# Follows OpenPose coco model convention
# https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/doc/output.md#pose-output-format-coco

uint8 NOSE = 0
uint8 NECK = 1
uint8 RIGHT_SHOULDER = 2
uint8 RIGHT_ELBOW = 3
uint8 RIGHT_WRIST = 4
uint8 LEFT_SHOULDER = 5
uint8 LEFT_ELBOW = 6
uint8 LEFT_WRIST = 7
uint8 RIGHT_HIP = 8
uint8 RIGHT_KNEE = 9
uint8 RIGHT_ANKLE = 10
uint8 LEFT_HIP = 11
uint8 LEFT_KNEE = 12
uint8 LEFT_ANKLE = 13
uint8 LEFT_EYE = 14
uint8 RIGHT_EYE = 15
uint8 LEFT_EAR = 16
uint8 RIGHT_EAR = 17


NormalizedPointOfInterest2D[] skeleton



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: hri_msgs/NormalizedPointOfInterest2D
# This contains the position of a point of interest (typically in an image)
# the coordinates are always normalized and must belong to [0.,1.].
# c is a confidence level (between 0. and 1.) associated to that POI
float32 x
float32 y
float32 c
"""
  # Pseudo-constants
  NOSE = 0
  NECK = 1
  RIGHT_SHOULDER = 2
  RIGHT_ELBOW = 3
  RIGHT_WRIST = 4
  LEFT_SHOULDER = 5
  LEFT_ELBOW = 6
  LEFT_WRIST = 7
  RIGHT_HIP = 8
  RIGHT_KNEE = 9
  RIGHT_ANKLE = 10
  LEFT_HIP = 11
  LEFT_KNEE = 12
  LEFT_ANKLE = 13
  LEFT_EYE = 14
  RIGHT_EYE = 15
  LEFT_EAR = 16
  RIGHT_EAR = 17

  __slots__ = ['header','skeleton']
  _slot_types = ['std_msgs/Header','hri_msgs/NormalizedPointOfInterest2D[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,skeleton

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Skeleton2D, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.skeleton is None:
        self.skeleton = []
    else:
      self.header = std_msgs.msg.Header()
      self.skeleton = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.skeleton)
      buff.write(_struct_I.pack(length))
      for val1 in self.skeleton:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.c))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.skeleton is None:
        self.skeleton = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.skeleton = []
      for i in range(0, length):
        val1 = hri_msgs.msg.NormalizedPointOfInterest2D()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.c,) = _get_struct_3f().unpack(str[start:end])
        self.skeleton.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.skeleton)
      buff.write(_struct_I.pack(length))
      for val1 in self.skeleton:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.c))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.skeleton is None:
        self.skeleton = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.skeleton = []
      for i in range(0, length):
        val1 = hri_msgs.msg.NormalizedPointOfInterest2D()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.c,) = _get_struct_3f().unpack(str[start:end])
        self.skeleton.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f