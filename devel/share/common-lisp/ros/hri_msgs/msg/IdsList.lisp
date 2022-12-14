; Auto-generated. Do not edit!


(cl:in-package hri_msgs-msg)


;//! \htmlinclude IdsList.msg.html

(cl:defclass <IdsList> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (ids
    :reader ids
    :initarg :ids
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element "")))
)

(cl:defclass IdsList (<IdsList>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IdsList>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IdsList)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hri_msgs-msg:<IdsList> is deprecated: use hri_msgs-msg:IdsList instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <IdsList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hri_msgs-msg:header-val is deprecated.  Use hri_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'ids-val :lambda-list '(m))
(cl:defmethod ids-val ((m <IdsList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hri_msgs-msg:ids-val is deprecated.  Use hri_msgs-msg:ids instead.")
  (ids m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IdsList>) ostream)
  "Serializes a message object of type '<IdsList>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'ids))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'ids))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IdsList>) istream)
  "Deserializes a message object of type '<IdsList>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'ids) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'ids)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IdsList>)))
  "Returns string type for a message object of type '<IdsList>"
  "hri_msgs/IdsList")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IdsList)))
  "Returns string type for a message object of type 'IdsList"
  "hri_msgs/IdsList")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IdsList>)))
  "Returns md5sum for a message object of type '<IdsList>"
  "84a63f55b5676f78b625e8a8bb809fe5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IdsList)))
  "Returns md5sum for a message object of type 'IdsList"
  "84a63f55b5676f78b625e8a8bb809fe5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IdsList>)))
  "Returns full string definition for message of type '<IdsList>"
  (cl:format cl:nil "# This message encodes a list of ROS4HRI IDs (eg face ids, body ids, person~%# ids...).~%# It is for instance published on /humans/faces/tracked to access the list of~%# currently detected faces.~%Header header~%string[] ids~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IdsList)))
  "Returns full string definition for message of type 'IdsList"
  (cl:format cl:nil "# This message encodes a list of ROS4HRI IDs (eg face ids, body ids, person~%# ids...).~%# It is for instance published on /humans/faces/tracked to access the list of~%# currently detected faces.~%Header header~%string[] ids~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IdsList>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'ids) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IdsList>))
  "Converts a ROS message object to a list"
  (cl:list 'IdsList
    (cl:cons ':header (header msg))
    (cl:cons ':ids (ids msg))
))
