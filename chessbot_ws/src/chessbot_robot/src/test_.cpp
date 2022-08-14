#include "ros/ros.h"


int main(int argc, char** argv){
    ros::init(argc, argv, "test_"); 
    ros::NodeHandle n; 

    ros::spin(); 
}