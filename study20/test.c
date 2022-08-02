#include <stdio.h>

struct abc{
	char Array1[10];
	char Array2[20];
	char Array3[30];
	char Array4[40];
};

void checksize(struct abc (*abc1))
{
	printf("%ld\n", sizeof(abc1->Array1));
	printf("%ld\n", sizeof(abc1->Array2));
	printf("%ld\n", sizeof(abc1->Array3));
	printf("%ld\n", sizeof(*abc1));
}

void checksize2(char *Array)
{
	printf("%ld\n", sizeof(Array));
}

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

	struct abc abc1;
	printf("%ld\n", sizeof(Array)/sizeof(Array[0]));
	printf("%ld\n", sizeof(abc1.Array2)/sizeof(abc1.Array2[0]));

	checksize(&abc1);
	checksize2(Array);

	char *pb = Array;
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(pb));
	checksize2(pb);
	const int *pa =&a;
	printf("%d", *pa);

	const char *p = "world";
	// char * const p = "world"; X
	p= "world";
	printf("%s\n", p);
	return 0;
}