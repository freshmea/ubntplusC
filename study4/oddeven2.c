#include <stdio.h>

int main(void)
{
	while(1){
		int num;
		printf("input num: ");
		scanf("%d", &num);
		// if 문 안의 값이 1 이면 찹이므로 1인지 확인할 필요가 없다. 
		if(num%2 /*== 1*/ ){
			printf("%d is a odd number.\n", num);
		} else {
			printf("%d is a even number\n", num);
		}
	}
return 0;
}