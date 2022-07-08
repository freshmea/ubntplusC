#include <stdio.h>
#define and	&&
#define or ||

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);

	if (num < 0){
		num= -num;
	}
	
	printf("abs value : %d\n", num);
	return 0;

}