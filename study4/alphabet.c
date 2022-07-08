#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);

	int isAlpha;
	isAlpha = ('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z');

	printf("%c is a alphabet. : %d\n" , ch, isAlpha);
	return 0;
}