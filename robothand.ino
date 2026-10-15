#include <Servo.h>

Servo s1, s2, s3, s4;

int incomingData = 0;

void setup() {
  Serial.begin(9600);

  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
}

void loop() {
  if (Serial.available() > 0) {
    incomingData = Serial.parseInt();

    // Map finger count → servo movement
    if (incomingData == 0) {
      closeAll();
    }
    else if (incomingData == 1) {
      s1.write(180);
    }
    else if (incomingData == 2) {
      s1.write(180);
      s2.write(180);
    }
    else if (incomingData == 3) {
      s1.write(180);
      s2.write(180);
      s3.write(180);
    }
    else if (incomingData >= 4) {
      openAll();
    }
  }
}

void closeAll() {
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
}

void openAll() {
  s1.write(180);
  s2.write(180);
  s3.write(180);
  s4.write(180);
}
