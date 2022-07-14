const int digitalPin = 4;
const int LED = 2;

void setup(){
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  int digitalValue = digitalRead(digitalPin);
  digitalWrite(LED, digitalValue);
  Serial.println(digitalValue);
}