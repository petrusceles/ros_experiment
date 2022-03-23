#include "synchronize/synchronize.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "synchronize_node");

    Synchronize synchronize;

    ros::Rate loop_rate(30);
    while(ros::ok()){

        synchronize.process();

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
