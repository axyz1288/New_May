;; Auto-generated. Do not edit!


(when (boundp 'spec_msg::float32_1d)
  (if (not (find-package "SPEC_MSG"))
    (make-package "SPEC_MSG"))
  (shadow 'float32_1d (find-package "SPEC_MSG")))
(unless (find-package "SPEC_MSG::FLOAT32_1D")
  (make-package "SPEC_MSG::FLOAT32_1D"))

(in-package "ROS")
;;//! \htmlinclude float32_1d.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass spec_msg::float32_1d
  :super ros::object
  :slots (_float_1d_data ))

(defmethod spec_msg::float32_1d
  (:init
   (&key
    ((:float_1d_data __float_1d_data) (let (r) (dotimes (i 0) (push (instance std_msgs::Float32 :init) r)) r))
    )
   (send-super :init)
   (setq _float_1d_data __float_1d_data)
   self)
  (:float_1d_data
   (&rest __float_1d_data)
   (if (keywordp (car __float_1d_data))
       (send* _float_1d_data __float_1d_data)
     (progn
       (if __float_1d_data (setq _float_1d_data (car __float_1d_data)))
       _float_1d_data)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Float32[] _float_1d_data
    (apply #'+ (send-all _float_1d_data :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Float32[] _float_1d_data
     (write-long (length _float_1d_data) s)
     (dolist (elem _float_1d_data)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Float32[] _float_1d_data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _float_1d_data (let (r) (dotimes (i n) (push (instance std_msgs::Float32 :init) r)) r))
     (dolist (elem- _float_1d_data)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get spec_msg::float32_1d :md5sum-) "3c407a75cd6de77ccc99d99b2a57e318")
(setf (get spec_msg::float32_1d :datatype-) "spec_msg/float32_1d")
(setf (get spec_msg::float32_1d :definition-)
      "std_msgs/Float32[] float_1d_data

================================================================================
MSG: std_msgs/Float32
float32 data
")



(provide :spec_msg/float32_1d "3c407a75cd6de77ccc99d99b2a57e318")


