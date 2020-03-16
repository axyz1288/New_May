; Auto-generated. Do not edit!


(cl:in-package spec_msg-msg)


;//! \htmlinclude spec_points.msg.html

(cl:defclass <spec_points> (roslisp-msg-protocol:ros-message)
  ((points_xyz
    :reader points_xyz
    :initarg :points_xyz
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (points_rgb
    :reader points_rgb
    :initarg :points_rgb
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point)))
   (flag
    :reader flag
    :initarg :flag
    :type cl:fixnum
    :initform 0))
)

(cl:defclass spec_points (<spec_points>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <spec_points>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'spec_points)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name spec_msg-msg:<spec_points> is deprecated: use spec_msg-msg:spec_points instead.")))

(cl:ensure-generic-function 'points_xyz-val :lambda-list '(m))
(cl:defmethod points_xyz-val ((m <spec_points>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spec_msg-msg:points_xyz-val is deprecated.  Use spec_msg-msg:points_xyz instead.")
  (points_xyz m))

(cl:ensure-generic-function 'points_rgb-val :lambda-list '(m))
(cl:defmethod points_rgb-val ((m <spec_points>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spec_msg-msg:points_rgb-val is deprecated.  Use spec_msg-msg:points_rgb instead.")
  (points_rgb m))

(cl:ensure-generic-function 'flag-val :lambda-list '(m))
(cl:defmethod flag-val ((m <spec_points>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spec_msg-msg:flag-val is deprecated.  Use spec_msg-msg:flag instead.")
  (flag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <spec_points>) ostream)
  "Serializes a message object of type '<spec_points>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'points_xyz))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'points_xyz))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'points_rgb))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'points_rgb))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'flag)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <spec_points>) istream)
  "Deserializes a message object of type '<spec_points>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'points_xyz) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'points_xyz)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'points_rgb) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'points_rgb)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'flag)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<spec_points>)))
  "Returns string type for a message object of type '<spec_points>"
  "spec_msg/spec_points")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'spec_points)))
  "Returns string type for a message object of type 'spec_points"
  "spec_msg/spec_points")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<spec_points>)))
  "Returns md5sum for a message object of type '<spec_points>"
  "79d933304dd1e2e99143191e2b7c8435")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'spec_points)))
  "Returns md5sum for a message object of type 'spec_points"
  "79d933304dd1e2e99143191e2b7c8435")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<spec_points>)))
  "Returns full string definition for message of type '<spec_points>"
  (cl:format cl:nil "geometry_msgs/Point[] points_xyz~%geometry_msgs/Point[] points_rgb~%uint8 flag~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'spec_points)))
  "Returns full string definition for message of type 'spec_points"
  (cl:format cl:nil "geometry_msgs/Point[] points_xyz~%geometry_msgs/Point[] points_rgb~%uint8 flag~%~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <spec_points>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'points_xyz) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'points_rgb) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <spec_points>))
  "Converts a ROS message object to a list"
  (cl:list 'spec_points
    (cl:cons ':points_xyz (points_xyz msg))
    (cl:cons ':points_rgb (points_rgb msg))
    (cl:cons ':flag (flag msg))
))
