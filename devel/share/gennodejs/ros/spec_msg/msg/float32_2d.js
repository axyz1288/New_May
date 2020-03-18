// Auto-generated. Do not edit!

// (in-package spec_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let float32_1d = require('./float32_1d.js');

//-----------------------------------------------------------

class float32_2d {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.float32_2d_data = null;
    }
    else {
      if (initObj.hasOwnProperty('float32_2d_data')) {
        this.float32_2d_data = initObj.float32_2d_data
      }
      else {
        this.float32_2d_data = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type float32_2d
    // Serialize message field [float32_2d_data]
    // Serialize the length for message field [float32_2d_data]
    bufferOffset = _serializer.uint32(obj.float32_2d_data.length, buffer, bufferOffset);
    obj.float32_2d_data.forEach((val) => {
      bufferOffset = float32_1d.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type float32_2d
    let len;
    let data = new float32_2d(null);
    // Deserialize message field [float32_2d_data]
    // Deserialize array length for message field [float32_2d_data]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.float32_2d_data = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.float32_2d_data[i] = float32_1d.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.float32_2d_data.forEach((val) => {
      length += float32_1d.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'spec_msg/float32_2d';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8728e6595d8bccf512b6a16e3593b50f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32_1d[] float32_2d_data
    
    ================================================================================
    MSG: spec_msg/float32_1d
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
    const resolved = new float32_2d(null);
    if (msg.float32_2d_data !== undefined) {
      resolved.float32_2d_data = new Array(msg.float32_2d_data.length);
      for (let i = 0; i < resolved.float32_2d_data.length; ++i) {
        resolved.float32_2d_data[i] = float32_1d.Resolve(msg.float32_2d_data[i]);
      }
    }
    else {
      resolved.float32_2d_data = []
    }

    return resolved;
    }
};

module.exports = float32_2d;
