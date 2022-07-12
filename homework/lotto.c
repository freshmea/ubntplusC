// 로또 번호 6개가 자동으로 만들어지게.  1~45 번 까지의 숫자 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int nums[7]= {0};
	for (int i=0;i<6;++i){
		nums[i]=rand()%45+1;
		for (int j=0;j<6;++j){
			if (nums[i] == nums[j] && i != j){
				--i;
			}
		}
	}
	for (int i=0;i<6;++i){
			printf("%d ", nums[i]);
	}
	printf("\n");
	
	
}