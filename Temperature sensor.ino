// C++ code
//
#include <Servo.h>

Servo servo_2;

void setup()
{
  pinMode(A1, INPUT);
  servo_2.attach(2, 500, 2500);

  if ((-40 + 0.488155 * (analogRead(A1) - 20)) > 30) {
    servo_2.write(90);
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}