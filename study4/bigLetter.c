#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);

	int isBig;
	isBig = ('A' <= ch && ch <= 'Z');

	printf("%c is a big letter. : %d\n", ch, isBig);
	return 0;

}