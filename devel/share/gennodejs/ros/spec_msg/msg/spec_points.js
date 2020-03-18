// Auto-generated. Do not edit!

// (in-package spec_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class spec_points {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.points_xyz = null;
      this.points_rgb = null;
      this.flag = null;
    }
    else {
      if (initObj.hasOwnProperty('points_xyz')) {
        this.points_xyz = initObj.points_xyz
      }
      else {
        this.points_xyz = [];
      }
      if (initObj.hasOwnProperty('points_rgb')) {
        this.points_rgb = initObj.points_rgb
      }
      else {
        this.points_rgb = [];
      }
      if (initObj.hasOwnProperty('flag')) {
        this.flag = initObj.flag
      }
      else {
        this.flag = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type spec_points
    // Serialize message field [points_xyz]
    // Serialize the length for message field [points_xyz]
    bufferOffset = _serializer.uint32(obj.points_xyz.length, buffer, bufferOffset);
    obj.points_xyz.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Point.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [points_rgb]
    // Serialize the length for message field [points_rgb]
    bufferOffset = _serializer.uint32(obj.points_rgb.length, buffer, bufferOffset);
    obj.points_rgb.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Point.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [flag]
    bufferOffset = _serializer.uint8(obj.flag, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type spec_points
    let len;
    let data = new spec_points(null);
    // Deserialize message field [points_xyz]
    // Deserialize array length for message field [points_xyz]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.points_xyz = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.points_xyz[i] = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [points_rgb]
    // Deserialize array length for message field [points_rgb]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.points_rgb = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.points_rgb[i] = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [flag]
    data.flag = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 24 * object.points_xyz.length;
    length += 24 * object.points_rgb.length;
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'spec_msg/spec_points';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '79d933304dd1e2e99143191e2b7c8435';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Point[] points_xyz
    geometry_msgs/Point[] points_rgb
    uint8 flag
    
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new spec_points(null);
    if (msg.points_xyz !== undefined) {
      resolved.points_xyz = new Array(msg.points_xyz.length);
      for (let i = 0; i < resolved.points_xyz.length; ++i) {
        resolved.points_xyz[i] = geometry_msgs.msg.Point.Resolve(msg.points_xyz[i]);
      }
    }
    else {
      resolved.points_xyz = []
    }

    if (msg.points_rgb !== undefined) {
      resolved.points_rgb = new Array(msg.points_rgb.length);
      for (let i = 0; i < resolved.points_rgb.length; ++i) {
        resolved.points_rgb[i] = geometry_msgs.msg.Point.Resolve(msg.points_rgb[i]);
      }
    }
    else {
      resolved.points_rgb = []
    }

    if (msg.flag !== undefined) {
      resolved.flag = msg.flag;
    }
    else {
      resolved.flag = 0
    }

    return resolved;
    }
};

module.exports = spec_points;
