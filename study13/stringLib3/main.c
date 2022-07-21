#include <stdio.h>
#include "string.h"

int main(void)
{
	char str[] = "AAA BBB CCC DDD EEE FFF";
	char str2[] = "123 456 789 111 ";
	char *del = " \t\n";

	char *word = my_strtok(str, del);
	printf("%s\n", word);
	// printf("%s\n", str+4);
	// word = my_strtok(NULL, del);
	// printf("%s\n", word);

	while(word = my_strtok(NULL, del) )
		printf("%s\n", word);

	word = my_strtok(str2, del);
	printf("%s\n", word);
	while(word = my_strtok(NULL, del) )
		printf("%s\n", word);
	
	
	return 0;
}