#ifndef SHAPE_H
#define SHAPE_H

class Shape{	//Abstract Base Class(ABC) 12번 라인 때문에 abc 가 됨. 
protected:
	int x_;
	int y_;
public:
	explicit Shape(int x=0, int y=0);
	virtual ~Shape(){}	// 헤더에서 바로 함수 정의 .

	void move(int x, int y);
	virtual double area() const =0;	// pure virtual function
	int getx();
	int gety();
};
#endif