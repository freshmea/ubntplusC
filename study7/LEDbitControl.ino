const unsigned int led[8] = {2,3,4,5,6,7,8,9};
unsigned char ledbit;
#define FREQUENCY 0.05  //Hz
#define   LED1  0x01
#define   LED2  (0x01 << 1)
#define   LED3  (0x01 << 2)
#define   LED4  (0x01 << 3)
#define   LED5  (0x01 << 4)
#define   LED6  (0x01 << 5)
#define   LED7  (0x01 << 6)
#define   LED8  (0x01 << 7)


void setup(){
  for(int x=0;x<=7;x++){
    pinMode(led[x], OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  for(int x=0;x<=7;x++){
    // ledbit = ledbit^ledbit;
    // Serial.println(ledbit);
    // ledbit = ledbit | LED1;
    // Serial.println(ledbit);
    // ledbit = ledbit | LED2;
    // Serial.println(ledbit);
    // ledbit = ledbit | LED3;
    Serial.println(ledbit);
    ledbit = ledbit | LED4;
    Serial.println(ledbit);
    ledbit = ledbit | LED5;
    Serial.println(ledbit);
    ledbit = ledbit | LED6;
    Serial.println(ledbit);
    ledbit = ledbit | LED7;
    Serial.println(ledbit);
    ledbit = ledbit | LED8;
    Serial.println(ledbit);


    //led  비트를 확인해서 led 조작
    if ((ledbit & LED1) == LED1){
      digitalWrite(led[0], HIGH);
    }
    if ((ledbit & LED2) == LED2){
      digitalWrite(led[1], HIGH);
    }
    if ((ledbit & LED3) == LED3){
      digitalWrite(led[2], HIGH);
    }
    if ((ledbit & LED4) == LED4){
      digitalWrite(led[3], HIGH);
    }
    if ((ledbit & LED5) == LED5){
      digitalWrite(led[4], HIGH);
    }
    if ((ledbit & LED6) == LED6){
      digitalWrite(led[5], HIGH);
    }
    if ((ledbit & LED7) == LED7){
      digitalWrite(led[6], HIGH);
    }
    if ((ledbit & LED8) == LED8){
      digitalWrite(led[7], HIGH);
    }
    delay(500);

    for(int j=0;j<=7;j++){
      digitalWrite(led[j], LOW);
    }
    
    }
    delay(1000/FREQUENCY/8); // 1/4 0.25Hz 
  }
