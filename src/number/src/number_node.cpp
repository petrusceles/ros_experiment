#include "number/number.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "number_node");

    Number number;

    ros::Rate loop_rate(30);
    while(ros::ok()){

        number.process();

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
