#include <stdio.h>

void printStrings(char (*pArr)[20], int size)
{
	for (int i = 0; i < size; ++i){
		printf("%s\n", &pArr[i][0]); 	//printf("%s\n", pArr[i]); 
		printf("%p\n", pArr[i]);
	}
}

// 이중 포인터로 쓰면 문자열을 복사해 오지 않아서 빠르다. 하지만 변경 불가능.
void printStrings2(char **pArr, int size)
{
	for (int i =0; i < size; ++i){
		printf("%s\n", pArr[i]);		//printf("%s\n", &pArr[i][0]);
		printf("%p\n", pArr[i]);
	}
}

int main(void)
{
	char cities[][20]={"Seoul", "LosAngeles", "Rio dejaneiro", "Paris", "Moscow"};

	char* cities2[] = {
		"Seoul", "LosAngeles", "Rio dejaneiro", "Paris", "Moscow"
	};

	printStrings(cities, 5);
	printStrings2(cities2, 5);

	cities[0][0] = 'p';
	printStrings(cities, 5);
	// 오류가 남.
	// cities2[0][0] = 'p';
	// printStrings2(cities2, 5);
	return 0;
}