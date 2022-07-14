const unsigned int led[8] = {3, 5, 6, 9, 10, 11};


void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0) {
      char userInput = 0;
      userInput = Serial.read();
      if((int)userInput != 10){
        Serial.print((int)userInput);
        if(userInput)
            for(int x=0;x<=5;x++){
              analogWrite(led[x], (25*((int)userInput-48)));
            }
      }
  }

}