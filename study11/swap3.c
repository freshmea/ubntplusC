#include <stdio.h>


int a, b; // 전역 변수 남용하면 스파게티 코드가 될 수 있다. 
// 펌웨어 같은 작은 코드에만 쓰고 가능하면 쓰지 말자. 

void swap(void)
{
	int tmp = a;
	a= b;
	b= tmp;
}
int main(void)
{
	a = 100;
	b = 200;
	printf("%d\t%d\n", a, b);
	swap();
	printf("%d\t%d\n", a, b);
	return 0;
}