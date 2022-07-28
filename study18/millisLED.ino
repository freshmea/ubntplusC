const int LED = 13;
int on_off = 0;

unsigned long t_prev = 0;
const unsigned long t_delay = 1000;

void setup(){
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop(){
  unsigned long t_now = millis();
  if(t_now - t_prev >= t_delay){
    t_prev = t_now;
    Serial.println(t_now);
//    if(on_off) on_off = 0;
//    else on_off = 1;

    on_off++;
    if(on_off>1) on_off = 0;
    digitalWrite(LED, on_off);
  }
}