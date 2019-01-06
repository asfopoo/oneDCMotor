
#include </Users/edwardnardo/Desktop/oneDCMotor/SmartInventor.h>

void setup(){
  SmartInventor.DCMotorUse();
  Serial.begin(57600);
}
// A3 ?
//A4 left forward backward
//A5 right left right
//A6 right forward backward
void loop(){
  int joyStick = analogRead(A4);
  if(joyStick > 513){
     SmartInventor.DCMotor(M1, CCW, joyStick);
     Serial.println(joyStick);
  }
  else{
     joyStick = ((joyStick - 513) * (-1));
     SmartInventor.DCMotor(M1, CW, joyStick);
     Serial.println(joyStick);

  }
}

