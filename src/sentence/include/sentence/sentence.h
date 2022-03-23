#include "ros/ros.h"
#include <std_msgs/Bool.h>
#include <std_msgs/Byte.h>
#include <std_msgs/Char.h>
#include <std_msgs/Duration.h>
#include <std_msgs/Header.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int64.h>
#include <std_msgs/Int8.h>
#include <std_msgs/Time.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt32.h>
#include <std_msgs/UInt64.h>
#include <std_msgs/UInt8.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>
#include <std_msgs/String.h>
#include <iostream>
#include <sensor_msgs/RelativeHumidity.h>
#include <vector>

class Sentence{
private:
    ros::NodeHandle nh_;
    ros::Publisher sent_pub_;
public:
    void process();
    Sentence();
};