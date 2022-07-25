#include <stdio.h>
#include <string.h>
#include "board.h"


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
		playGame(&player1, i);
		playGame(&player2, i);
	}
	
	playGame10Frame(&player1);
	playGame10Frame(&player2);

	return 0;
}