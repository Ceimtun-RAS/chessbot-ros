# chessbot-ros


## Getting Started 
With all the requirements installed build the workspace `/chessbot_ws` with either `catkin_make` or `catkin build`. 

```
$ git clone https://github.com/Ceimtun-RAS/chessbot-ros.git
$ cd chessbot_ws && catkin build 
```
Be sure that devel folder is created and source setup.bash. 
```
$ source devel/setup.bash
```
Launch the base environment 
```
$ roslaunch chessbot_gazebo demo_world.launch
```


## Used Versions 
* __rosdistro:__ noetic
* __rosversion:__ 1.15.9 
* __Gazebo__ 11.5 

> Last revision: 14 August 2022 

## Members 
* Andrés Mauricio Morales Martínez (amoralesma@unal.edu.co)
* Valentina Hernández (vahernandezmo@unal.edu.co)

