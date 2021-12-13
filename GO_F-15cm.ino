#include <Wire.h>
#include <ZumoShield.h>

ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);
int lastError = 0;

const int MAX_SPEED = 400;

void setup() {
  // put your setup code here, to run once:
button.waitForButton();
}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
motors.setSpeeds(400, 400);
delay(250);
motors.setSpeeds(0,0);
delay(20000);
}
