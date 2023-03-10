#include <stdio.h>

int main(void)
{
	printf("apple이 저장된 시작 주소값 : %p\n", "apple");
	printf("첫 번째 문자  : %f\n", (float)*("apple"));

	// int str[] = {'a','p','p','l','e'};
	char str[] = "apple is delicious";
	printf("char size : %ld\n", sizeof(char));
	printf("int size : %ld\n", sizeof(int));
	printf("float size : %ld\n", sizeof(float));
	printf("변수 : %s\n", str);
	printf("변수 : %s\n", &str[0]);	
	printf("변수 주소값 : %p\n", str);
	printf("변수 주소값 : %p\n", str+1);
	printf("변수 주소값 : %p\n", str+2);
	printf("변수 주소값 : %p\n", str+3);
	printf("변수 int값 : %d\n", str[0]);
	float *str2 = (float*)str;	// 자료를 플로트형으로 변환
	printf("변수 주소값 : %p\n", str2);
	printf("변수 주소값 : %p\n", str2+1);
	printf("변수 주소값 : %p\n", str2+2);
	printf("변수 주소값 : %p\n", str2+3);
	printf("변수 부동소수값 : %f\n", str2[0]);
	printf("변수 부동소수값 : %f\n", str2[1]);
	printf("변수 부동소수값 : %f\n", str2[2]);

	// printf("변수 주소값 : %f\n", (float)str);
}