// Alaa Sada Biomedical Engineer - Electrical Engineering section
// This code is used to control 6 servo motors using 6 potentiometers. 

#include <Servo.h>

// these are the names of the 6 servo motors that we need to control

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// below are the pins that are connected to each one of the servo motors
// pins ( 8 - 13 )

int servo1Pin = 8;
int servo2Pin = 9;
int servo3Pin = 10;
int servo4Pin = 11;
int servo5Pin = 12;
int servo6Pin = 13;

// to control the servo motors we need potentiometers 
// below are the pins connected to each one of the potentiometers
// pins ( A0 - A5 )

int s1potention = 0;
int s2potention = 1;
int s3potention = 2;
int s4potention = 3;
int s5potention = 4;
int s6potention = 5;


// to connect each one of the servo motors to pins ( A0 - A5 )
// we need " attach " function 

void setup(){
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
  servo5.attach(servo5Pin);
  servo6.attach(servo6Pin); 
}

// inside the void loop
// the analogread will read the value from the pin that is connected to the servo
// the map function allows for better scaling of numbers since we need to have 
// a range of degree of freedom from 0 - 90 degrees
// write function will send a value ( in degrees ) to servo
// delay function will allow a 15 second delay for the servo to move

void loop(){

  s1potention = analogRead(servo1Pin);
  s1potention = map(s1potention, 0 , 1023, 0, 90);
  servo1.write(s1potention);
  delay(15);

  s2potention = analogRead(servo2Pin);
  s2potention = map(s2potention, 0 , 1023, 0, 90);
  servo2.write(s2potention);
  delay(15);
  
  s3potention = analogRead(servo3Pin);
  s3potention = map(s3potention, 0 , 1023, 0, 90);
  servo3.write(s3potention);
  delay(15);
  
  s4potention = analogRead(servo4Pin);
  s4potention = map(s4potention, 0 , 1023, 0, 90);
  servo4.write(s4potention);
  delay(15);
  
  s5potention = analogRead(servo5Pin);
  s5potention = map(s5potention, 0 , 1023, 0, 90);
  servo5.write(s5potention);
  delay(15);
  
  s6potention = analogRead(servo6Pin);
  s6potention = map(s6potention, 0 , 1023, 0, 90);
  servo6.write(s6potention);
  delay(15);
}
