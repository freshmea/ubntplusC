#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
	for(int i =0;i<argc;++i){
		printf("argv[%d] : %s\n", i, argv[i]);
	}

	if (argc != 3){
		printf("[usage] ./add num1 num2\n");
		return 1;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 + num2);
	return 0;
}