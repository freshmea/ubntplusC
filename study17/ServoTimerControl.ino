#include <TimerOne.h>

const int SERVO = 10;

const int SERVO_PERIOD = 20000; //us
const int SERVO_MINDUTY = (1024/20)*0.7; // =35
const int SERVO_MAXDUTY = (1024/20)*2.3; // =117

void setup()
{
  Timer1.initialize();
  Timer1.pwm(SERVO, 0);

  Timer1.setPeriod(SERVO_PERIOD);
  Timer1.setPwmDuty(SERVO, SERVO_MINDUTY); // 0~1023

  delay(1000);

  for (int cnt = 0; cnt<=2;cnt++){
    Timer1.setPwmDuty(SERVO, SERVO_MINDUTY);
    delay(1000);
    Timer1.setPwmDuty(SERVO, SERVO_MAXDUTY);
    delay(1000);
  }

  Timer1.disablePwm(SERVO);
}

void loop()
{

}
