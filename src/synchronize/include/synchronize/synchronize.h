#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <std_msgs/String.h>
#include <iostream>
#include <std_msgs/Int32.h>
#include <boost/chrono.hpp>
#include <sensor_msgs/RelativeHumidity.h>
#include <vector>

typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::RelativeHumidity,
                                                        sensor_msgs::RelativeHumidity> SyncPolicy;
typedef message_filters::Synchronizer<SyncPolicy> InputUtils;

class Synchronize{
private:
    ros::NodeHandle nh_;
    double subs_numb_;
    double subs_sent_;
    void utilsCallback(const sensor_msgs::RelativeHumidityConstPtr &_numb_msg,
                        const sensor_msgs::RelativeHumidityConstPtr &_sent_msg);

    message_filters::Subscriber<sensor_msgs::RelativeHumidity> numb_sub_;
    message_filters::Subscriber<sensor_msgs::RelativeHumidity> sent_sub_;
    

    InputUtils input_sync_;
public:
    void process();
    Synchronize();
};

