#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	int answer[3]={0};
	srand(time(NULL));
	int randn = rand();

	//같은 숫장안 나오게 하라는 말은 없었자나...

	question[0] = rand() % 9 +1;

	do {
		question[1] = rand() % 9 +1;
	} while (question[0] == question[1]);
	
	do {
		question[2] = rand() % 9 +1;
	} while (question[0] == question[1] || question[1] == question[2]);


	// 정답 출력 
	// for (int i=0;i<3;++i){
	// 	printf("%d", question[i]);
	// }

	int count = 1;
	for(;;){
		//숫자 입력.
		for(int i=0;i<3;++i){
			printf("input %d's Number : ", i+1 );
			scanf("%d", &answer[i]);
		}

		// 비교 
		int strike = 0;
		int ball = 0;
		//중첩 for 문 
		for(int i=0;i<3;++i){
			for(int j=0;j<3;++j){

				if( question[i] == answer[i]){
					if (i ==j)
						++strike;
					else
						++ball;
				}
			}
		}

		// strike ball 갯수 출력.
		printf("Strike : %d \t Ball : %d\n", strike, ball);

		if (strike == 3)
			break;

		++count;
	}

	printf("Congraturation! your count : %d\n", count);
	return 0;
}