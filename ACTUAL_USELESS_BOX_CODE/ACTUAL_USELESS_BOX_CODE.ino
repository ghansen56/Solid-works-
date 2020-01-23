
#include <Servo.h>;
 
Servo myservo;
 
int switchPin = 4;
int switchState = 0;
int led = 13;
 
void setup()
{
  pinMode(switchPin,INPUT);
  myservo.attach(8);
  pinMode(led, OUTPUT);
}
 
 
void loop()
{
  digitalWrite(led, HIGH);
  switchState = digitalRead(switchPin);
  if(switchState == HIGH) { 
    myservo.write(100); 
    delay(15);
  }
  if(switchState == LOW) { 
    myservo.write(0); 
    delay(15);
  }
}
