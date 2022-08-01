#include <SoftwareSerial.h>

const byte rxPin = 2;
const byte txPin = 3;

SoftwareSerial mySerial(rxPin, txPin);

void setup(){
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);

  mySerial.begin(9600);
  Serial.begin(9600);   // HC06.TXD < --- > ARDI.Pin0
}

void loop(){
  while(Serial.available()>0){
    char userInput = Serial.read();
    Serial.print(userInput);
    mySerial.write(Serial.read());
  }

  while(mySerial.available()>0){
    Serial.write(mySerial.read());
  }
}
