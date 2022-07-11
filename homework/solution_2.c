#include <stdio.h>

int main(void)
{
	while(1){
		int a, b, c;
		printf("input three score :");
		scanf("%d %d %d", &a, &b, &c);

		int max, mid, min;

		if (a>b){
			max = a;
			min = b;
		} else{
			max = b;
			min = a;
		}

		if (c> max){
			mid = max;
			max = c;
		}else if (c >min){
			mid = c;
		}else{
			mid = min;
			min =c;
		}
		printf("max: %d mid: %d min: %d\n", max, mid, min);
		// if (a>b) {
		// 	// a, b
		// 	if (c>a){
		// 		printf("max: %d mid: %d min: %d\n", c, a, b);
		// 	}else if (c > b){
		// 		printf("max: %d mid: %d min: %d\n", a, c, b);
		// 	}else {
		// 		printf("max: %d mid: %d min: %d\n", a, b, c);
		// 	}
		// } else {
		// 	if (c>b){
		// 		printf("max: %d mid: %d min: %d\n", c, b, a);
		// 	}else if (c > a){
		// 		printf("max: %d mid: %d min: %d\n", b, c, a);
		// 	}else {
		// 		printf("max: %d mid: %d min: %d\n", b, a, c);
		// 	}
		// }
	}

	return 0;
}