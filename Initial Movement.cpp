#include <SoftPWM.h>

//Define the pins of motors
const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

void setup() {
	//Initialize SoftPWM library functions
	SoftPWMBegin();
}
//reverse the input to the opposite to move the other direction
void loop() {
	//set the left motors to rotate counterclockwise
	SoftPWMSet(in1, 255); //full speed counter clockwise
	SoftPWMSet(in2, 0); //Stop any spin clockwise
	
	//set the right motors rotate clockwise
	SoftPWMSet(in3, 0); //Stop counter clockwise spin
	SoftPWMSet(in4, 255); //Full speed  clockwise
}