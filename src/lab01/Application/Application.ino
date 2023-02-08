#include <Servo.h>
Servo servo1;
Servo servo2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo1.attach (2);
  servo1.write (0);
  servo2.attach (3);
  servo2.write (180);
  pinMode(13,OUTPUT);
}

void loop() {
  unsigned int AnalogValue;

  AnalogValue = analogRead(A0);
  if (AnalogValue > 400){
    delay(4000);
    digitalWrite(13,HIGH);
    servo1.write(180);
    servo2.write(0);
    tone(4,6000,500);
  }
  else{
    digitalWrite(13,LOW);
    servo1.write (0);
    servo2.write(180);
  }


Serial.println(AnalogValue);
  // put your main code here, to run repeatedly:

}
