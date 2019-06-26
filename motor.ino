/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald

  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#define Switch D3
//#define myservo D2
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
 pinMode(Switch,INPUT);
  myservo.attach(D2);  // attaches the servo on GIO2 to the servo object
  Serial.begin(9600);
}

void loop() {
  boolean state;
  state=digitalRead(Switch);
  Serial.println(state);
    if(state==HIGH)
    {
      myservo.write(40);
    }
    else
         {
      myservo.write(0);
    }    
}
