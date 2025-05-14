#include <Servo.h>
Servo ServoRight;
Servo ServoLeft; 
void setup() {
  // put your setup code here, to run once:
  ServoRight.attach(9);
  ServoLeft.attach(10);

}

void loop() {
  // forward
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1300);
  delay(4000);
  // turn right
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1700);
  delay(600);
   // forward
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1300);
  delay(4000);
  // turn right
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1700);
  delay(600);
// forward
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1300);
  delay(4000);
  // turn right
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1700);
  delay(600);
  // forward
  ServoRight.writeMicroseconds(1700);
  ServoLeft.writeMicroseconds(1300);
  delay(4000);
  // stop command
  ServoRight.writeMicroseconds(1500);
  ServoLeft.writeMicroseconds(1500);
  delay(1000);

}
