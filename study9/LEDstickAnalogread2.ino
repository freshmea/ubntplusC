const int pins[6] = {3, 5, 6, 9, 10,11};
const int analogPin = A0;


void setup(){
  Serial.begin(9600);
  for(int i=0;i<6;i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop(){
  int analogValue = analogRead(analogPin);
  for(int i=0;i<6;i++){
    if(analogValue/146 < 1+i)
      analogWrite(pins[i], HIGH);
    else if(analogValue/146 > 0+i)
      analogWrite(pins[i], int(analogValue%146/146.0*255));
 }
  
}