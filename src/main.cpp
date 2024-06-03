#include <Arduino.h>
int motor1Pin1 = 2;
int motor1Pin2 = 3;
int motor2Pin1 = 4;
int motor2Pin2 = 5;
int lineSensor1 = 8;
int lineSensor2 = 9;
int i = 0;
int j = 0;

void setup() {
  delay(20000);
  pinMode(lineSensor1, INPUT);
  pinMode(lineSensor2, INPUT);
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void driveMotor(bool drive1, bool drive2) {
  int hiLow1;
  int hiLow2;
  if (drive1==true && drive2==false) {
    hiLow1 = HIGH;
    hiLow2 = LOW;
  }
  else if (drive1==false && drive2==true) {
    hiLow1 = LOW;
    hiLow2 = HIGH;
  }
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, hiLow1);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, hiLow2);
}

void loop() {
  if (j == 0 && digitalRead(lineSensor1)==HIGH && digitalRead(lineSensor2)==HIGH) {
    driveMotor(true, false);
    j++;
  }
  else {
    if (digitalRead(lineSensor1)==LOW) {
      driveMotor(true, false);
    }
    else if (digitalRead(lineSensor2)==LOW) {
      driveMotor(false, true);
    }
  }
}