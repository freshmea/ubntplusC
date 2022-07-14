const unsigned int led[8] = {3, 5, 6, 9, 10, 11};


void setup(){
  Serial.begin(9600);
}

int cnt=0;
char d[3];
int dAll;
void loop(){
  if(Serial.available()>0) {
      char userInput = Serial.read();
      Serial.println(userInput);
      if(!(userInput >= '0' && userInput <= '9'))return;

      d[cnt++] = userInput - '0';
      if(cnt == 3){
        int dAll = d[0]*100+d[1]*10+d[2];
        for (int i=0;i<3;i++){
          Serial.println(d[i]);
        }
        Serial.println(dAll);
        for(int x=0;x<=5;x++){
          analogWrite(led[x], dAll);
        }
        cnt = 0;
      }
  }
}