
(cl:in-package :asdf)

(defsystem "custom_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ArmConfiguration" :depends-on ("_package_ArmConfiguration"))
    (:file "_package_ArmConfiguration" :depends-on ("_package"))
  ))