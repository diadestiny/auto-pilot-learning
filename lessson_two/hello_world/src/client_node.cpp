#include "ros/ros.h"
#include "hello_world/Add.h"

#include <iostream>

int main(int argc,char **argv)
{
  ros::init(argc,argv,"client_node");
  ros::NodeHandle nh;

  ros::ServiceClient client =
  nh.serviceClient<hello_world::Add>("add_two_ints");
  hello_world::Add srv;
  
  while(ros::ok())
  {
    int a_in,b_in;
    std::cout<<"please input a and b:";
    std::cin>>a_in>>b_in;

    srv.request.a = a_in;
    srv.request.b = b_in;
    if(client.call(srv))
    {
      ROS_INFO("sum=%ld",(long int)srv.response.sum);
    }
    else
    {
      ROS_INFO("failed to call service add_two_ints");
    }
  }
  return 0;
}