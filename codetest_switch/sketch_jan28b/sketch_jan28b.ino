#include <Servo.h>  // ATX2 Board
Servo myservo;
int pin = A0;
int sw = A5;
int led1 = 13;
void setup() {
  pinMode(A5, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
  myservo.attach(pin);
}
void loop() {
  int var = analogRead(A5);
  Serial.println(var);
  if (var <= 14) {
    myservo.write(180);
  }
  else if (var == 41) {
    myservo.write(0);
  }
  delay(100);

}
