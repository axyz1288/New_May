;; Auto-generated. Do not edit!


(when (boundp 'spec_msg::spec_points)
  (if (not (find-package "SPEC_MSG"))
    (make-package "SPEC_MSG"))
  (shadow 'spec_points (find-package "SPEC_MSG")))
(unless (find-package "SPEC_MSG::SPEC_POINTS")
  (make-package "SPEC_MSG::SPEC_POINTS"))

(in-package "ROS")
;;//! \htmlinclude spec_points.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass spec_msg::spec_points
  :super ros::object
  :slots (_points_xyz _points_rgb _flag ))

(defmethod spec_msg::spec_points
  (:init
   (&key
    ((:points_xyz __points_xyz) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Point :init) r)) r))
    ((:points_rgb __points_rgb) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Point :init) r)) r))
    ((:flag __flag) 0)
    )
   (send-super :init)
   (setq _points_xyz __points_xyz)
   (setq _points_rgb __points_rgb)
   (setq _flag (round __flag))
   self)
  (:points_xyz
   (&rest __points_xyz)
   (if (keywordp (car __points_xyz))
       (send* _points_xyz __points_xyz)
     (progn
       (if __points_xyz (setq _points_xyz (car __points_xyz)))
       _points_xyz)))
  (:points_rgb
   (&rest __points_rgb)
   (if (keywordp (car __points_rgb))
       (send* _points_rgb __points_rgb)
     (progn
       (if __points_rgb (setq _points_rgb (car __points_rgb)))
       _points_rgb)))
  (:flag
   (&optional __flag)
   (if __flag (setq _flag __flag)) _flag)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point[] _points_xyz
    (apply #'+ (send-all _points_xyz :serialization-length)) 4
    ;; geometry_msgs/Point[] _points_rgb
    (apply #'+ (send-all _points_rgb :serialization-length)) 4
    ;; uint8 _flag
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point[] _points_xyz
     (write-long (length _points_xyz) s)
     (dolist (elem _points_xyz)
       (send elem :serialize s)
       )
     ;; geometry_msgs/Point[] _points_rgb
     (write-long (length _points_rgb) s)
     (dolist (elem _points_rgb)
       (send elem :serialize s)
       )
     ;; uint8 _flag
       (write-byte _flag s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point[] _points_xyz
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points_xyz (let (r) (dotimes (i n) (push (instance geometry_msgs::Point :init) r)) r))
     (dolist (elem- _points_xyz)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/Point[] _points_rgb
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points_rgb (let (r) (dotimes (i n) (push (instance geometry_msgs::Point :init) r)) r))
     (dolist (elem- _points_rgb)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; uint8 _flag
     (setq _flag (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get spec_msg::spec_points :md5sum-) "79d933304dd1e2e99143191e2b7c8435")
(setf (get spec_msg::spec_points :datatype-) "spec_msg/spec_points")
(setf (get spec_msg::spec_points :definition-)
      "geometry_msgs/Point[] points_xyz
geometry_msgs/Point[] points_rgb
uint8 flag


================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :spec_msg/spec_points "79d933304dd1e2e99143191e2b7c8435")


