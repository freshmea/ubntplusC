#include <stdio.h>

int main(void)
{
	// char str[5];

	// printf("문자열 입력: ");
	// fgets(stdout, str);
	// puts("입력된 문자열: ");
	// puts(str);

	int a= 10;
	int b= 20;

	// const int *pa ;
	// *pa = &a;
	char Array[10]="hi";
	printf("%ld\n", sizeof(Array));
	char *pb = Array;
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(pb));
	const int *pa =&a;
	printf("%d", *pa);

	const char *p = "world";
	// char * const p = "world"; X
	p= "world";
	printf("%s\n", p);
	return 0;
}