#include <TimerOne.h>

const int LED = 10;

void setup()
{
  Timer1.initialize();
  Timer1.pwm(LED, 0);

  Timer1.setPeriod(1000000/5); //1Hz
  Timer1.setPwmDuty(LED, 400); // 0~1023
}

void loop()
{
  
}
