const unsigned int led[8] = {2,3,4,5,6,7,8,9};
#define FREQUENCY 0.5  //Hz



void redOnoff(int a){
    digitalWrite(led[0], a);
    digitalWrite(led[4], a);
}

void yellowOnoff(int a){
    digitalWrite(led[1], a);
    digitalWrite(led[5], a);
}

void greenOnoff(int a){
    digitalWrite(led[2], a);
    digitalWrite(led[6], a);
}

void whiteOnoff(int a){
    digitalWrite(led[3], a);
    digitalWrite(led[7], a);
}


void setup(){
  for(int x=0;x<=7;x++){
    pinMode(led[x], OUTPUT);
  }
}

void loop(){
  for(int x=0;x<=7;x++){
    

    for(int j=0;j<=7;j++){
    digitalWrite(led[j], LOW);
    }
    
    switch (random(1, 4)){
      case 1:
          redOnoff(1);
          break;
      case 2:
          yellowOnoff(1);
          break;
      case 3:
          greenOnoff(1);
          break;
      case 4:
          whiteOnoff(1);
          break;
    }
    // digitalWrite(led[random(7)], HIGH);
    delay(1000/FREQUENCY/8); // 1/4 0.25Hz 
  }
  
}