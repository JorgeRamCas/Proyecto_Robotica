
(cl:in-package :asdf)

(defsystem "custom_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :nav_msgs-msg
)
  :components ((:file "_package")
    (:file "InverseKinematicsForPose" :depends-on ("_package_InverseKinematicsForPose"))
    (:file "_package_InverseKinematicsForPose" :depends-on ("_package"))
    (:file "SmoothPath" :depends-on ("_package_SmoothPath"))
    (:file "_package_SmoothPath" :depends-on ("_package"))
  ))