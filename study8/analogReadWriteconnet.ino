const int LED = 10;

void setup(){
  Serial.begin(9600)  ;
}

int i;
void loop(){
  for( i = 0;i<255;i++){
    analogWrite(LED, i);
    delay(300);
    Serial.println(i);
    Serial.println(analogRead(A0));
    delay(300);
  }
  
}