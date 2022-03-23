#include "number/number.h"

Number::Number():
    nh_(ros::this_node::getName()),
    numb_pub_(nh_.advertise<sensor_msgs::RelativeHumidity>("value", 10)){

}

void Number::process(){
    float number = 5.45;
    float numb_str = 6.45;
    sensor_msgs::RelativeHumidity numb_msg;
    numb_msg.relative_humidity = number;
    numb_msg.variance = numb_str;
    numb_pub_.publish(numb_msg);
}