//공통 양극

const unsigned int led[7] = {2, 3, 4, 5 ,6 ,7 ,8};
const unsigned int com[1+4] = {-1, 9, 10, 11, 12};

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
  for(int y=1;y<=4;y++){
    pinMode(com[y], OUTPUT);
  }
}

void display_clear(){
  for(int x=0;x<7;x++){
    digitalWrite(led[x], HIGH);
  }
  for(int y=1;y<=4;y++){
    digitalWrite(com[y], LOW);
  }
}

void display_number(unsigned int n, unsigned int m){
  display_clear();
  
  if(0 <= n && n <= 9 && 1<=m && m<=4){
    for(int x=0;x<7;x++){
        digitalWrite(led[x], !(N[n] & (0x01<<x)) );
      }
      digitalWrite(com[m], HIGH);
  }
}
void setup(){
  display_init();
  display_clear();
  Serial.begin(115200);
}

void loop(){
  display_number(1, 1);
  delay(1);
  display_number(2, 2);
  delay(1);
  display_number(3, 3);
  delay(1);
  display_number(4, 4);
  delay(1);

}