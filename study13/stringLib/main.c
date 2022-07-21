#include <stdio.h>
#include "string.h"

int main(void)
{
	char *str = "wonderful tonight";


	int len = my_strlen(str);
	printf("len: %d\n", len);
	char str2[40];
	my_strcpy(str2, str);
	printf("%s\n", str2);
	printf("%s\n", str);

	if (my_strcmp(str2, str) == 0 ){
		printf("str and str2 are equal.\n");
	} else {
		printf("str and str2 are not equal.\n");
	}

	my_strcat(str2, " - "); //concatenation
	my_strcat(str2, "eric claption");

	printf("str2: %s\n", str2);
	return 0;
}