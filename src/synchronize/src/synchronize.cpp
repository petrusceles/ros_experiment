#include "synchronize/synchronize.h"

Synchronize::Synchronize():
    nh_(ros::this_node::getName()),
    numb_sub_(nh_, "/number_node/value",1),
    sent_sub_(nh_, "/sentence_node/sentence",1),
    input_sync_(SyncPolicy(10), numb_sub_,sent_sub_){
        input_sync_.registerCallback(boost::bind(&Synchronize::utilsCallback, this, _1,_2));
    }

void Synchronize::utilsCallback(const sensor_msgs::RelativeHumidityConstPtr &_numb_msg,
                        const sensor_msgs::RelativeHumidityConstPtr &_sent_msg){
    subs_numb_ = _numb_msg->relative_humidity;
    subs_sent_ = _sent_msg->variance;
    // std::cout<<"Hai\n";
}

void Synchronize::process(){
    std::cout<<"Received    : "<<subs_numb_<<" "<<subs_sent_<<"\n";
}
