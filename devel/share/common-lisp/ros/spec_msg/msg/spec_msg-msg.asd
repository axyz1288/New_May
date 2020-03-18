
(cl:in-package :asdf)

(defsystem "spec_msg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "float32_1d" :depends-on ("_package_float32_1d"))
    (:file "_package_float32_1d" :depends-on ("_package"))
    (:file "float32_2d" :depends-on ("_package_float32_2d"))
    (:file "_package_float32_2d" :depends-on ("_package"))
    (:file "spec_points" :depends-on ("_package_spec_points"))
    (:file "_package_spec_points" :depends-on ("_package"))
  ))