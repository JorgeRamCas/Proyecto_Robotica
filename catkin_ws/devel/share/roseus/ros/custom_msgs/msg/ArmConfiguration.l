;; Auto-generated. Do not edit!


(when (boundp 'custom_msgs::ArmConfiguration)
  (if (not (find-package "CUSTOM_MSGS"))
    (make-package "CUSTOM_MSGS"))
  (shadow 'ArmConfiguration (find-package "CUSTOM_MSGS")))
(unless (find-package "CUSTOM_MSGS::ARMCONFIGURATION")
  (make-package "CUSTOM_MSGS::ARMCONFIGURATION"))

(in-package "ROS")
;;//! \htmlinclude ArmConfiguration.msg.html


(defclass custom_msgs::ArmConfiguration
  :super ros::object
  :slots (_q1 _q2 _q3 _q4 _q5 _q6 _q7 ))

(defmethod custom_msgs::ArmConfiguration
  (:init
   (&key
    ((:q1 __q1) 0.0)
    ((:q2 __q2) 0.0)
    ((:q3 __q3) 0.0)
    ((:q4 __q4) 0.0)
    ((:q5 __q5) 0.0)
    ((:q6 __q6) 0.0)
    ((:q7 __q7) 0.0)
    )
   (send-super :init)
   (setq _q1 (float __q1))
   (setq _q2 (float __q2))
   (setq _q3 (float __q3))
   (setq _q4 (float __q4))
   (setq _q5 (float __q5))
   (setq _q6 (float __q6))
   (setq _q7 (float __q7))
   self)
  (:q1
   (&optional __q1)
   (if __q1 (setq _q1 __q1)) _q1)
  (:q2
   (&optional __q2)
   (if __q2 (setq _q2 __q2)) _q2)
  (:q3
   (&optional __q3)
   (if __q3 (setq _q3 __q3)) _q3)
  (:q4
   (&optional __q4)
   (if __q4 (setq _q4 __q4)) _q4)
  (:q5
   (&optional __q5)
   (if __q5 (setq _q5 __q5)) _q5)
  (:q6
   (&optional __q6)
   (if __q6 (setq _q6 __q6)) _q6)
  (:q7
   (&optional __q7)
   (if __q7 (setq _q7 __q7)) _q7)
  (:serialization-length
   ()
   (+
    ;; float64 _q1
    8
    ;; float64 _q2
    8
    ;; float64 _q3
    8
    ;; float64 _q4
    8
    ;; float64 _q5
    8
    ;; float64 _q6
    8
    ;; float64 _q7
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _q1
       (sys::poke _q1 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q2
       (sys::poke _q2 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q3
       (sys::poke _q3 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q4
       (sys::poke _q4 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q5
       (sys::poke _q5 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q6
       (sys::poke _q6 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q7
       (sys::poke _q7 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _q1
     (setq _q1 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q2
     (setq _q2 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q3
     (setq _q3 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q4
     (setq _q4 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q5
     (setq _q5 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q6
     (setq _q6 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q7
     (setq _q7 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get custom_msgs::ArmConfiguration :md5sum-) "28a68355a51a751a1d02f2fdca527182")
(setf (get custom_msgs::ArmConfiguration :datatype-) "custom_msgs/ArmConfiguration")
(setf (get custom_msgs::ArmConfiguration :definition-)
      "float64 q1
float64 q2
float64 q3
float64 q4
float64 q5
float64 q6
float64 q7
")



(provide :custom_msgs/ArmConfiguration "28a68355a51a751a1d02f2fdca527182")


