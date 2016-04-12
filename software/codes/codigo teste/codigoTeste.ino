#include <Servo.h>


Servo motor1;
Servo motor2;

void setup()

{

  // put your setup code here, to run once:
 pinMode(5, INPUT);
 Serial.begin(9600);
motor1.attach(3);
motor2.attach(4);
}

void loop()

{
  if(digitalRead(5) == LOW)
  {
   motor1.write(180);
   motor2.write(0);
  }
   else
     Serial.println("nothing");
      motor1.write(0);
   motor2.write(180);

}   
