#include <stdio.h>

int main(void)
{
	while(1){
		int value1, value2, value3;
		int max, mid, min;
		int temp;
		printf("input three score :");
		scanf("%d %d %d", &value1, &value2, &value3);

		// 첫번째와 둘째를 비교 해서 max min 에 넣음.
		if (value1 > value2){
			max = value1;
			min = value2;
		}else {
			max = value2;
			min = value1;
		}
		// 세번째가 가장 큰지 확인
		if(value3 > max){
			temp = max;
			max = value3;
			mid = temp;
			// 둘째와 셋째를 비교
			if (mid< min){
				temp = mid;
				mid = min;
				min = temp;
			}
			//세번째가 가장 크지 않은 상황에서 가장 작은지 확인
		}else if(value3>min){
			mid = value3;
		}else{
			temp = min;
			min =value3;
			mid = temp;
		}
		printf("Max : %d\nMid : %d\nMin : %d\n", max, mid, min);
	}

	return 0;
}