#include "sentence/sentence.h"

Sentence::Sentence():
    nh_(ros::this_node::getName()),
    sent_pub_(nh_.advertise<sensor_msgs::RelativeHumidity>("sentence", 10)){

}

void Sentence::process(){
    float sentence = 5.1;
    float sent_str = 4.1;
    sensor_msgs::RelativeHumidity sent_msg;
    sent_msg.relative_humidity = sentence;
    sent_msg.variance = sent_str;
    sent_pub_.publish(sent_msg);
}