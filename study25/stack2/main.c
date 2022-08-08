#include <stdio.h>
#include "stack.h"

int main(void)
{
	push(100);
	push(200);
	push(300);

	//tos = 0; static 이라서 안됨 

	printf("1st pop() : %d\n",pop());
	printf("2st pop() : %d\n",pop());
	printf("3st pop() : %d\n",pop());
	// for(int i=0;i<10;i++){ static 이라서 안됨.
	// 	printf("stack[%d] : %d\n", i, stack[i]);
	// }
	return 0;
}

