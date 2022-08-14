#include "ros/ros.h"
#include "gazebo_msgs/SpawnModel.h"
#include "std_msgs/Float32.h"
#include "geometry_msgs/Point.h"

geometry_msgs::Point getChessboardRelativePosition(int i, int j); 
geometry_msgs::Point createPoint(float x, float y, float z); 

// Spawner 
/*
    Spawns chess pieces alongside the chessboard at 
    a given game state.
*/ 

int main(int argc, char** argv){
    ros::init(argc, argv, "spawner"); 
    ros::NodeHandle n; 
    std::string pawn_file; 
    n.getParam("/chess_sim/pawn_description", pawn_file); 

    ros::ServiceClient spawnModelClient = n.serviceClient<gazebo_msgs::SpawnModel>("/gazebo/spawn_sdf_model"); 

    gazebo_msgs::SpawnModel srv;

    for(int i = 0; i < 16; i++){
    srv.request.model_name = "my_new_pawn_" + std::to_string(i); 
    srv.request.model_xml = pawn_file; 
    srv.request.initial_pose.position = getChessboardRelativePosition(i < 8 ? 2 : 7, (i % 8) + 1); 

    if(spawnModelClient.call(srv)){
        ROS_INFO("Service called"); 
    }else{
        ROS_WARN("No service called"); 
        
    }
    }
    return 1; 
}


geometry_msgs::Point getChessboardRelativePosition(int i, int j){
    if ((i > 8 && i <= 0)||(j > 8 && j <= 0))
        ROS_ERROR("Wrong chess position"); 

    
    // main Constants from fusion
    const float CELL_DIM = 0.04; // [m]
    const float INIT_OFFSET = 0.14; // [m] 
    const float INIT_HEIGHT_THICKNESS = 0.033; // [m] 

    const float CHESSBOARD_X = -0.30; // [m] 
    const float CHESSBOARD_Y = 0; // [m] 
    
    float x_final = (CHESSBOARD_X + INIT_OFFSET) - (i - 1) * CELL_DIM; 
    float y_final = (CHESSBOARD_Y - INIT_OFFSET) + (j - 1) * CELL_DIM; 

    // TODO: MAKE ROTATION WITH QUATERNION 

    return createPoint(x_final, y_final, 1 + INIT_HEIGHT_THICKNESS); 
    
}

geometry_msgs::Point createPoint(float x, float y, float z){
    geometry_msgs::Point pos; 

    pos.x = x; 
    pos.y = y; 
    pos.z = z; 

    return pos; 
}


