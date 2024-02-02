#include <Arduino.h>
int motor_1_ctrl_1 = 2;
int motor_1_ctrl_2 = 3;
int motor_2_ctrl_1 = 4;
int motor_2_ctrl_2 = 5;


void setup() {
  pinMode(motor_1_ctrl_1, OUTPUT);
  pinMode(motor_1_ctrl_2, OUTPUT);
  pinMode(motor_2_ctrl_1, OUTPUT);
  pinMode(motor_2_ctrl_2, OUTPUT);
}

void loop() {
}