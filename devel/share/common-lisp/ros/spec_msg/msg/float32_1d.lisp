; Auto-generated. Do not edit!


(cl:in-package spec_msg-msg)


;//! \htmlinclude float32_1d.msg.html

(cl:defclass <float32_1d> (roslisp-msg-protocol:ros-message)
  ((float_1d_data
    :reader float_1d_data
    :initarg :float_1d_data
    :type (cl:vector std_msgs-msg:Float32)
   :initform (cl:make-array 0 :element-type 'std_msgs-msg:Float32 :initial-element (cl:make-instance 'std_msgs-msg:Float32))))
)

(cl:defclass float32_1d (<float32_1d>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <float32_1d>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'float32_1d)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name spec_msg-msg:<float32_1d> is deprecated: use spec_msg-msg:float32_1d instead.")))

(cl:ensure-generic-function 'float_1d_data-val :lambda-list '(m))
(cl:defmethod float_1d_data-val ((m <float32_1d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spec_msg-msg:float_1d_data-val is deprecated.  Use spec_msg-msg:float_1d_data instead.")
  (float_1d_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <float32_1d>) ostream)
  "Serializes a message object of type '<float32_1d>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'float_1d_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'float_1d_data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <float32_1d>) istream)
  "Deserializes a message object of type '<float32_1d>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'float_1d_data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'float_1d_data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'std_msgs-msg:Float32))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<float32_1d>)))
  "Returns string type for a message object of type '<float32_1d>"
  "spec_msg/float32_1d")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'float32_1d)))
  "Returns string type for a message object of type 'float32_1d"
  "spec_msg/float32_1d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<float32_1d>)))
  "Returns md5sum for a message object of type '<float32_1d>"
  "3c407a75cd6de77ccc99d99b2a57e318")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'float32_1d)))
  "Returns md5sum for a message object of type 'float32_1d"
  "3c407a75cd6de77ccc99d99b2a57e318")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<float32_1d>)))
  "Returns full string definition for message of type '<float32_1d>"
  (cl:format cl:nil "std_msgs/Float32[] float_1d_data~%~%================================================================================~%MSG: std_msgs/Float32~%float32 data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'float32_1d)))
  "Returns full string definition for message of type 'float32_1d"
  (cl:format cl:nil "std_msgs/Float32[] float_1d_data~%~%================================================================================~%MSG: std_msgs/Float32~%float32 data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <float32_1d>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'float_1d_data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <float32_1d>))
  "Converts a ROS message object to a list"
  (cl:list 'float32_1d
    (cl:cons ':float_1d_data (float_1d_data msg))
))
