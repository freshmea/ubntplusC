const int LED = 10;

void setup(){
	analogWrite(LED, 25.523);
	Serial.begin(9600)	;
}

void loop(){
	for(int t_high=0; t_high<=2550;t_high++){
		Serial.println(t_high/10);
		analogWrite	(LED, t_high/10);
		delay(4);
	}
	
}