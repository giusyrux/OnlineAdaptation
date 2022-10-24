#!/usr/bin/env python3

import roslib
roslib.load_manifest('learning_tf')
import rospy
import math
import tf
from geometry_msgs.msg import Quaternion, PoseStamped, Pose, Point
from hri_msgs.msg import IdsList

global sub
global id_user 
global utente

pose_table = PoseStamped()
pose_tablet = PoseStamped()

def create_tabletPoseStamped():
    pose_tablet.header.seq = 1
    pose_tablet.header.stamp = rospy.Time.now()
    pose_tablet.header.frame_id = "camera_link"
    pose_tablet.pose.position.x = 0
    pose_tablet.pose.position.y = 0
    pose_tablet.pose.position.z = -0.4
    pose_tablet.pose.orientation.x = 0
    pose_tablet.pose.orientation.y = 0
    pose_tablet.pose.orientation.z = 0
    pose_tablet.pose.orientation.w = 1
   
    return pose_tablet

def create_tablePoseStamped():
    pose_table.header.seq = 1
    pose_table.header.stamp = rospy.Time.now()
    pose_table.header.frame_id = "camera_link"
    pose_table.pose.position.x = 0.1
    pose_table.pose.position.y = 0
    pose_table.pose.position.z = -0.6
    pose_table.pose.orientation.x = 0
    pose_table.pose.orientation.y = 0
    pose_table.pose.orientation.z = 0
    pose_table.pose.orientation.w = 1

    return pose_table

def calculate_fov(x, y, z):

    distance = math.dist( [0,0], [x,y] )
    #rospy.loginfo("DISTANCE BETWEEN WEBCAM AND USER")
    #rospy.loginfo(distance)

    fov_factor = 0.4

    ## TABLET
    if (pose_tablet.pose.position.z)<0:
        factor_tablet_z = -pose_tablet.pose.position.z
    else:
        factor_tablet_z = pose_tablet.pose.position.z


    ## TAVOLO
    (trans_table,rot_table) = listener.lookupTransform('/table', '/gaze_Giusy', rospy.Time(0))
    (trans_user,rot_user) = listener.lookupTransform('/gaze_Giusy', '/table', rospy.Time(0))
    
    # t = table
    # u = user

    alfa = 2.0944 # in radianti 

    dist_from_table = math.tan(alfa) * trans_user[0]
    #dist_from_table = math.dist( [trans_table[0],trans_table[1]], [trans_user[0],trans_user[1]] )
    rospy.loginfo("DISTANCE BETWEEN TABLE AND USER")
    rospy.loginfo(dist_from_table)

    if trans_user[0] > 0:
        gaze_tu = max( 0, 1 - ( trans_user[1]/dist_from_table ) )
    else:
        gaze_tu = 0

    if trans_table[0] > 0:
        gaze_ut = max( 0, 1 - ( trans_table[1]/dist_from_table ) )
    else:
        gaze_ut = 0

    """rospy.loginfo("gaze_tu:")
    rospy.loginfo(gaze_tu)

    rospy.loginfo("gaze_ut:")
    rospy.loginfo(gaze_ut)"""

    # m_tu is the estimation of mutual gazing
    m_tu = gaze_tu * gaze_ut

    # s_tu = visual social engagement metric s_wu tra W e U
    s_tu = min( 1, m_tu/dist_from_table )

    rospy.loginfo("##################")
    rospy.loginfo("s_tu:")
    rospy.loginfo(s_tu)


    if s_tu > 0:
        rospy.logerr("TAVOLO")

    elif distance < (fov_factor * factor_tablet_z):
        rospy.logerr("TABLET")
    
    elif distance < fov_factor * z:
        rospy.logerr("CAM")

    else:
        rospy.logerr("DISTRACTED")
    


