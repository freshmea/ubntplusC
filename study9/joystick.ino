const int Xin = A1;
const int Yin = A2;
const int KEYin = 2;

void setup(){
  Serial.begin(115200);
  pinMode(KEYin, INPUT);
}

void loop(){
  int xVal = analogRead(Xin);
  int yVal = analogRead(Yin);
  int buttonVal = digitalRead(KEYin);

  Serial.print("X = ");
  Serial.println(xVal, DEC);

  Serial.print("Y = ");
  Serial.println(yVal, DEC);

  Serial.print("Button is ");
  if(buttonVal == HIGH)
    Serial.println("not pressed");
  else Serial.println("PRESSED");
  delay(100);
}