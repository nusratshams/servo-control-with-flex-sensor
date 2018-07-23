
#include <Servo.h>

Servo myservo; 

int flexpin = 0;
int val;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(flexpin);
  val = map(val, 200, 400, 0, 180);
  myservo.write(val);
  delay(15);
}
