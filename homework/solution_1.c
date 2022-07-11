#include <stdio.h>

int main(void)
{
	while(1){
		int a, b, c;
		printf("input three score :");
		scanf("%d %d %d", &a, &b, &c);

		if (a>b) {
			// a, b
			if (c>a){
				printf("max: %d mid: %d min: %d\n", c, a, b);
			}else if (c > b){
				printf("max: %d mid: %d min: %d\n", a, c, b);
			}else {
				printf("max: %d mid: %d min: %d\n", a, b, c);
			}
		} else {
			if (c>b){
				printf("max: %d mid: %d min: %d\n", c, b, a);
			}else if (c > a){
				printf("max: %d mid: %d min: %d\n", b, c, a);
			}else {
				printf("max: %d mid: %d min: %d\n", b, a, c);
			}
		}
		// max = value1;
		// //  1번째 숫자와 2번째 숫자를 비교
		// if (value2> max){
		// 	mid = max;
		// 	max = value2;
		// } else {
		// 	mid = value2;
		// }
		// // 3번째 숫자가 가장 큰 수인지 확인 
		// if (value3 > max){
		// 	temp = max;
		// 	max = value3;
		// 	mid = temp;
		// 	// 3번째 숫자가 가장 큰 상태에서 두번째와 세번째를 비교
		// 	if (min> mid){
		// 		temp = mid;
		// 		mid =min;
		// 		min = temp;
		// 	}
		// 	// 세번째가 가장 크지 않은 상황에서 두번째와 세번째를 비교
		// } else if(value3 > mid){
		// 	temp = mid;
		// 	mid = value3;
		// 	min = temp;
		// } else{
		// 	//세번째가 가장 작으면 min에 넣음.
		// 	min = value3;
		// }
	}

	return 0;
}