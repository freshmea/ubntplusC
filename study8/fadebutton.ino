const int digitalPin = 4;
const int LED = 3;

int led_state = 0;
void setup(){
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
  // pinMode(LED, OUTPUT);
}

void loop(){
  int buttonInput = digitalRead(digitalPin);
  if(buttonInput == HIGH) {
    for(int t_high=0;t_high<255;t_high++){
      analogWrite(LED, t_high);
      delay(1);
    }
  } else {
    analogWrite(LED, LOW);  
  }

  
}