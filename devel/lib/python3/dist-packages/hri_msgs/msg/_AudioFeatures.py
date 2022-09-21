# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hri_msgs/AudioFeatures.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class AudioFeatures(genpy.Message):
  _md5sum = "1942f4cd8b6bb147f1ccb9aded9b6535"
  _type = "hri_msgs/AudioFeatures"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message encodes the 16 audio features selected
# in the INTERSPEECH2009 challenge.
# 
# Reference: Schuller, Steidl, Batliner, The INTERSPEECH 2009 Emotion Challenge
# 
# They can be extract using the OpenSMILE toolkit with the present
# IS09_emotion.conf

float32 ZCR # zero-crossing rate from the time signal
float32 RMS # root mean square frame energy
float32 pitch # pitch frequency (normalised to 500 Hz)
float32 HNR # harmonics-to-noise ratio by autocorrelation function
float32[] MFCC # mel-frequency cepstral coefficients 1 to 12
"""
  __slots__ = ['ZCR','RMS','pitch','HNR','MFCC']
  _slot_types = ['float32','float32','float32','float32','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ZCR,RMS,pitch,HNR,MFCC

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AudioFeatures, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ZCR is None:
        self.ZCR = 0.
      if self.RMS is None:
        self.RMS = 0.
      if self.pitch is None:
        self.pitch = 0.
      if self.HNR is None:
        self.HNR = 0.
      if self.MFCC is None:
        self.MFCC = []
    else:
      self.ZCR = 0.
      self.RMS = 0.
      self.pitch = 0.
      self.HNR = 0.
      self.MFCC = []

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
      buff.write(_get_struct_4f().pack(_x.ZCR, _x.RMS, _x.pitch, _x.HNR))
      length = len(self.MFCC)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.Struct(pattern).pack(*self.MFCC))
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
      end = 0
      _x = self
      start = end
      end += 16
      (_x.ZCR, _x.RMS, _x.pitch, _x.HNR,) = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.MFCC = s.unpack(str[start:end])
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
      buff.write(_get_struct_4f().pack(_x.ZCR, _x.RMS, _x.pitch, _x.HNR))
      length = len(self.MFCC)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.MFCC.tostring())
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
      end = 0
      _x = self
      start = end
      end += 16
      (_x.ZCR, _x.RMS, _x.pitch, _x.HNR,) = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.MFCC = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
