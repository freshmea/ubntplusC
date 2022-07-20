#include <stdio.h>

int main(void)
{
	// char *str = "hellow, world";
	const char *str = "hellow, world";

	char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'};

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%p\n", str);
	printf("%p\n", str1);
	return 0;
}