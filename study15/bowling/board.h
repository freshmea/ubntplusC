#ifndef BOARD_H
#define BOARD_H

typedef struct{
	int score[12][3];
	int frameScore[11];
	char name[10];
}Score;

void printBoard(Score *player);
void setScore(int frame, int bow, Score *player);
void setFrameScore(int frame, Score *player);
void initScore(Score *player, const char iname[]);
void calScore(int *frameScore,const int (*score)[3]);
void playGame(Score *player, int i);
void playGame10Frame(Score *player);
#endif