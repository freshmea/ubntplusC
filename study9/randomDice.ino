const int pins[6] = {3, 5, 6, 9, 10,11};
const int Button = 2;


int button_prev_input = LOW;
int button_curr_state = LOW;
int led_state = 0;
int change;

void setup(){
  Serial.begin(9600);
  pinMode(Button, INPUT);
}

void loop(){
  int buttonInput = digitalRead(Button);
  button_curr_state = buttonInput;
  if (button_curr_state == HIGH && button_prev_input == LOW){
    Serial.println("rising EDGE");
    change = 1;
  } else if (button_curr_state == LOW && button_prev_input == HIGH){
    Serial.println("falling EDGE");
  }
  button_prev_input = button_curr_state;

  if (change){
    for(int i=0;i<6;i++){
      analogWrite(pins[i], LOW);
    }
    analogWrite(pins[random(0,7)], HIGH);
    change=0;
  }
}