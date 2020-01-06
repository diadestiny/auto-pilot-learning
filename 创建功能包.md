# 1.创建工作空间
$ mkdir -p ~/catkin_ws/src
$ cd ~/catkin_ws/src
$ catkin_init_workspace
# 2.编译工作空间
$ cd ~/catkin_ws/
$ catkin_make
# 3.设置环境变量
$ source ~/catkin_ws/devel/setup.bash (I am accustomed to use the command 'gedit ~/.bashrc')
# 4.检查环境变量
$ echo $ROS_PACKAGE_PATH (env | grep ros)

# 1.创建功能包
$ cd~/catkin_ws/src
$ catkin_creat_pkg learning_communication std_msgs rospy roscpp
# 2.编译功能包
$ cd~/catkin_ws/
$ catkin_make
$ source ~/catkin_ws/devel/setup.bash (we have already set up the environment,so we can skip it.)

* 查找功能包 rospack find roscpp_tutorials (查找功能包时会优先从source ~/.bashrc 查找最前端的工作空间是否存在指定的功能包,如果不存在依次往后查找)
