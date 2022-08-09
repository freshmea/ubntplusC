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
	for(int i=0;i <= 30;i++){
		push(&qu[0], &i);
		printf("%s's push(): %d, front %d, rear %d\n",name, re, qu[0].front, qu[0].rear);
		push(&qu[0], &i);
		printf("%s's push(): %d, front %d, rear %d\n",name, re, qu[0].front, qu[0].rear);
		pop(&qu[0], &re);
		printf("%s's pop(): %d, front %d, rear %d\n",name, re, qu[0].front, qu[0].rear);
	}

	double re2;
	getName(&qu[1], name);
	for(int i=1;i <= 30;i++){
		double j = (double)500/i;
		push(&qu[1], &j);
		printf("%s's push(): %f, front %d, rear %d\n",name, re2, qu[1].front, qu[1].rear);
		push(&qu[1], &j);
		printf("%s's push(): %f, front %d, rear %d\n",name, re2, qu[1].front, qu[1].rear);
		pop(&qu[1], &re2);
		printf("%s's pop(): %f, front %d, rear %d\n",name, re2, qu[1].front, qu[1].rear);
	}

	char re3;
	getName(&qu[2], name);
	for(int i=1;i <= 30;i++){
		char j = 80+i;
		push(&qu[2], &j);
		printf("%s's push(): %c, front %d, rear %d\n",name, re3, qu[2].front, qu[2].rear);
		push(&qu[2], &j);
		printf("%s's push(): %c, front %d, rear %d\n",name, re3, qu[2].front, qu[2].rear);
		pop(&qu[2], &re3);
		printf("%s's pop(): %c, front %d, rear %d\n",name, re3, qu[2].front, qu[2].rear);
	}

	return 0;
}

