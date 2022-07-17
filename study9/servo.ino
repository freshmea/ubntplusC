#include <Servo.h>

const int Xin = A1;
const int Yin = A2;
const int KEYin = 2;
const int SERVO = 10;
Servo servo;

void setup(){
  Serial.begin(115200);
  pinMode(KEYin, INPUT);
  servo.attach(SERVO);
  servo.write(0);
}

void loop(){
  int xVal = analogRead(Xin);
  int yVal = analogRead(Yin);
  int buttonVal = digitalRead(KEYin);

  delay(1000);
  for(int cnt=0;cnt<3;cnt++){
    servo.write(0);
    delay(1000);
    servo.write(180);
    delay(1000);
  }
  servo.detach();
}