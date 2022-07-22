#include <stdio.h>


//점수 계산
void calScore(int *frameScore,int (*score)[3]){
		for(int i = 0; i<11; ++i){
			frameScore [i] = 0;
		}
		for(int i = 1; i<11; ++i){
			frameScore [i] += frameScore[i-1]+score[i][1]+score[i][2];
			//스트라이크 보너스
			if (score[i][1] == 10){
				frameScore[i] += score[i+1][1]+score[i+1][2];
				if (score[i+1][1] == 10)
					frameScore[i] += score[i+2][1];
			//스페어 보너스
			}else if (score[i][1]+score[i][2] == 10){
				frameScore[i] += score[i+1][1];
			}
		}
	}

int main(void)
{
	// 1~9 인덱스값 0을 쓰지 않기 위해 하나씩 더 큰 공간을 잡음.
	int score[12][3] = {0};
	int frameScore[10] = {0};

	for (int i=1; i<=9; ++i){
	

		// first bowling
		printf("%d frame 1 cast : ", i);
		scanf("%d", &score[i][1]);
		// //점수 계산
		calScore(frameScore, score);

		// (i-1) frame spare? --> (i-1) frame score
		if ((score[i-1][1]+score[i-1][2]) == 10 && ((score[i-1][1] != 10)))
			printf("%d frame : %d\n", i-1, frameScore[i-1]);
		// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
		if ((score[i-2][1] == 10) && (score[i-1][1] == 10))
			printf("%d frame : %d\n", i-2, frameScore[i-2]);

		// second bowling <-- scanf();
		if (score[i][1] == 10) continue;
		printf("%d frame 2 cast : ", i);
		scanf("%d", &score[i][2]);
		// //점수 계산
		calScore(frameScore, score);

		// (i-1) frame strike --> (i-1) frame score
		if (score[i-1][1] == 10)
			printf("%d frame : %d\n", i-1, frameScore[i-1]);
		// i frame first + second < 10 --> i frame score
		if (score[i][1] + score[i][2] < 10 && (i >0))
			printf("%d frame : %d\n", i, frameScore[i]);

	}
	

	// first bowling
	printf("10 frame 1 cast : ");
	scanf("%d", &score[10][1]);
	//점수 계산
	for(int i = 0; i<11; ++i){
		frameScore [i] = 0;
	}
	for(int i = 1; i<11; ++i){
		frameScore [i] += frameScore[i-1]+score[i][1]+score[i][2];
		//스트라이크 보너스
		if (score[i][1] == 10){
			frameScore[i] += score[i+1][1]+score[i+1][2];
			if (score[i+1][1] == 10)
				frameScore[i] += score[i+2][1];
		//스페어 보너스
		}else if (score[i][1]+score[i][2] == 10){
			frameScore[i] += score[i+1][1];
		}
	}

	// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
	if (score[8][1] == 10 && score[9][1] == 10)
		printf("%d frame : %d\n", 8, frameScore[8]);
	// (i-1) frame spare? --> (i-1) frame score
	if ((score[9][1]+score[9][2] == 10) && (score[9][1] != 10))
		printf("%d frame : %d\n", 9, frameScore[9]);


	// second bowling <-- scanf();
	printf("10 frame 2 cast : ");
	scanf("%d", &score[10][2]);
	//점수 계산
	calScore(frameScore, score);
	
	// (i-1) frame strike --> (i-1) frame score
	if (score[9][1] == 10)
		printf("%d frame : %d\n", 9, frameScore[9]);
	// i frame first + second < 10 --> i frame score
	if (score[10][1]+ score[10][2] < 10){
		printf("%d frame : %d\n", 10, frameScore[10]);
		return 0;
	}
	//third bowing
	if(score[10][1] == 10 || score[10][1]+score[10][2] == 10){
		printf("10 frame 3 cast : ");
		scanf("%d", &score[10][3]);
		//점수 계산
		frameScore[10]=frameScore[9]+score[10][1]+score[10][2]+score[10][3]; 

		printf("%d frame : %d\n", 10, frameScore[10]);
	}

	return 0;
}