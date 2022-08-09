#include <stdio.h>
#include "queue.h"
#define NUMBEROFSTACK 3

int main(void)
{

	Qu qu[NUMBEROFSTACK];
	char sNames[NUMBEROFSTACK][10]={"Choi", "Kim", "Hong"};
	long int datatype[NUMBEROFSTACK]={sizeof(int), sizeof(double), sizeof(char)};
	for(int i=0;i<NUMBEROFSTACK;i++){
		initialize(&qu[i], sNames[i], datatype[i]);
	}
	
	int re;
	char name[10];
	getName(&qu[0], name);
	for(int i=0;i <= 40;i++){
		push(&qu[0], &i);
		// printf("qu0 pushing %d\n", i);
		push(&qu[0], &i);
		// printf("qu0 pushing %d\n", i);
		pop(&qu[0], &re);
		printf("%s's pop(): %d\n",name, re);
	}

	double re2;
	getName(&qu[1], name);
	for(int i=1;i <= 30;i++){
		double j = (double)500/i;
		push(&qu[1], &j);
		push(&qu[1], &j);
		pop(&qu[1], &re2);
		printf("%s's pop(): %f\n",name, re2);
	}

	char re3;
	getName(&qu[2], name);
	for(int i=1;i <= 30;i++){
		char j = 80+i;
		push(&qu[2], &j);
		push(&qu[2], &j);
		pop(&qu[2], &re3);
		printf("%s's pop(): %c\n",name, re3);
	}

	return 0;
}

