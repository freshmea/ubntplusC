const unsigned int led[7] = {2, 3, 4, 5 ,6 ,7 ,8};

const unsigned char N[10]= 
{0b00111111,
0b00000110,
0b01011011,
0b01001111,
0b01100110,
0b01101101,
0b01111101,
0b00100111,
0b01111111,
0b01101111,};

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

void display_number(int n){
  if(0 <= n && n <= 9){
    for(int x=0;x<7;x++){
        digitalWrite(led[x], N[n] & (0x01<<x) );
      }
  }
}
void setup(){
  display_init();
  display_clear();
  Serial.begin(115200);
}

void loop(){
  if(Serial.available()){
    char userInput = Serial.read();
    if('0' <= userInput && userInput <= '9'){
      int num = userInput - '0';
      display_clear();
      display_number(num);
      delay(500);
    }
  }
}