const int pins[6] = {3, 5, 6, 9, 10,11};
const int Button = 2;

void setup(){
  Serial.begin(9600);
  pinMode(Button, INPUT);
}

void loop(){
    int buttonInput = digitalRead(Button);
    if(buttonInput == HIGH){
        for(int x=0;x<6;x++){
          for(int i=0;i<6;i++){
            analogWrite(pins[i], LOW);
          }
          analogWrite(pins[x], 255);
          int buttonInput = digitalRead(Button);
          if(buttonInput == LOW) break;

          delay(50);
        }
    }
}