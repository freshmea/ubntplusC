#include <stdio.h>

int main(void)
{
	// char *str = "hellow";
	char *str = "hellow";

	char str1[] = {'h', 'e', 'l', 'l', 'o', 'w', '\0'};
	char str2[] = "hellow";
	char * str2_2;
	str2_2 = &str2[0];
	char str3 = 'h';
	char * x = &str[0];

	printf("%p\n", x);
	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str2_2);
	printf("%c\n", str3);
	printf("%p\n", &str);
	printf("%p\n", &str1);
	printf("%p\n", &str2);
	printf("%p\n", &str2_2);
	printf("%p\n", &str3);

	// str[0] = 'H';
	str1[0] = 'H';
	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%c\n", str3);
	printf("%p\n", str);
	printf("%p\n", str1);
	printf("%p\n", str2);
	printf("%p\n", str2_2);
	printf("%c\n", str3);
	return 0;
}