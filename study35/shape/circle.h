#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape{
private:
	int radius_;
public:
	Circle(int r, int x, int y);
	// virtual ~Circle() {}

	int radius() const;
	void radius(int r);

	virtual double area() const;
};

#endif