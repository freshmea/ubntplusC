#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i =1;i <= 5;++i){
		for(int j=1;j<=6-i;++j){
			printf("*");	
		}
		printf("\n");
	}
	Sleep(1000);
	system("clear");
	for (int i =1;i <= 5;++i){
		for(int j=1;j + i<= 6;++j){
			printf("*");	
		}
		printf("\n");
	}
}