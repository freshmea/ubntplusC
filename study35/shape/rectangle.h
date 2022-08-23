#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape{
private:
	int width_;
	int height_;
public:
	Rectangle(int w, int h, int x, int y);

	int width() const;
	int height() const;

	void width(int w);
	void height(int h);

	virtual double area() const;
};

#endif