#include "ros/ros.h"
#include "std_msgs/String.h"

class Number{
    private:
    int value_;
    ros::NodeHandle nh_;
    ros::Publisher numb_pub_;
}