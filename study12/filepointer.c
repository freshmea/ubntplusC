#include <stdio.h>

int main(void){
	FILE *a;
	a = fopen("test.dat", "w");

	if (a == NULL ){
		fprintf(stdout, "can't open file\n");
		return 1;
	}
	printf("%ld\n", sizeof(a));
	fprintf(a, "Pack Jung seok");
	printf("%ld\n", sizeof(a->_ptr));
	fclose(a);
}