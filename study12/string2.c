#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ga =  "asdlf;kjnwoqinvaosvop;qiwdoviaoidfjl;kqdwnf;lkasdfo";
	char *str = "wonderful tonight";

	int len = strlen(str);
	printf("len: %d\n", len);

	char str2[200];
	//str2 =str; 안됨. 
	strcpy(str2, ga);
	strcpy(str2, str);
	printf("str2: %s\n", str2);

	for (int i=0;i<200;i++){
		printf("C%d: %c\n", i, str2[i]);
	}
	str2[17]='n';	// 널 없애기.
	if (strcmp(str2, str) == 0 ){
		printf("str and str2 are equal.\n");
	} else {
		printf("str and str2 are not equal.\n");
	}

	return 0;
}