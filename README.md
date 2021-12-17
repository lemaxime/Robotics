# Robotics
The Follow It Robot

Me and my team mate create a Raspberry 4 based robot using the OpenCV image recognition library.
We aimed at controlling the 4-wheeled chassis with the camera feedback.
The camera is checking for every object in its vision field. If the object is in the preset list of the aimed object, a box appear around the object in the camera feedback.
If the box is not centered the robot is orienting itself to center the object. Once it is the robot is going forward.

In our proof of concept, the object the robot must chase is a ball.

We used a Python code with OpenCV and on the hardware side we used :
- a 4 wheeled-chassis, 
- 4 motors, 
- a h-bridge circuit, 
- a raspberry pi 4, 
- an USB camera 
- a pack of batteries.
