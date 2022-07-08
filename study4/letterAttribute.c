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


	// test = (0x01 << 1) + 0x01; 	//0b00000100
	// //attr = 0;
	// attr = attr ^ attr;			//비교하는거 0이 나옴
	// attr = attr | BOLD;			//0B00000001
	// printf("attr: 0x%02x\n",attr);
	// printf("0x%x", test);
	// attr = attr | (0x01 << 1 + 0x01 ); 
	// printf("attr: 0x%02x\n",attr);	//0B000000101
	// attr = attr & (~BOLD);		//0B00000110


	// attr = 0;
	attr = attr ^ attr;			//비교하는거 0이 나옴
	attr = attr | BOLD;			//0B00000001
	printf("attr: 0x%02x\n",attr);
	attr = attr | (ITALIC+SHADOW); //0B00000011
	printf("attr: 0x%02x\n",attr);	//0B000000101
	attr = attr & (~BOLD);		//0B00000110 = 0x06



	printf("attr: 0x%02x\n",attr);

	return 0;
}