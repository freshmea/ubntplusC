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
	void * fpp;
	fpp = &add; // 함수 이름 자체가 주소값이다. 
	fp = add;
	int re = (*fp)(4,3);//* 없이 써도 된다. 
	re = fp(4,3);
	int ree = (*(int (*)(int,int))fpp)(4,3);
	printf("re : %d\n", re );
	printf("ree : %d\n", ree );

	fp = &substract;
	re = (*fp)(4,3);
	printf("re : %d\n", re );

}