const unsigned int led[7] = {2, 3, 4, 5 ,6 ,7 ,8};


const unsigned int num_0[7] = { 1, 1, 1 ,1 , 1, 1, 0 }; // 0
const unsigned int num_1[7] = { 0, 1, 1 ,0 , 0, 0, 0 }; // 1


void display_init(){
  for(int x=0;x<7;x++){
    pinMode(led[x], OUTPUT);
  }
}

void display_clear(){
  for(int x=0;x<7;x++){
    digitalWrite(led[x], LOW);
  }
}

void setup(){
  display_init();
  display_clear();
}

void loop(){
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_0[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_1[x]);
  }
  delay(500);
}