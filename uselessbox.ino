#include <Servo.h>
Servo myServo; 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4, INPUT_PULLUP); 
myServo.attach(8);
Serial.println("hello world");
myServo.write(90);


}

void loop() {
  // put your main code here, to run repeatedly:
int sensorVal = digitalRead(4);
Serial.println(sensorVal);
int angle = 0; 

if (sensorVal == HIGH && angle < 180) {
myServo.write(angle++);
  Serial.println("switch1");
  Serial.println(angle);
}
else if(sensorVal == LOW); 
myServo.write;
}
