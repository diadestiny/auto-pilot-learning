#include "ros/ros.h" 
#include "std_msgs/String.h" 

#include <sstream>

int main(int argc, char **argv) 
{
  ros::init(argc, argv, "publish_node");//在计算图初始化节点
  ros::NodeHandle nh;//句柄

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);//类型是String,发布话题,序列大小1000
  ros::Rate loop_rate(10);//自循环频率10hz
  int count = 0;

  while (ros::ok())//检查节点还存在,正常 
  {
    std_msgs::String msg;//String类型

    std::stringstream ss;//流
    ss << "how are you " << count; 
    msg.data = ss.str();
    ROS_INFO("%s", msg.data.c_str());//打印
  
    chatter_pub.publish(msg);//话题发出String
    ros::spinOnce();//这一句是让回调函数有机会被执行的声明，这个程序里面并没有回调函数，所以这一句可以不要
    loop_rate.sleep();//相应自循环频率
    ++count;
  }

  return 0;
}