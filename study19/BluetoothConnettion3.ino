#include <SoftwareSerial.h>

const byte rxPin = 2;
const byte txPin = 3;

SoftwareSerial mySerial(rxPin, txPin);

void setup(){
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  pinMode(13, OUTPUT);

  mySerial.begin(9600);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
}

void loop(){
  while(Serial.available()>0){
    mySerial.write(Serial.read());
  }

  while(Serial.available()>0){
    // Serial.write(mySerial.read());
    char cmd = Serial.read();
    if(cmd == '0') digitalWrite(13, LOW);
    if(cmd == '1') digitalWrite(13, HIGH);
  }
}