if __name__ == '__main__':
    rospy.init_node('tf_listener')
    rospy.loginfo("Node has been started.")

    listener = tf.TransformListener()

    #sub = rospy.Subscriber("/humans/faces/tracked", IdsList, callback=extract_id_user)
    pub_tablet = rospy.Publisher("/tablet_pose", PoseStamped, queue_size=1)
    #pub_table = rospy.Publisher("/table_pose", PoseStamped, queue_size=1)

    rate = rospy.Rate(2)

    # Create PoseStamped of tablet
    pose_tablet = create_tabletPoseStamped()
    

    # Create PoseStamped of table
    #pose_table = create_tablePoseStamped()
    

    while not rospy.is_shutdown():
        try:
            # lookupTransform -> target_frame, source_frame
            # tf tf_echo /source_frame /target_frame
            (trans,rot) = listener.lookupTransform('/gaze_Giusy', '/camera_link', rospy.Time(0))

            pub_tablet.publish(pose_tablet)
            #pub_table.publish(pose_table)

            #print(distance)
            calculate_fov(trans[0], trans[1], trans[2])
            
        except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException)as e:
            rospy.loginfo(e)
            #rospy.logwarn("Waiting...")

        rate.sleep()


def calculate_fov_old(distance, x, y, z, pose_table, pose_tablet):
    # regola il fov_factor in base alla distanza webcam-utente. [0.4]
    #rospy.loginfo("Fov_factor %s" % fov_factor)
    #rospy.loginfo("Distance %s" % distance)
    

    fov_factor = 0.4

    (trans_table,rot_table) = listener.lookupTransform('/table', '/gaze_Giusy', rospy.Time(0)) 

    dist_from_table = math.dist([trans_table[0],trans_table[1]],[x,y])
    

    ## TABLET
    if (pose_tablet.pose.position.z)<0:
        factor_tablet_z = -pose_tablet.pose.position.z
    else:
        factor_tablet_z = pose_tablet.pose.position.z

    ## TABLE
    if (trans_table[2])<0:
        factor_table_z = -trans_table[2]
    else:
        factor_table_z = trans_table[2]

    rospy.logwarn("#########")
    rospy.loginfo("DISTANZA:")
    rospy.loginfo(distance)
    rospy.loginfo("PRODOTTO cam:")
    rospy.loginfo(fov_factor * z)
    rospy.loginfo("PRODOTTO tablet:")
    rospy.loginfo(fov_factor * factor_tablet_z)
    rospy.loginfo("DISTANZA TABLE:")
    rospy.loginfo(dist_from_table)
    rospy.loginfo("PRODOTTO table:")
    rospy.loginfo(fov_factor * factor_table_z)

    ####
    
    """rospy.loginfo("DISTANZA CAM:")
    rospy.loginfo(distance)
    rospy.loginfo("DISTANZA TABLE:")
    rospy.loginfo(dist_from_table)
    rospy.loginfo("PRODOTTO table:")
    rospy.loginfo(fov_factor * factor_table_z)"""


    # FUNZIONA SE PER TABLE GUARDO A SX
    '''if dist_from_table < distance:
        rospy.logerr("TABLE")

    elif distance < (fov_factor * factor_tablet_z):
        rospy.logerr("TABLET")
    
    elif distance < fov_factor * z:
        rospy.logerr("CAM")

    else:
        rospy.logerr("DISTRACTED")'''

    
    # SCAMBIA TABLET E TABLE
    if distance < (fov_factor * factor_tablet_z):
        rospy.logerr("TABLET")

    elif dist_from_table < fov_factor * factor_table_z:
        rospy.logerr("TABLE")
    
    elif distance < fov_factor * z:
        rospy.logerr("CAM")

    else:
        rospy.logerr("DISTRACTED")


def extract_id_user(msg):
    a=1
    # try:
    #     id_user = '/gaze_'+str(msg.ids[0])
    #     #rospy.loginfo(id_user)
    #     utente = id_user
    # except (IndexError) as e:
    #     #rospy.loginfo("Where are you?")
    #     pass

        
def extract_coords(trans, rot):
    return (trans[0], trans[1], trans[2]) , (rot[0], rot[1], rot[2], rot[3])

def calculate_distance(x=0,y=0,z=0):
    return round(math.sqrt(x ** 2 + y ** 2 + z ** 2),2)