#include "ros/ros.h"
#include "hello_world/Add.h"

bool add_execute(hello_world::Add::Request &req,
hello_world::Add::Response &res)
{
  res.sum = req.a + req.b;
  ROS_INFO("recieve request: a=%ld,b=%ld",(long int)req.a,(long int)req.b);
  ROS_INFO("send response: sum=%ld",(long int)res.sum);
  return true;
} 

int main(int argc,char **argv)
{
  ros::init(argc,argv,"server_node");
  ros::NodeHandle nh;

  ros::ServiceServer service = nh.advertiseService("add_two_ints",add_execute);
  ROS_INFO("service is ready!!!");
  ros::spin();

  return 0;
}