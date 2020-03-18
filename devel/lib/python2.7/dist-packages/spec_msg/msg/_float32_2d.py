# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spec_msg/float32_2d.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import spec_msg.msg
import std_msgs.msg

class float32_2d(genpy.Message):
  _md5sum = "8728e6595d8bccf512b6a16e3593b50f"
  _type = "spec_msg/float32_2d"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32_1d[] float32_2d_data

================================================================================
MSG: spec_msg/float32_1d
std_msgs/Float32[] float_1d_data

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['float32_2d_data']
  _slot_types = ['spec_msg/float32_1d[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       float32_2d_data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(float32_2d, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.float32_2d_data is None:
        self.float32_2d_data = []
    else:
      self.float32_2d_data = []

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
      length = len(self.float32_2d_data)
      buff.write(_struct_I.pack(length))
      for val1 in self.float32_2d_data:
        length = len(val1.float_1d_data)
        buff.write(_struct_I.pack(length))
        for val2 in val1.float_1d_data:
          buff.write(_get_struct_f().pack(val2.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.float32_2d_data is None:
        self.float32_2d_data = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.float32_2d_data = []
      for i in range(0, length):
        val1 = spec_msg.msg.float32_1d()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.float_1d_data = []
        for i in range(0, length):
          val2 = std_msgs.msg.Float32()
          start = end
          end += 4
          (val2.data,) = _get_struct_f().unpack(str[start:end])
          val1.float_1d_data.append(val2)
        self.float32_2d_data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.float32_2d_data)
      buff.write(_struct_I.pack(length))
      for val1 in self.float32_2d_data:
        length = len(val1.float_1d_data)
        buff.write(_struct_I.pack(length))
        for val2 in val1.float_1d_data:
          buff.write(_get_struct_f().pack(val2.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.float32_2d_data is None:
        self.float32_2d_data = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.float32_2d_data = []
      for i in range(0, length):
        val1 = spec_msg.msg.float32_1d()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.float_1d_data = []
        for i in range(0, length):
          val2 = std_msgs.msg.Float32()
          start = end
          end += 4
          (val2.data,) = _get_struct_f().unpack(str[start:end])
          val1.float_1d_data.append(val2)
        self.float32_2d_data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f