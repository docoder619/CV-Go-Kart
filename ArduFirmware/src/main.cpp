#include <Servo.h>
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
long df, dr, dl, db;
float duration;
void setup() {
    pinMode(I2C_input, INPUT);
    pinMode(I2C_output, OUTPUT);
    pinMode(frontin, INPUT);
    pinMode(frontout, OUTPUT);
    pinMode(rightin, INPUT);
    pinMode(rightout, OUTPUT);
    pinMode(leftin, INPUT);
    pinMode(leftout, OUTPUT);
    pinMode(backin, INPUT);
    pinMode(backout, OUTPUT);
  // Initialization code here
}

void loop() {
  
}