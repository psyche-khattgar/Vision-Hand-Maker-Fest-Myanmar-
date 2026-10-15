#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Servo pins
const int pin1 = 3;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 9;

void setup() {
  // Attach servos to pins
  servo1.attach(pin1);
  servo2.attach(pin2);
  servo3.attach(pin3);
  servo4.attach(pin4);
}

void loop() {
  // Set angles for all servos (you can adjust individually)
  servo1.write(180); // adjust if needed
  servo2.write(270); // adjust if needed
  servo3.write(200); // adjust if needed
  servo4.write(0); // adjust if needed

  delay(1000); // wait for servo to reach position

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(170);
  delay(1000); // wait for servo to reach position

}
