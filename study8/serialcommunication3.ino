const unsigned int led[8] = {3, 5, 6, 9, 10, 11};
enum {IN0, IN1, IN2, IN3};

void setup(){
  Serial.begin(9600);
}

int state_input =IN0;
unsigned char d0, d1, d2;

void loop(){
  if(Serial.available()) {
      char userInput = Serial.read();
      // newline 값을 처리한다. 
      if(userInput >= '0' && userInput <= '9'){
        if (state_input == IN0){
          state_input = IN1;
          d0 = userInput;
          d0 = d0-'0';
        } else if(state_input ==IN1){
          state_input = IN2;
          d1 = userInput;
          d1 = d1-'0';
        } else if(state_input ==IN2){
          state_input = IN3;
          d2 = userInput;
          d2 = d2-'0';
        }
        Serial.println(d0);
        Serial.println(d1);
        Serial.println(d2);
        int dA = d0*100 + d1*10 + d2 ; 
        Serial.println(dA);

      if (state_input == IN3){
          state_input = IN0;
          for(int x=0;x<=5;x++){
            analogWrite(led[x], dA);
          }
      }
      }
  }

}