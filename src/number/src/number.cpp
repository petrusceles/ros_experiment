#include "number.h"

Number::Number():
    nh_(ros::this_node::getName()),
    numb_pub_(nh_.advertise<std_msgs::Int32> ('value', 10)){

}

void process(){
    int number = 9;
    std_msgs::Int32 numb_msg;
    numb_msg.data = number;
    numb_pub_.publish(numb_msg);
}