#define echoPin 1 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 4 //attach pin D3 Arduino to pin Trig of HC-SR04
#include <Wire.h>
#include <ZumoShield.h>

ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);
int lastError = 0;

const int MAX_SPEED = 400;
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
  button.waitForButton();
}

void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  


  if (distance < 30)
  {
    motors.setSpeeds(400, 400);
    delay(2000);  
    //motors.setSpeeds(0,0);
    //delay(20000);  
  }
  else
  {
    motors.setSpeeds(-100, 100);
    delay(870);
    motors.setSpeeds(0,0);
    delay(500);
    motors.setSpeeds(100, 100);
    delay(250);
  }
}