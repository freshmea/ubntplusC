//3, 5, 6, 8, 10, 11 만 PWM 제어가 됨. 2, 4, 7, 9번은 안켜지거나 끄고 켜지기만 함. 
const unsigned int led[8] = {2,3,4,5,6,7,8,9};

#define FREQUENCY 0.5  //Hz


void setup(){
  // for(int x=0;x<=7;x++){
  //   pinMode(led[x], OUTPUT);
  // }
}

void loop(){
  for(int x=0;x<=7;x++){
      for(int t_high=0;t_high<=255;t_high++){
        analogWrite(led[x], t_high);
        delay(4); 
      }
    delay(1000/FREQUENCY/8); // 1/4 0.25Hz

    //led 모두 끄기
    for(int x=0;x<=7;x++){
    digitalWrite(led[x], LOW);
  }
  
  }
}