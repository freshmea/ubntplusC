#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	srand(time(NULL));
	int randn = rand();

	for (int i=0;i<3;++i){
		switch(i){
			case 0:
				question[i] = randn % 10 ;
				break;
			case 1:
				question[i] = randn % 100 / 10 ;
				break;
			case 2:
				question[i] = randn % 1000 / 100 ;
				break;
		}
		
	}

	for (int i=0;i<3;++i){
		printf("%d", question[i]);
	}

	int count = 0;

	for(;;){
		++count;
		int answer[3]={0};

		for(int i=0;i<3;++i){
			printf("input %d's number : ", i+1 );
			scanf("%d", &answer[i]);
		}

		// compare
		int strike=0;
		int ball=0;
		int stop = 0;
		//볼 카운트 
		for(int i=0;i<3;++i){
			for(int j=0;j<3;++j){
				//스트라이크이면 볼 카운트 멈춤
				if (question[i] == answer[j] && i == j){
					stop = 1;
					break;
				}
				// 볼 카운트가 확인 되면 카운트 하고 멈춤
				if (question[i] == answer[j] && i != j){
					ball += 1;
					stop =1 ;
					break;
				}

				}
				
			if (stop){
					break;
			}
		}
		//스트라이크 체크 
		for(int i=0;i<3;++i){
			if (question[i]==answer[i] ){
				strike += 1;
				break;
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