#include <stdio.h>

int main(void)
{
	char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	while(1){
		int score;
		printf("input score :");
		scanf("%d", &score);

		//최적화 기법 .배열의 인덱스로 변경 
		char grade = 'F';
		if (score >0 && score <100) {
			grade = grades[score/10];
		}

		printf("score : %d -- %c\n", score, grade);
		}
	return 0;
}