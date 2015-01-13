#include "ros/ros.h"
#include "kafa_tutorial/kafa_tutorial_msg.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "kafa_tutorial_publisher_node");
  ros::NodeHandle nh;

  ros::Publisher pub = nh.advertise<kafa_tutorial::kafa_tutorial_msg>("kafa_tutorial_topic", 100);

  ros::Rate loop_rate(0.5);

  int count = 0;

  while (ros::ok())
  {
    kafa_tutorial::kafa_tutorial_msg msg;
    msg.data = count;

    ROS_INFO("send msg = %d", count);

    pub.publish(msg);

    loop_rate.sleep();

    ++count;
  }

  return 0;
}
