# OnlineAdaptation
Script di avvio

roslaunch hri_face_detect detect.launch

rosrun usb_cam usb_cam_node _pixel_format:=yuyv 

#opt

rosrun rviz rviz -d ‘rospack find hri_face_detect’/rviz/rviz_face_detect.rviz 

 

Vedere l’informazione pubblicata su /humans/faces/tracked perché memorizza id della faccia correntemente rilevata (se non è presente, ancora non viene rilevata nessuna faccia oppure è stata perduta) 
