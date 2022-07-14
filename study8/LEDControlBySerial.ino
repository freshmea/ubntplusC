const unsigned int led[8] = {3, 5, 6, 9, 10, 11};


void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0) {
      char userInput = Serial.read();
      switch(userInput){
        case 'n': 
          for(int x=0;x<=5;x++){
            for(int t_high=0;t_high<=255;t_high++){
            analogWrite(led[x], t_high);
            delay(2); 
            }
          }
          break;
        case 'f': 
          //led 모두 끄기
          for(int x=0;x<=7;x++){
          digitalWrite(led[x], LOW);
        default:
          break;
      }
  }

}