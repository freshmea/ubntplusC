#include "rectangle.h"

Rectangle::Rectangle(int w, int h, int x, int y)
: Shape(x,y), width_(w), height_(h) {}
int Rectangle::width() const
{
	return width_;
}
int Rectangle::height() const
{
	return height_;
}

void Rectangle::width(int w)
{
	width_ = w;
}
void Rectangle::height(int h)
{
	height_ = h;
}

double Rectangle::area() const
{
	return width_ * height_;
}
