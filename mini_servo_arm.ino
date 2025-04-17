#include <Servo.h>

Servo base;
Servo gripper;
Servo elbow;
Servo shoulder;

void setup() {
  base.attach(5);  // Make sure you're using D5
  gripper.attach(9);
  elbow.attach(6);
  shoulder.attach(3);
}

void loop() {
  base.write(90); 
  gripper.write(160); //180 = open 90 = closed
  elbow.write(150); // increase frm 130 to go up
  shoulder.write(10); // Rest at 0 Range 0-40 for safety
  delay(200);
}
