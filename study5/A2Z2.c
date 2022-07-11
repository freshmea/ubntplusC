#include <stdio.h>

int main(void)
{
	int i = 'A';
	while(i <= 'Z'){
		printf("%c", i);
		++i;
	}
	printf("\n");

	//for 문을 써서 다시 코딩.
	for (int i='A'; i <= 'Z'; ++i){
		printf("%c", i);
	}
	printf("\n");

	return 0;

}