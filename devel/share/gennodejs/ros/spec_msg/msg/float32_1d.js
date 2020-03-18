// Auto-generated. Do not edit!

// (in-package spec_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class float32_1d {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.float_1d_data = null;
    }
    else {
      if (initObj.hasOwnProperty('float_1d_data')) {
        this.float_1d_data = initObj.float_1d_data
      }
      else {
        this.float_1d_data = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type float32_1d
    // Serialize message field [float_1d_data]
    // Serialize the length for message field [float_1d_data]
    bufferOffset = _serializer.uint32(obj.float_1d_data.length, buffer, bufferOffset);
    obj.float_1d_data.forEach((val) => {
      bufferOffset = std_msgs.msg.Float32.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type float32_1d
    let len;
    let data = new float32_1d(null);
    // Deserialize message field [float_1d_data]
    // Deserialize array length for message field [float_1d_data]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.float_1d_data = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.float_1d_data[i] = std_msgs.msg.Float32.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.float_1d_data.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'spec_msg/float32_1d';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3c407a75cd6de77ccc99d99b2a57e318';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Float32[] float_1d_data
    
    ================================================================================
    MSG: std_msgs/Float32
    float32 data
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new float32_1d(null);
    if (msg.float_1d_data !== undefined) {
      resolved.float_1d_data = new Array(msg.float_1d_data.length);
      for (let i = 0; i < resolved.float_1d_data.length; ++i) {
        resolved.float_1d_data[i] = std_msgs.msg.Float32.Resolve(msg.float_1d_data[i]);
      }
    }
    else {
      resolved.float_1d_data = []
    }

    return resolved;
    }
};

module.exports = float32_1d;
