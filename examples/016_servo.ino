#include <Servo.h>

Servo myservo;
const int SERVOPIN=9;   //The Servo is connected to pin 9
const int POT=0;        //POT on Analog Pin 0

void setup() {
  // put your setup code here, to run once:
  myservo.attach(SERVOPIN);
  Serial.begin(9600);    //Serial Port at 9600 baud
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(POT);           //Read Pot
  int rad = map(val, 0, 1023, 0, 120); //scale it to servo range 
  myservo.write(rad);              // sets the servo 
  delay(15);  
  Serial.print("rad: ");  
  Serial.println(rad);
  
}
