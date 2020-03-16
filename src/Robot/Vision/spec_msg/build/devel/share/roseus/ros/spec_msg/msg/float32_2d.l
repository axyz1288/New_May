;; Auto-generated. Do not edit!


(when (boundp 'spec_msg::float32_2d)
  (if (not (find-package "SPEC_MSG"))
    (make-package "SPEC_MSG"))
  (shadow 'float32_2d (find-package "SPEC_MSG")))
(unless (find-package "SPEC_MSG::FLOAT32_2D")
  (make-package "SPEC_MSG::FLOAT32_2D"))

(in-package "ROS")
;;//! \htmlinclude float32_2d.msg.html


(defclass spec_msg::float32_2d
  :super ros::object
  :slots (_float32_2d_data ))

(defmethod spec_msg::float32_2d
  (:init
   (&key
    ((:float32_2d_data __float32_2d_data) (let (r) (dotimes (i 0) (push (instance spec_msg::float32_1d :init) r)) r))
    )
   (send-super :init)
   (setq _float32_2d_data __float32_2d_data)
   self)
  (:float32_2d_data
   (&rest __float32_2d_data)
   (if (keywordp (car __float32_2d_data))
       (send* _float32_2d_data __float32_2d_data)
     (progn
       (if __float32_2d_data (setq _float32_2d_data (car __float32_2d_data)))
       _float32_2d_data)))
  (:serialization-length
   ()
   (+
    ;; spec_msg/float32_1d[] _float32_2d_data
    (apply #'+ (send-all _float32_2d_data :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; spec_msg/float32_1d[] _float32_2d_data
     (write-long (length _float32_2d_data) s)
     (dolist (elem _float32_2d_data)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; spec_msg/float32_1d[] _float32_2d_data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _float32_2d_data (let (r) (dotimes (i n) (push (instance spec_msg::float32_1d :init) r)) r))
     (dolist (elem- _float32_2d_data)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get spec_msg::float32_2d :md5sum-) "8728e6595d8bccf512b6a16e3593b50f")
(setf (get spec_msg::float32_2d :datatype-) "spec_msg/float32_2d")
(setf (get spec_msg::float32_2d :definition-)
      "float32_1d[] float32_2d_data

================================================================================
MSG: spec_msg/float32_1d
std_msgs/Float32[] float_1d_data

================================================================================
MSG: std_msgs/Float32
float32 data
")



(provide :spec_msg/float32_2d "8728e6595d8bccf512b6a16e3593b50f")


