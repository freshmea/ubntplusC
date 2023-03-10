#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	system("clear");
	for (int i =1;i <= 5;++i){
		for(int j=1;j<= 2*i-1;++j){
			printf("*");	
		}
		printf("\n");
	}
	sleep(10);
}