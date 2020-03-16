; Auto-generated. Do not edit!


(cl:in-package spec_msg-msg)


;//! \htmlinclude float32_2d.msg.html

(cl:defclass <float32_2d> (roslisp-msg-protocol:ros-message)
  ((float32_2d_data
    :reader float32_2d_data
    :initarg :float32_2d_data
    :type (cl:vector spec_msg-msg:float32_1d)
   :initform (cl:make-array 0 :element-type 'spec_msg-msg:float32_1d :initial-element (cl:make-instance 'spec_msg-msg:float32_1d))))
)

(cl:defclass float32_2d (<float32_2d>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <float32_2d>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'float32_2d)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name spec_msg-msg:<float32_2d> is deprecated: use spec_msg-msg:float32_2d instead.")))

(cl:ensure-generic-function 'float32_2d_data-val :lambda-list '(m))
(cl:defmethod float32_2d_data-val ((m <float32_2d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spec_msg-msg:float32_2d_data-val is deprecated.  Use spec_msg-msg:float32_2d_data instead.")
  (float32_2d_data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <float32_2d>) ostream)
  "Serializes a message object of type '<float32_2d>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'float32_2d_data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'float32_2d_data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <float32_2d>) istream)
  "Deserializes a message object of type '<float32_2d>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'float32_2d_data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'float32_2d_data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'spec_msg-msg:float32_1d))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<float32_2d>)))
  "Returns string type for a message object of type '<float32_2d>"
  "spec_msg/float32_2d")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'float32_2d)))
  "Returns string type for a message object of type 'float32_2d"
  "spec_msg/float32_2d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<float32_2d>)))
  "Returns md5sum for a message object of type '<float32_2d>"
  "8728e6595d8bccf512b6a16e3593b50f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'float32_2d)))
  "Returns md5sum for a message object of type 'float32_2d"
  "8728e6595d8bccf512b6a16e3593b50f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<float32_2d>)))
  "Returns full string definition for message of type '<float32_2d>"
  (cl:format cl:nil "float32_1d[] float32_2d_data~%~%================================================================================~%MSG: spec_msg/float32_1d~%std_msgs/Float32[] float_1d_data~%~%================================================================================~%MSG: std_msgs/Float32~%float32 data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'float32_2d)))
  "Returns full string definition for message of type 'float32_2d"
  (cl:format cl:nil "float32_1d[] float32_2d_data~%~%================================================================================~%MSG: spec_msg/float32_1d~%std_msgs/Float32[] float_1d_data~%~%================================================================================~%MSG: std_msgs/Float32~%float32 data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <float32_2d>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'float32_2d_data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <float32_2d>))
  "Converts a ROS message object to a list"
  (cl:list 'float32_2d
    (cl:cons ':float32_2d_data (float32_2d_data msg))
))
