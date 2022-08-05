#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

unsigned long rtime = millis();

//void blink(){
//  
//  if(millis()-rtime>200){
//    digitalWrite(8, true);
//    rtime= millis();
//  }
//  else if(millis()-rtime>100)
//    digitalWrite(8, false);
//}

void setup(){
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  mySerial.begin(9600);
}

int rd = 1;

void loop(){
  if(mySerial.available()){
    rd = mySerial.read();
    Serial.print("rd value :");
    Serial.println(rd);
  }
  if (rd ==1)
    digitalWrite(8, true);
  digitalWrite(8, false);
}
