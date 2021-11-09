#include <Servo.h>

// create servo object to control a servo
Servo servo1;
Servo servo2;

// twelve servo objects can be created on most boards

int pos1 = 0;    // variable to store the servo position
int pos2 = 0;

void setup() {
  servo1.attach(10); // attaches the servo1 on pin 10 to the servo object
  servo2.attach(11); // attaches the servo2 on pin 11 to the servo object
}

void loop() {

  for (pos2 = 0; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    servo2.write(pos2);              // tell servo2 to go to position in variable 'pos1'
    delay(15); 
  }
    for (pos1 = 0; pos1 <= 180; pos1 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    servo1.write(pos1);              // tell servo1 to go to position in variable 'pos1'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees in steps of 1 degree
    servo1.write(pos1);              // tell servo1 to go to position in variable 'pos1'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees in steps of 1 degree
    servo2.write(pos2);              // tell servo2 to go to position in variable 'pos2'
    delay(15); 
  }
    for (pos1 = 0; pos1 <= 180; pos1 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    servo1.write(pos1);              // tell servo1 to go to position in variable 'pos1'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees in steps of 1 degree
    servo1.write(pos1);              // tell servo1 to go to position in variable 'pos1'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
