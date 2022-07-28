const unsigned int led[7] = {2, 3, 4, 5 ,6 ,7 ,8};


const unsigned int num_0[7] = { 1, 1, 1 ,1 , 1, 1, 0 }; // 0
const unsigned int num_1[7] = { 0, 1, 1 ,0 , 0, 0, 0 }; // 1
const unsigned int num_2[7] = { 1, 1, 0 ,1 , 1, 0, 1 }; // 2
const unsigned int num_3[7] = { 1, 1, 1 ,1 , 0, 0, 1 }; // 3
const unsigned int num_4[7] = { 0, 1, 1 ,0 , 0, 1, 1 }; // 4
const unsigned int num_5[7] = { 1, 0, 1 ,1 , 0, 1, 1 }; // 5
const unsigned int num_6[7] = { 1, 0, 1 ,1 , 1, 1, 1 }; // 6
const unsigned int num_7[7] = { 1, 1, 1 ,0 , 0, 1, 0 }; // 7
const unsigned int num_8[7] = { 1, 1, 1 ,1 , 1, 1, 1 }; // 8
const unsigned int num_9[7] = { 1, 1, 1 ,1 , 0, 1, 1 }; // 9


const unsigned char N_0= 0b00000000;
const unsigned char N_1= 0b00000000;
const unsigned char N_2= 0b00000000;
const unsigned char N_3= 0b00000000;
const unsigned char N_4= 0b00000000;
const unsigned char N_5= 0b00000000;
const unsigned char N_6= 0b00000000;
const unsigned char N_7= 0b00000000;
const unsigned char N_8= 0b00000000;
const unsigned char N_9= 0b00000000;

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
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_2[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_3[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_4[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_5[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_6[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_7[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_8[x]);
  }
  delay(500);
  for(int x=0;x<7;x++){
    digitalWrite(led[x], num_9[x]);
  }
  delay(500);

}