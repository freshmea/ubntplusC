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
    if(analogValue>1024/7*(1+i))
      digitalWrite(pins[i], HIGH);
    else digitalWrite(pins[i], LOW);
 }
  
}