#include <stdio.h>

int main(void)
{
	printf("%d %d %d\n", 100, 0144, 0x64);
	printf("%d 0%o 0x%x\n", 100, 100, 100);		
	//d 는 decimal(10)  o  는 hexa-decimal(16)

	printf("%lld\n", 10000000000LL);
	printf("%d %d %d\n", 'A', 'a', '0');
	printf("%c %c %c\n", 65, 97, 48);
	printf("%c %c %c\n", 'A', 'A'+1, 'A'+2);

	return 0;
}