#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>

int I2C_input = A3;
int I2C_output = A4;
int frontin = 3;
int frontout = 4;
int rightin = 5;
int rightout = 6;
int leftin = 7;
int leftout = 8;
int backin = 9;
int backout = 10;
void setup() {
  // Initialization code here
}

void loop() {
  int frontSensorValue = analogRead(frontin);
  int rightSensorValue = analogRead(rightin);
  int leftSensorValue = analogRead(leftin);
}