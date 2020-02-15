#include<ros/ros.h>
#include<tf/transform_listener.h>
#include<turtlesim/Spawn.h>

int main(int argc,char ** argv){

    ros::init(argc,argv,"my_listener");
    ros::NodeHandle node;
    ros::service::waitForService("spawn");
    ros::ServiceClient add_turtle=node.serviceClient<turtlesim::Spawn>("spawn");
    turtlesim::Spawn srv;
    //生成乌龟
    add_turtle.call(srv);
    // add_turtle.call(srv);
    ros::Publisher turtle_vel = node.advertise<geometry_msgs::Twist>("turtle2/cmd_vel",10);
    // ros::Publisher turtle_vel1 = node.advertise<geometry_msgs::Twist>("turtle3/cmd_vel",10);
    tf::TransformListener listener;
    // tf::TransformListener listener1;
    ros::Rate rate(10.0);
    while(node.ok()){
        tf::StampedTransform transform;
        // tf::StampedTransform transform1;
        try{
            ros::Time now = ros::Time::now();
            ros::Time past  = ros::Time::now()-ros::Duration(5.0);
            listener.waitForTransform("/turtle2", now,
                            "/turtle1", past,"/world" ,ros::Duration(3.0));
            listener.lookupTransform("/turtle2",now,"/turtle1",past,"/world",transform);
            // listener1.waitForTransform("/turtle3", "/carrot1", ros::Time(0), ros::Duration(3.0));
            // listener1.lookupTransform("/turtle3","/carrot1",ros::Time(0),transform1);

        }catch(tf::TransformException &ex){
            ROS_ERROR("%s",ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        geometry_msgs::Twist vel_msg;
        vel_msg.angular.z=4.0*atan2(transform.getOrigin().y(),
                                    transform.getOrigin().x());
        vel_msg.linear.x=0.5*sqrt(pow(transform.getOrigin().x(),2)+
                                    pow(transform.getOrigin().y(),2));
    
        turtle_vel.publish(vel_msg);
        // vel_msg.angular.z=4.0*atan2(transform1.getOrigin().y(),
        //                             transform1.getOrigin().x());
        // vel_msg.linear.x=0.5*sqrt(pow(transform1.getOrigin().x(),2)+
        //                             pow(transform1.getOrigin().y(),2));
        // turtle_vel1.publish(vel_msg);
        rate.sleep();
    }
    return 0;
}