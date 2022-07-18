#include <stdio.h>

int add(int a, int b){
	return a+b;
}

int substract(int a, int b){
	return a-b;
}

int main(void)
{
	int (*fp)(int, int);
	fp = &add; // 함수 이름 자체가 주소값이다. 
	fp = add;
	int re = (*fp)(4,3);//* 없이 써도 된다. 
	re = fp(4,3);
	printf("re : %d\n", re );

	fp = &substract;
	re = (*fp)(4,3);
	printf("re : %d\n", re );

}