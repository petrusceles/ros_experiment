#include "sentence/sentence.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "sentence_node");

    Sentence sentence;

    ros::Rate loop_rate(30);
    while(ros::ok()){

        sentence.process();

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
