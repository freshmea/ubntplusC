#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	system("clear");
	for (int i =1;i <= 5;++i){
		for(int j=1;j<=i;++j){
			printf("*");	
		}
		printf("\n");
		sleep(1);
		system("clear");
	}
	
	for (int i =1;i <= 4;++i){
		for(int j=1;j + i<= 5;++j){
			printf("*");	
		}
		printf("\n");
		sleep(1);
		system("clear");
	}
}