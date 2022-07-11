#include <stdio.h>
// #define 	BOLD 	0x01
// #define 	ITALIC 	0x02
// #define 	SHADOW 	0x04
// #define 	UL	 	0x08

// #define 	BOLD 	0x01
// #define 	ITALIC 	0x01 << 1
// #define 	SHADOW 	0x01 << 2
// #define 	UL	 	0x01 << 3   잘못된 예. 괄호를 써야한다. 

#define 	BOLD 	0x01
#define 	ITALIC 	(0x01 << 1)
#define 	SHADOW 	(0x01 << 2)
#define 	UL	 	(0x01 << 3)


int main()
{
	unsigned char attr;
	unsigned char test;
	attr = attr ^ attr;	
	printf("0 Add BOLD, 1 Add ITALIC, 2 Add SHADOW, 3 Add UL, 4 Delete BOLD, 5 Delete ITALIC, 6 Delete SHADOW, 7 Delete UL");
	while(1){
		//비교하는거 0이 나옴

		int change;
		printf("\ninput change code : ");
		scanf("%d", &change);

		if(change == 0){
			attr = attr | BOLD;
		}
		if(change == 1){
			attr = attr | ITALIC;
		}
		if(change == 2){
			attr = attr | SHADOW;
		}
		if(change == 3){
			attr = attr | UL;
		}

		if(change == 4){
			attr = attr & (~BOLD);
		}
		if(change == 5){
			attr = attr & (~ITALIC);
		}
		if(change == 6){
			attr = attr & (~SHADOW);
		}
		if(change == 7){
			attr = attr & (~UL);
		}


		if ((attr & BOLD) == BOLD){
			printf("BOLD\t");
		} else {
			printf("    \t");
		}
		if ((attr & ITALIC) == ITALIC){
			printf("ITALIC\t");
		} else {
			printf("      \t");
		}
		if ((attr & SHADOW) == SHADOW){
			printf("SHADOW\t");
		} else {
			printf("      \t");
		}
		if ((attr & UL) == UL){
			printf("UL\n");
		} else {
			printf("  \n");
		}
	}
	return 0;
}