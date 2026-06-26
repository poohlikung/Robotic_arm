#include <Servo.h>	// ATX2 Board
Servo myservo;
int pin = 9;
int val;
void setup() {
  Serial.begin(9600);++
  myservo.attach(pin);

}

void loop() {
val = analogRead(0);
val = map(val,0,1023,0,180);
myservo.write(val);
Serial.println(val);
delay(15);
}
