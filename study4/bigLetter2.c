#include <stdio.h>
#define and	&&
#define or ||

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);

	if ('A' <= ch and ch <= 'Z'){
		printf("%c is a big letter.\n", ch);
	}
	else {
		printf("%c is not a big letter.\n", ch);
	}
	
	return 0;

}