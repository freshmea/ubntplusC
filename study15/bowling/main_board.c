
#include "board.h"




int main(void)
{
	setScore(1, 1, 5);
	setScore(1, 2, 4);
	setScore(3, 1, 9);
	setScore(4, 1, 8);

	setScore(5, 1, 9);
	setScore(5, 2, 1);
	setScore(6, 1, 10);

	setScore(10, 1, 0);
	setScore(10, 2, 10);
	setScore(10, 3, 10);

	setFrameScore(1,9);
	setFrameScore(10,100);

	printBoard();

	return 0;
}