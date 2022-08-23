#include "circle.h"

Circle::Circle(int r, int x=0, int y=0)
: Shape(x, y), radius_(r) {}

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
