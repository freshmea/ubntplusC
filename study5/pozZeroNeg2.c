#include <stdio.h>

int main(void)
{
	while(1){
		int num;
		printf("input num :");
		scanf("%d", &num);

		// if (num>0){
		// 	printf("%d is positive number.\n", num);
		// } else if (num == 0){
		// 	printf("%d is Zero.\n", num);
		// } else {
		// 	printf("%d is negative number.\n", num);
		// }

		//삼항 연산자 적용 두개
		printf("%d is a %s\n", num, (num>0) ? "Positive": (num<0) ? "Negative" : "Zero");
	}
	return 0;
}