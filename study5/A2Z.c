#include <stdio.h>

int main(void)
{
	int i = 'A';
	while(i <= 'Z'){
		printf("%c", i);
		++i;
	}
	printf("\n");

	char ch;
	ch = 'A';
	while(ch <= 'Z'){
		printf("%c", ch);
		++ch;
	}
	printf("\n");


	int j = 'A';
	while('Z'-j+1){
		printf("%c", j++);
	}
	printf("\n");

}