const unsigned int led[8] = {2,3,4,5,6,7,8,9};
#define FREQUENCY 0.5  //Hz

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

    digitalWrite(led[x], HIGH);
    delay(1000/FREQUENCY/8); // 1/4 0.25Hz 
  }
  
}