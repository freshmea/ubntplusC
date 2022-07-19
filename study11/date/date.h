#ifndef DATE_H
#define DATE_H

// 구조체 정의는 헤더파일에 넣어야 한다. 
typedef struct {
	int year;
	int month;
	int day;
}Date;

// 선언할때 이름 안 써줘도 된다. 
void printDate(const Date *pd);

#endif