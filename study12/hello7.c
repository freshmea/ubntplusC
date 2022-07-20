#include <stdio.h>

int main(void)
{
	// char *str = "hellow, world";
	const char *str = "hellow, world";

	// char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str1 = 'h';
	char str2[] = "hellow, world";
	printf("%s\n", str);
	printf("%c\n", str1);
	printf("%s\n", str2);
	printf("%p\n", str);
	printf("%p\n", &str1);
	printf("%p\n", str2);
	return 0;
}