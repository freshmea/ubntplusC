const int pins[6] = {3, 5, 6, 9, 10,11};
const int analogPin = A0;


void setup(){
  Serial.begin(9600);
}

void loop(){
 int analogValue = analogRead(analogPin);
 for(int i=0;i<6;i++)
    analogWrite(pins[i], map(analogValue, 0, 1024,0,255));
  
}