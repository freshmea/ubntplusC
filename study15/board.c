#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char board[7][50] = {
	"-------------------------------------------",
	"| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10  |",
	"-------------------------------------------",
	"| | | | | | | | | | | | | | | | | | | | | |", 
	"-------------------------------------------",
	"|   |   |   |   |   |   |   |   |   |     |",
	"-------------------------------------------",
};

int main(void)
{
	system("clear");

	board[3][1] = '9';
	board[3][3] = '0';
	board[3][5] = 'X';

	//score 위치.
	int i =5;
	int j =2;
	board[3][1+(i-1)*4+(j-1)*2]='/';

	//프레임 스코어
	// board[5][1] = '100';
	char buf[4];
	sprintf(buf, "%3d", 100);
	strncpy(board[5]+1, buf, 3);
	// sprintf(&board[5][1], "%3d", 100);

	for (int i=0;i<7;i++){
		printf("%s\n", board[i]);
	}
	return 0;
}