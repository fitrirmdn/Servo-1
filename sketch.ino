#include <Servo.h>
Servo myServo;

void setup() {
myServo.attach(3);
delay(100);
}

void loop() {

myServo.write(0);
delay(2000);
myServo.write(180);
delay(2000);
}