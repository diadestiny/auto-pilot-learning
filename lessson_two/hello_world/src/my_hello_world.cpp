#include "ros/ros.h"

int main(int argc,char **argv){
    ros::init(argc,argv,"hello_name");
    ros::NodeHandle nh;
    ROS_INFO_STREAM("hello I an a freshman.");

}