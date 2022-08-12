#include <iostream>
#include "queue.h"

int main(void)
{
	Qu qu1(8);
	Qu qu2(30);

	int re;
	for(int i=0;i< 20;i++){
		qu1.push(i);
		qu1.push(i);
		qu1.push(i);
		qu1.pop(&re);
		printf("1st pop(): %d\n", re);
		qu1.pop(&re);
		printf("1st pop(): %d\n", re);
	}

	for(int i=0;i< 50;i++){
		qu2.push(i);
		qu2.push(i);
		qu2.pop(&re);
		printf("2st pop(): %d\n", re);
	}

	return 0;
}

