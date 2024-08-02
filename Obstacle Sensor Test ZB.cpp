//Assigning names to our left and right obstacle sensor
#define IR_RIGHT 7
#define IR_LEFT 8

//Letting our rover know that we will be RECEIVING information from these sensors
void setup() {
pinMode(IR_RIGHT, INPUT);
pinMode(IR_LEFT, INPUT);


//To make sure our Rover is sharing its information back to us on the serial monitor at the speed of 9600 bits per second
Serial.begin(9600);
}

//Basic action is that the sensors will constantly (loop) scan its surroundings
//If it spots an obstacle, the returned value will be 0, if the path is clear it will return 1
void loop() {
int rightValue = digitalRead(IR_RIGHT); //read the value coming from the right sensor - 1 or 0
int leftValue = digitalRead(IR_LEFT); //read the value coming from the left sensor - 1 or 0
Serial.print("Right IR: "); //print the reading 
Serial.println(rightValue); //print on a new line for a new reading
Serial.print("Left IR: ");
Serial.println(leftValue);

//pause
delay(200);
}