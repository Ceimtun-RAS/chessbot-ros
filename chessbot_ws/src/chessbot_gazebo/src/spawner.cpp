#include "ros/ros.h"

// Spawner 
/*
    Spawns chess pieces alongside the chessboard at 
    a given game state.
*/ 

int main(int argc, char** argv){
    ros::init(argc, argv, "spawner"); 
    ros::NodeHandle n; 

    ros::spin(); 
    return 1; 
}