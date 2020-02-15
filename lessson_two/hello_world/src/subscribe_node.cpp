#include "ros/ros.h" 
#include "std_msgs/String.h" 

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]",msg->data.c_str());
}

int main(int argc, char **argv) 
{

  //初始化节点名字,在计算图中注册
  ros::init(argc, argv, "subscribe_node");
  //句柄
  ros::NodeHandle nh;
  //订阅"chatter话题",订阅序列大小1000,声明 处理回调函数
  ros::Subscriber chatter_sub = nh.subscribe("chatter", 1000,chatterCallback);
  
  //自循环挂起
  ros::spin();

  return 0;
}