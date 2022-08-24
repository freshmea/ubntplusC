#include "shape.h"

Shape::Shape(int x, int y) : x_(x), y_(y){}
void Shape::move(int x, int y)
{
	x_ = x;
	y_ = y;
}

int Shape::getx()
{
	return x_;
}

int Shape::gety()
{
	return y_;
}
// double Shape::area() const
// {
// 	return x_ * y_;	//can't implement!
// }