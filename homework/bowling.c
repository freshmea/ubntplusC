// 볼링 점수를 입력하면 각 판의 점수가 더해져서 나오게 하기 
//1 frame first cast :  입력 
//1 frame second cast :  입력 
//frame : 1 score : 9 <--- 출력 
//2 frame first cast : 입력 
#include <stdio.h>

int main(void)
{
	int score[23] = {0};
	int scoreBonus[10] = {0};
	int iscore = 0;
	int frame = 1;
	int cast = 1;
	int try = 0;
	int tscore[10] = {0};

	for(;;){
		iscore = 0;
		printf("%d frame %d cast : ", frame, cast);
		scanf("%d", &iscore);
		score[try] = iscore;

		++try;
		if (iscore == 10 && cast != 2 && try < 19 )
			++try;

		if ( ((cast == 2 ) || (iscore == 10)) && try < 19){
			++frame;
			cast = 1;	
		}else {
			++cast;	
		}

		//보너스 계산 
		for(int i=0;i<9;i++){
			//스트라이크 일 때 보너스
			if(score[i*2] == 10 ){
				if (i == 9) scoreBonus[i] = score[i*2+1]+score[i*2+2];
				else scoreBonus[i] = score[i*2+2]+score[i*2+3];

				if(score[i*2+2] == 10 && score[i*2+3] == 0 )
					scoreBonus[i] += score[i*2+4];
			//스페어 일 때 보너스 
			} else if(score[i*2]+score[i*2+1] == 10){
				scoreBonus[i] = score[i*2+2];
			}
		}

		//누적 점수 계산 
		for(int j=0;j<10;j++)
			tscore[j] = 0;
		for(int j=0;j<10;j++){
			if (j == 0) tscore[j] = score[j*2]+score[j*2+1];
			else tscore[j] += tscore[j-1]+score[j*2]+score[j*2+1];
			if (j ==9) tscore[j] += score[20];
			tscore[j] += scoreBonus[j];
		}

		if(  (cast == 4 ) || (try == 20 && (score[18]+score[19]<10))) {
			printf("Frame Score: \t Bomus: \t Totalscore: \n");
			for(int i=0;i<10;++i)
				printf(" %d \t %d \t %d \t\t %d\n", score[i*2], score[i*2+1], scoreBonus[i], tscore[i]);
			printf(" %d \n", score[20]);
			break;
		}
		
	}
}