#include <stdio.h>

int main(void)
{
	while(1){
		int value1, value2, value3;
		int max, mid, min;
		int temp;
		printf("input three score :");
		scanf("%d %d %d", &value1, &value2, &value3);

		max = value1;
		//  1번째 숫자와 2번째 숫자를 비교
		if (value2> max){
			mid = max;
			max = value2;
		} else {
			mid = value2;
		}
		// 3번째 숫자가 가장 큰 수인지 확인 
		if (value3 > max){
			temp = max;
			max = value3;
			mid = temp;
			// 3번째 숫자가 가장 큰 상태에서 두번째와 세번째를 비교
			if (min> mid){
				temp = mid;
				mid =min;
				min = temp;
			}
			// 세번째가 가장 크지 않은 상황에서 두번째와 세번째를 비교
		} else if(value3 > mid){
			temp = mid;
			mid = value3;
			min = temp;
		} else{
			//세번째가 가장 작으면 min에 넣음.
			min = value3;
		}


		printf("Max : %d\nMid : %d\nMin : %d\n", max, mid, min);
	}

	return 0;
}