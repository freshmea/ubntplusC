#include <stdio.h>
#include <string.h>


typedef struct{
	int score[12][3];
	int frameScore[10];
	char name[10];
}Score;
//점수 계산

void initScore(Score *player, const char iname[]){
	strcpy(player->name, iname);
	for (int i=0;i<12;i++){
		for(int j=0;j<3;j++){
			player->score[i][j] = 0;
		}
	}
	
}
void calScore(int *frameScore,const int (*score)[3]){
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

void playGame(Score *player, const int i){
	// first bowling
	printf("name : %s\n", player->name);
	printf("%d frame 1 cast : ", i);
	scanf("%d", &player->score[i][1]);
	// //점수 계산
	calScore(player->frameScore, player->score);

	// (i-1) frame spare? --> (i-1) frame score
	if ((player->score[i-1][1]+player->score[i-1][2]) == 10 && ((player->score[i-1][1] != 10)))
		printf("%d frame : %d\n", i-1, player->frameScore[i-1]);
	// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
	if ((player->score[i-2][1] == 10) && (player->score[i-1][1] == 10))
		printf("%d frame : %d\n", i-2, player->frameScore[i-2]);

	// second bowling <-- scanf();
	if (player->score[i][1] == 10) return;
	printf("%d frame 2 cast : ", i);
	scanf("%d", &player->score[i][2]);
	// //점수 계산
	calScore(player->frameScore, player->score);

	// (i-1) frame strike --> (i-1) frame score
	if (player->score[i-1][1] == 10)
		printf("%d frame : %d\n", i-1, player->frameScore[i-1]);
	// i frame first + second < 10 --> i frame score
	if (player->score[i][1] + player->score[i][2] < 10 && (i >0))
		printf("%d frame : %d\n", i, player->frameScore[i]);
}

void playGame10Frame(Score *player){
	printf("%s\n", player->name);
	// first bowling
	printf("10 frame 1 cast : ");
	scanf("%d", &player->score[10][1]);
	//점수 계산
	for(int i = 0; i<11; ++i){
		player->frameScore [i] = 0;
	}
	for(int i = 1; i<11; ++i){
		player->frameScore [i] += player->frameScore[i-1]+player->score[i][1]+player->score[i][2];
		//스트라이크 보너스
		if (player->score[i][1] == 10){
			player->frameScore[i] += player->score[i+1][1]+player->score[i+1][2];
			if (player->score[i+1][1] == 10)
				player->frameScore[i] += player->score[i+2][1];
		//스페어 보너스
		}else if (player->score[i][1]+player->score[i][2] == 10){
			player->frameScore[i] += player->score[i+1][1];
		}
	}

	// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
	if (player->score[8][1] == 10 && player->score[9][1] == 10)
		printf("%d frame : %d\n", 8, player->frameScore[8]);
	// (i-1) frame spare? --> (i-1) frame score
	if ((player->score[9][1]+player->score[9][2] == 10) && (player->score[9][1] != 10))
		printf("%d frame : %d\n", 9, player->frameScore[9]);


	// second bowling <-- scanf();
	printf("10 frame 2 cast : ");
	scanf("%d", &player->score[10][2]);
	//점수 계산
	calScore(player->frameScore, player->score);
	
	// (i-1) frame strike --> (i-1) frame score
	if (player->score[9][1] == 10)
		printf("%d frame : %d\n", 9, player->frameScore[9]);
	// i frame first + second < 10 --> i frame score
	if (player->score[10][1]+ player->score[10][2] < 10){
		printf("%d frame : %d\n", 10, player->frameScore[10]);
	}
	//third bowing
	if(player->score[10][1] == 10 || player->score[10][1]+player->score[10][2] == 10){
		printf("10 frame 3 cast : ");
		scanf("%d", &player->score[10][3]);
		//점수 계산
		player->frameScore[10]=player->frameScore[9]+player->score[10][1]+player->score[10][2]+player->score[10][3]; 

		printf("%d frame : %d\n", 10, player->frameScore[10]);
	}
}
int main(void)
{

	Score player1, player2;
	initScore(&player1, "player1");
	initScore(&player2, "player2");
	printf("Input player1 name: ");
	scanf("%s", player1.name);
	printf("Input player2 name: ");
	scanf("%s", player2.name);

	for (int i=1; i<=9; ++i){

		printf("name1 : %s\n", player1.name);
		printf("name1 : %s\n", player2.name);

		playGame(&player1, i);
		playGame(&player2, i);
	}
	
	playGame10Frame(&player1);
	playGame10Frame(&player2);

	return 0;
}