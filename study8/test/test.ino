const int digitalPin = 4;
const int LED = 2;


int button_prev_input = LOW;
int button_curr_state = LOW;
int led_state = 0;
void setup(){
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  int buttonInput = digitalRead(digitalPin);
  button_curr_state = buttonInput;
  if (button_curr_state == HIGH && button_prev_input == LOW){
    Serial.println("rising EDGE");
  } else if (button_curr_state == LOW && button_prev_input == HIGH){
    Serial.println("falling EDGE");
  }
  button_prev_input = button_curr_state;
}