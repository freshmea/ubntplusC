// 볼링 점수를 입력하면 각 판의 점수가 더해져서 나오게 하기 
//1 frame first cast :  입력 
//1 frame second cast :  입력 
//frame : 1 score : 9 <--- 출력 
//2 frame first cast : 입력 
#include <stdio.h>

int main(void)
{
	int score[21] = {0};
	int iscore = 0;
	int frame = 1;
	int cast = 1;
	int try = 0;
	int tscore = 0;
	int strikeOn = 0;
	int spareOn = 0;

	for(;;){
		iscore = 0;
		printf("%d frame %d cast : ", frame, cast);

		scanf("%d", &iscore);
		printf("%d\n", try);
		score[try] = iscore;

		++try;
		if (iscore == 10 && cast != 2)
			++try;

		//점수 더하기
		tscore += iscore;
		//보너스 더하기 
		if(iscore == 10) strikeOn = 1;
		if(score[try]+score[try-1] == 10 ){
			spareOn = 1;
		}

		if ( cast == 2 || iscore == 10){

			printf("\nframe: %d score: %d\n", frame, tscore);
			++frame;
			cast = 1;	
		}else {
			++cast;	
		}

		if( frame == 11){
			for(int i=0;i<21;++i)
				printf("%d", score[i]);
			break;
		}
		
	}
}