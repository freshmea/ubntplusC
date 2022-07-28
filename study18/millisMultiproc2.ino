enum { R5 = 1 , R7, C2, C3, R8, C5, R6, R3, R1, C4, C6, R4, C1, R2, C7, C8};
const unsigned int pins[1+16] = {-1, 10, 11, 12, 13, 14, 15, 16, 17, 2, 3, 4, 5, 6, 7, 8, 9};

const unsigned int R[1+8] = { -1, R1, R2, R3, R4, R5, R6, R7, R8};
const unsigned int C[1+8] = { -1, C1, C2, C3, C4, C5, C6, C7, C8};


const int t1_LED = 13;
unsigned int t1_on_off = 0;
unsigned long t1_prev = 0;
const unsigned long t1_delay = 500;

const int t2_LED = 10;
unsigned int t2_on_off = 0;
unsigned long t2_prev = 0;
const unsigned long t2_delay = 800;


void dot_matrix_init(){
  for(int n=1;n<=8;n++){
    pinMode(pins[R[n]], OUTPUT);
    pinMode(pins[C[n]], OUTPUT);
  }
  for(int n=1;n<=8;n++){
    digitalWrite(pins[R[n]], HIGH);
    digitalWrite(pins[C[n]], HIGH);
  }
}

void dot_matrix_draw(const unsigned int image[1+8][1+8]){
 for(int n=1;n<=8;n++){
    if(n>1) digitalWrite(pins[R[n-1]], HIGH);
    if(n==1) digitalWrite(pins[R[8]], HIGH);

    for (int m=1;m<=8;m++){
      if(image[n][m] == 1)
        digitalWrite(pins[C[m]], HIGH);
      else digitalWrite(pins[C[m]], LOW);
    }
  
    for(int m=1;m<=8;m++){
      if(image[n][m] == 1){
        digitalWrite(pins[R[n]], LOW);
        break;
      }
    }
    delay(1);
  }
}

void setup(){
  dot_matrix_init();
}

void loop(){
  unsigned long t1_now = millis();
  if(t1_now - t1_prev >= t1_delay){
    t1_prev = t1_now;
    t1_on_off++;
    if(t1_on_off>1) t1_on_off =0;
    digitalWrite(pins[R[1]], t1_on_off);
  }

  unsigned long t2_now = millis();
  if(t2_now - t2_prev >= t2_delay){
    t2_prev = t2_now;
    t2_on_off++;
    if(t2_on_off>1) t2_on_off =0;
    digitalWrite(pins[R[2]], t2_on_off);
  }


}