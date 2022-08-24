#include "circle.h"

Circle::Circle(int r, int x=0, int y=0)
: Shape(x, y), radius_(r) {}

Circle::Circle(const Shape& rhs)
{
	x_ = getx();
	y_ = gety();
	// radius_ = rhs.radius_; 	// rhs 가 부모 클래스여서 radius_ 멤버가 없음.
}
int Circle::radius() const
{
	return radius_;
}
void Circle::radius(int r)
{
	radius_ = r;
}

double Circle::area() const
{
	return 3.141692 * radius_ * radius_;
}
