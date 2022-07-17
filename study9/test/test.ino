const int Trig = 10;
const int Echo = 11;
int temp[3];
int num;

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
  temp[num] = distance;
  ++num;
  if (num>3) num = 0;
  
  distance = 0;
  for (int i=0;i<3;i++) distance += temp[i];
  distance /= 3;
  
  Serial.print(distance);
  Serial.println("  cm");
}