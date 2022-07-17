const int Trig = 10;
const int Echo = 11;

void setup(){
  Serial.begin(115200);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
}

void loop(){
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  long duration = pulseIn(Echo, HIGH);
  long distance = (duration/2)/29.1;

  Serial.print(distance);
  Serial.println("  cm");
}