const int digitalPin = 2;

void setup(){
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
}

void loop(){
  int digitalValue = digitalRead(digitalPin);
  Serial.println(digitalValue);
}