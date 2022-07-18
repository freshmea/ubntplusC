#include <stdio.h>

char grade(int score);

int main(void)
{
	while(1){
		int score;
		printf("input score :");
		scanf("%d", &score);
		printf("score : %d -- %c\n", score, grade(score));
	}

	return 0;
}

//학점을 입력 받아서 char로 학점을 리턴한다. 
char grade(int score)
{
	char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	return grades[score/10];
}