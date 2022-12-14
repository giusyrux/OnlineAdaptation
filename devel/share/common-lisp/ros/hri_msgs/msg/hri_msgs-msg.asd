
(cl:in-package :asdf)

(defsystem "hri_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "AudioFeatures" :depends-on ("_package_AudioFeatures"))
    (:file "_package_AudioFeatures" :depends-on ("_package"))
    (:file "BodyPosture" :depends-on ("_package_BodyPosture"))
    (:file "_package_BodyPosture" :depends-on ("_package"))
    (:file "EngagementLevel" :depends-on ("_package_EngagementLevel"))
    (:file "_package_EngagementLevel" :depends-on ("_package"))
    (:file "Expression" :depends-on ("_package_Expression"))
    (:file "_package_Expression" :depends-on ("_package"))
    (:file "FacialActionUnits" :depends-on ("_package_FacialActionUnits"))
    (:file "_package_FacialActionUnits" :depends-on ("_package"))
    (:file "FacialLandmarks" :depends-on ("_package_FacialLandmarks"))
    (:file "_package_FacialLandmarks" :depends-on ("_package"))
    (:file "Gaze" :depends-on ("_package_Gaze"))
    (:file "_package_Gaze" :depends-on ("_package"))
    (:file "Gesture" :depends-on ("_package_Gesture"))
    (:file "_package_Gesture" :depends-on ("_package"))
    (:file "Group" :depends-on ("_package_Group"))
    (:file "_package_Group" :depends-on ("_package"))
    (:file "IdsList" :depends-on ("_package_IdsList"))
    (:file "_package_IdsList" :depends-on ("_package"))
    (:file "IdsMatch" :depends-on ("_package_IdsMatch"))
    (:file "_package_IdsMatch" :depends-on ("_package"))
    (:file "LiveSpeech" :depends-on ("_package_LiveSpeech"))
    (:file "_package_LiveSpeech" :depends-on ("_package"))
    (:file "NormalizedPointOfInterest2D" :depends-on ("_package_NormalizedPointOfInterest2D"))
    (:file "_package_NormalizedPointOfInterest2D" :depends-on ("_package"))
    (:file "NormalizedPointOfInterest2DStamped" :depends-on ("_package_NormalizedPointOfInterest2DStamped"))
    (:file "_package_NormalizedPointOfInterest2DStamped" :depends-on ("_package"))
    (:file "NormalizedRegionOfInterest2D" :depends-on ("_package_NormalizedRegionOfInterest2D"))
    (:file "_package_NormalizedRegionOfInterest2D" :depends-on ("_package"))
    (:file "Skeleton2D" :depends-on ("_package_Skeleton2D"))
    (:file "_package_Skeleton2D" :depends-on ("_package"))
    (:file "SoftBiometrics" :depends-on ("_package_SoftBiometrics"))
    (:file "_package_SoftBiometrics" :depends-on ("_package"))
  ))