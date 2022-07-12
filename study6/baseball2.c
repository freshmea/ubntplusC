#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	srand(time(NULL));
	int randn = rand();

	question[0] = randn % 10 ;
	question[1] = randn % 100 / 10 ;
	question[2] = randn % 1000 / 100 ;

	//정답 출력 
	// for (int i=0;i<3;++i){
	// 	printf("%d", question[i]);
	// }

	int count = 0;
	for(;;){
		++count;
		int answer[3]={0};

		//숫자 입력.
		for(int i=0;i<3;++i){
			printf("input %d's number : ", i+1 );
			scanf("%d", &answer[i]);
		}

		// 비교 
		int strike = 0;
		int ball = 0;
		for(int i=0;i<3;++i){
			for(int j=0;j<3;++j){

				// 스트라이크 카운트
				if (answer[i] == question[j] && i == j){
					strike += 1;
					break;
				}
				
				// 볼 카운트 
				if (answer[i] == question[j] && i != j){
					ball += 1;
					break;
				}
			}
		}

		// strike ball 갯수 출력.
		printf("Strike : %d \t Ball : %d\n", strike, ball);

		if (strike == 3){
			break;
		}
	}

	printf("Congraturation! your count : %d\n", count);
	return 0;
}