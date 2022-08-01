#include <SoftwareSerial.h>

const byte rxPin = 2;
const byte txPin = 3;

SoftwareSerial mySerial(rxPin, txPin);

void setup(){
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);

  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()>0){
    mySerial.write(Serial.read());
  }

  while(mySerial.available()>0){
    Serial.write(mySerial.read());
  }
}
