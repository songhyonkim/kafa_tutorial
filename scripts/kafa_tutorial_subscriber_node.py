#!/usr/bin/env python

import rospy
from std_msgs.msg import Int32

def callback(data):
    rospy.loginfo('I heard %d', data.data)
    
def subscriber():
    rospy.init_node('kafa_tutorial_subscriber_node', anonymous=True)
    rospy.Subscriber('kafa_tutorial_msg', Int32, callback)
    rospy.spin()
    
if __name__ == '__main__':
    subscriber()    
    
