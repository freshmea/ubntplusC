#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "AAA BBB CCC DDD FFF";
	// char *str = "AAA BBB CCC DDD FFF"; //이렇게 쓰면 문자열 상수여서 안된다. 
	char str2[] = "111 222 333 444 555";
	char str3[] = "abc def ghi klmnop";
	char *del = " \t\n";

	char *word = strtok(str, del);
	printf("%s\n", word);
	printf("%s\n", str);
	word = strtok(str2, del);
	printf("%s\n", word);
	printf("%s\n", str2);
	word = strtok(str, del);
	printf("%s\n", word);
	printf("%s\n", str);

	do{
		printf("%s\n", word);
	}
	while(word=strtok(NULL, del));
	return 0;
}