#include <stdio.h>

int main(void)
{
	while(1){

		int score;
		printf("input score :");
		scanf("%d", &score);

		// if (score >= 60){
		// 	printf("score: %d --- pass\n", score);
		// } else {
		// 	printf("score: %d --- fail\n", score);
		// }

		//삼항 연산자 적용.
		printf("score: %d --- %s\n", score, (score>= 60 ? "pass" : "fail"));
	}
	return 0;
}