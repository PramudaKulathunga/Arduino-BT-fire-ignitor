#include <Servo.h>

Servo servo1;
Servo servo2;

int n;
int t;
void setup() {

  Serial.begin(9600);
  servo1.attach(2);
  servo2.attach(3);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  servo1.write(0);
  servo2.write(80);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == '0') {
      n = 1;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '1') {
      n = 2;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '2') {
      n = 3;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '3') {
      n = 4;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '4') {
      n = 5;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '5') {
      n = 6;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '6') {
      n = 7;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '7') {
      n = 8;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '8') {
      n = 9;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == '9') {
      n = 10;
      t = 200;
      ignite();
      Reset();
    }
    else if (c == 'a') {
      allInRow();
    }
    else if (c == 'r') {
      Random();
    }
    else if (c == 't') {
      timer();
    }
    else if (c == 'q') {
      push();
    }
    else if (c == 'w') {
      pushOut();
    }
  }
}
