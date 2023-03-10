#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int score[12][3];
	int frameScore[11];
	char name[10];
}Score;


static char board[7][50] = {
	"-------------------------------------------",
	"| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10  |",
	"-------------------------------------------",
	"| | | | | | | | | | | | | | | | | | | | | |", 
	"-------------------------------------------",
	"|   |   |   |   |   |   |   |   |   |     |",
	"-------------------------------------------",
};

void printBoard(Score *player)
{
	// system("clear");
	printf("\n\n\nPlayer name: %s\n", player->name);
	for (int i=0;i<7;i++){
		printf("%s\n", board[i]);
	}
}

void setScore(int frame, int bow, Score *player)
{
	for(int i =1;i<=frame;i++){
		for(int j=1;j<=2;j++){
			board[3][1+(i-1)*4+(j-1)*2] = ' ';
		}
	}
	if(frame == 10 && bow == 1){
		board[3][1+(frame-1)*4] = ' ';
		board[3][1+(frame-1)*4+2] = ' ';
		board[3][1+(frame-1)*4+4] = ' ';
	}
	for(int i =1;i<=frame;i++){
		for(int j=1;j<=2;j++){
			if(i == frame && bow == 1 && j == 2 && i<= 9) break;
			if (player->score[i][j] == 10 && j == 1){
				board[3][1+(i-1)*4+(j-1)*2] = 'X';
			}else if (player->score[i][j] == 10 && i == 10 && j == 2){
				board[3][1+(i-1)*4+(j-1)*2] = 'X';
			}else if (player->score[i][j]+player->score[i][j-1] == 10 && j ==2 && player->score[i][j-1] != 10){
				board[3][1+(i-1)*4+(j-1)*2] = '/';
			}else if(player->score[i][j]+player->score[i][j-1] < 10)
				board[3][1+(i-1)*4+(j-1)*2] = player->score[i][j]+'0';
		}
	}
	if(frame == 10 && bow == 3)
		if (player->score[10][3] == 10)
				board[3][1+(10-1)*4+(3-1)*2] = 'X';
		else board[3][1+(10-1)*4+(3-1)*2] = player->score[10][3]+'0';
}

void setFrameScore(int frame, Score *player)
 {
 	char buf[4];
	sprintf(buf, "%3d", player->frameScore[frame]);
	strncpy(board[5]+(frame-1)*4+1, buf, 3);
 }

void initScore(Score *player, const char iname[])
{
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

void playGame(Score *player, int i){
	// first bowling
	printf("Player : %s\n", player->name);
	printf("%d frame 1 cast : ", i);
	scanf("%d", &player->score[i][1]);
	setScore(i, 1, player);
	// //점수 계산
	calScore(player->frameScore, player->score);
	printBoard(player);

	// (i-1) frame spare? --> (i-1) frame score
	if (((player->score[i-1][1])+(player->score[i-1][2])) == 10 && ((player->score[i-1][1] != 10)))
		setFrameScore(i-1, player);
		printBoard(player);
	// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
	if ((player->score[i-2][1] == 10) && (player->score[i-1][1] == 10))
		setFrameScore(i-2, player);
		printBoard(player);
	// second bowling <-- scanf();
	if (player->score[i][1] == 10) return;
	printf("Player : %s\n", player->name);
	printf("%d frame 2 cast : ", i);
	scanf("%d", &player->score[i][2]);
	setScore(i, 2, player);
	// //점수 계산
	calScore(player->frameScore, player->score);
	printBoard(player);

	// (i-1) frame strike --> (i-1) frame score
	if (player->score[i-1][1] == 10)
		printf("%d frame : %d\n", i-1, player->frameScore[i-1]);
		setFrameScore(i-1, player);
		printBoard(player);
	// i frame first + second < 10 --> i frame score
	if ((player->score[i][1]) + (player->score[i][2]) < 10 && (i >0))
		printf("%d frame : %d\n", i, player->frameScore[i]);
		setFrameScore(i, player);
		printBoard(player);
}

void playGame10Frame(Score *player){
	printf("Player : %s\n", player->name);
	// first bowling
	printf("10 frame 1 cast : ");
	scanf("%d", &player->score[10][1]);
	setScore(10, 1, player);
	//점수 계산
	calScore(player->frameScore, player->score);
	printBoard(player);
	// (i-2) frame strike && (i-1) frame strike --> (i-2) frame score
	if (player->score[8][1] == 10 && player->score[9][1] == 10)
		setFrameScore(8, player);
		printBoard(player);
	// (i-1) frame spare? --> (i-1) frame score
	if ((player->score[9][1]+player->score[9][2] == 10) && (player->score[9][1] != 10))
		setFrameScore(9, player);
		printBoard(player);

	// second bowling <-- scanf();
	printf("Player : %s\n", player->name);
	printf("10 frame 2 cast : ");
	scanf("%d", &player->score[10][2]);
	setScore(10, 2, player);
	//점수 계산
	calScore(player->frameScore, player->score);
	printBoard(player);
	// (i-1) frame strike --> (i-1) frame score
	if (player->score[9][1] == 10)
		setFrameScore(9, player);
		printBoard(player);
	// i frame first + second < 10 --> i frame score
	if (player->score[10][1]+ player->score[10][2] < 10){
		setFrameScore(10, player);
		printBoard(player);
	}
	//third bowing
	if(player->score[10][1] == 10 || player->score[10][1]+player->score[10][2] == 10){
		printf("Player : %s\n", player->name);
		printf("10 frame 3 cast : ");
		scanf("%d", &player->score[10][3]);
		setScore(10, 3, player);
		//점수 계산
		player->frameScore[10]=player->frameScore[9]+player->score[10][1]+player->score[10][2]+player->score[10][3]; 

		setFrameScore(10, player);
		printBoard(player);
	}
}