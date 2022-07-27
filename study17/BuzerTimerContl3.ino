#include <TimerOne.h>

const int BUZZER = 10;

const int melody[] = {
0, 494, 0, 523, 0, 587, 0, 494, 0, 587, 0, 494, 0, 587

};
const int dTime[] = {
1765, 390, 655, 142, 272, 382, 736, 102, 336, 383, 424, 252, 464, 326
};

#define NOTE_NUMBER 14
void melody1()
{

    for(int note = 0; note < NOTE_NUMBER; note++){
      for(int i = 0; i < 10 ; i++){
        Timer1.setPeriod(1000000/melody[note]);
        delay(dTime[note]/10);
      }
    }
}

void setup()
{
  Timer1.initialize();
  Timer1.pwm(BUZZER, 0);

  Timer1.setPwmDuty(BUZZER, 100); // 0~1023
}

void loop()
{
    melody1();
    Timer1.setPwmDuty(BUZZER, 0);
    delay(100000);
}
