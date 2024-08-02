#include <SoftPWM.h>

// Define the pins of motors 
//All Left motors are in1 and in2 on pins 2 and 3
//All Right motors are in3 and in4 on pins 4 and 5
const int in1 = 2; //left counterclockwise
const int in2 = 3; //left clockwise
const int in3 = 4; //right counterclockwise
const int in4 = 5; //right clockwise

void setup() {
  // Initialize SoftPWM
  SoftPWMBegin();
}

//this is the loop that calls all the movement functions we define below
//the input parameter is the input that is passed into the function we define below
void loop() {
	moveForward(200); //move the rover forward
	delay(1000);
	
	moveBackward(200); //move backward
	delay(1000);
	
	turnLeft(200); //left turn
	delay(1000);
	
	turnRight(200); //right turn
	delay(1000);
	
	stopMove(); //stop the rover
	delay(5000);
}

//recall starting a function with void means it doesn't return any value
//this is how we tell which motors to turn on and which direction to spin for our intended direction or movement

void moveForward(int speed) {
  // Set the left motors rotate counterclockwise
  SoftPWMSet(in1, speed); //go the speed of the input parameter in the counterclockwise direction
  SoftPWMSet(in2, 0); //stop any counter clockwise movement 

  // Set the right motors rotate clockwise
  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void moveBackward(int speed) {
  // Set the left motors rotate clockwise
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);

  // Set the right motors rotate counterclockwise
  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}

void turnLeft(int speed) {
  // Set al motors to rotate clockwise
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, speed);
  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, speed);
}

void turnRight(int speed) {
  // Set all motors to rotate counterclockwise
  SoftPWMSet(in1, speed);
  SoftPWMSet(in2, 0);
  SoftPWMSet(in3, speed);
  SoftPWMSet(in4, 0);
}

void stopMove() {
  // Stop all the motors
  SoftPWMSet(in1, 0);
  SoftPWMSet(in2, 0);
  SoftPWMSet(in3, 0);
  SoftPWMSet(in4, 0);
}