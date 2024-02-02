#include <Arduino.h>
int motor1Pin1 = 2;
int motor1Pin2 = 3;
int motor2Pin1 = 4;
int motor2Pin2 = 5;


void setup() {
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void loop() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);

  // digitalWrite(motor2Pin1, HIGH);
  // digitalWrite(motor2Pin2, LOW);


  // digitalWrite(motor1Pin1, LOW);
  // digitalWrite(motor1Pin2, HIGH);

  // // digitalWrite(motor2Pin1, LOW);
  // // digitalWrite(motor2Pin2, HIGH);
  // delay(1000);
}