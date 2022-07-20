#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "wonderful tonight";

	char str2[40];
	strcpy(str2, str);
	strcat(str2, " - "); //concatenation
	strcat(str2, "eric claption");

	printf("str2: %s\n", str2);
	return 0;
}n