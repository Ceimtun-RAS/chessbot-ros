


<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/Ceimtun-RAS/chessbot-ros/">
    <img src="https://github.com/Ceimtun-RAS/chessbot-ros/docs/imgs/github_frame.png" alt="Logo" width="80" height="80">

  </a>

  <h3 align="center">Chessbot Project</h3>

  <p align="center">
    Autonomous Chess playing Serial Manipulator 
    <br />
    <a href="https://github.com/Ceimtun-RAS/chessbot-ros/wiki"><strong>Explore the docs »</strong></a>
    <br />
    <a href="https://github.com/Ceimtun-RAS/chessbot-ros/issues">Report Bug</a>
  </p>
</div>

<<<<<<< HEAD
<div align = "center">
![](https://img.shields.io/badge/state-working-45EF23)
![](https://img.shields.io/badge/real_implementation-planning-FFEF23)
![](https://img.shields.io/badge/release-none-FF2223)
</div>
=======

![](https://img.shields.io/badge/state-working-45EF23)
![](https://img.shields.io/badge/real_implementation-planning-FFEF23)
![](https://img.shields.io/badge/release-none-FF2223)

>>>>>>> bc8fb6aabf2e5b0bfff07abb058a64b4d383aafc
<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

---




## Getting Started 
With all the requirements installed, clone de repo and build the workspace `/chessbot_ws` with either `catkin_make` or `catkin build`. 

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
You should see something like this


![simulation demo world image](https://github.com/Ceimtun-RAS/chessbot-ros/blob/docs/docs/imgs/base_demo_world.png)




## Used Versions 
* __rosdistro:__ noetic
* __rosversion:__ 1.15.9 
* __Gazebo__ 11.5 

> Last revision: 14 August 2022 

## Members 
* Andrés Mauricio Morales Martínez (amoralesma@unal.edu.co)
* Valentina Hernández (vahernandezmo@unal.edu.co)

