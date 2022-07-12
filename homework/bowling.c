// 볼링 점수를 입력하면 각 판의 점수가 더해져서 나오게 하기 
//1 frame first cast :  입력 
//1 frame second cast :  입력 
//frame : 1 score : 9 <--- 출력 
//2 frame first cast : 입력 
#include <stdio.h>

int main(void)
{
	int score1 = 0;
	int score2 = 0;
	int frame = 1;
	int cast = 1;
	int tscore = 0;
	int strikeOn = 0;
	int spareOn = 0;

	for(;;){
		score1= 0;
		score2= 0;
		printf("%d frame %d cast : ", frame, cast);
		
		if (cast == 1)
			scanf("%d", &score1);
		else
			scanf("%d", &score2);

		//보너스 계산 
		if (strikeOn)
			tscore += score1;
		if (spareOn)
			tscore += score1;
		
		if ( cast == 2 || score1 == 10){
			//스타아리크 온이고 2캐스트일때 계산
			if (strikeOn)
				tscore += score2;

			strikeOn = 0;
			spareOn = 0;

			//스트라이크 와 스페어 처리 
			if(score1 == 10)
				strikeOn = 1;
			else if((score1+score2) == 10)
				spareOn = 1;

			tscore += score1+score2;

			printf("\nframe: %d score: %d\n", frame, tscore);

			++frame;
			cast = 1;	
		}else {
			tscore += score1;
			++cast;	
		}
		if( frame == 11){
			break;
		}
		
	}
}