#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
using namespace std;

void printArea(const Shape *ps)
{
	if(typeid(*ps) == typeid(Rectangle)){
		cout << "rectangle ";	
	} else if(typeid(*ps) == typeid(Circle)){
		cout << "circle ";
	} // else {}
	cout << "area" << '\t' << " : "<< ps->area() << endl;
}

int main()
{
	Shape *shapes[5];
	shapes[0] = new Rectangle(50, 30, 100, 100 );
	shapes[1] = new Rectangle(0, 0, 200, 100 );
	shapes[2] = new Circle(100, 300, 100 );
	shapes[3] = new Rectangle(50, 50, 400, 100 );
	shapes[4] = new Circle(30, 500, 100 );

	for(int i=0;i<5;++i){
		printArea(shapes[i]);
	}

	for(int i=0;i<5;++i){
		delete shapes[i];
	}
	return 0;
}
