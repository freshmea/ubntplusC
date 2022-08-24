#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
using namespace std;

void printArea(const Shape *ps)
{
	if(typeid(*ps) == typeid(Rectangle)){	//RTTI: RunTime Type Identification
		cout << "rectangle " << endl;	
		// Rectangle *pRec = (Rectangle *)ps;
		const Rectangle *pRec = dynamic_cast<const Rectangle *>(ps);
		// 부모 형의 포인터로는 자식클래스의 메소드로 접근하지 못한다. 이때 RTTI를 쓴다. 
		cout << "width : " << pRec->width() << ", height : " << pRec->height() << ", ";
	} else if(typeid(*ps) == typeid(Circle)){
		cout << "circle " << endl;
		// Circle *pCir = (Circle *)ps;
		const Circle *pCir = dynamic_cast<const Circle *>(ps);
		cout << "radius : " << pCir->radius();
	} // else {}
	cout << "area" << '\t' << " : "<< ps->area() << endl;
}

void printAreaR(Shape& rs)
{
	if(typeid(rs) == typeid(Rectangle)){	//RTTI: RunTime Type Identification
		cout << "rectangle " << endl;	
		// Rectangle *pRec = (Rectangle *)ps;
		const Rectangle crs = dynamic_cast<Rectangle>(rs);	// 레퍼런스 다이나믹 캐스트 잘 안됨... 나중에 다시.
		// 부모 형의 포인터로는 자식클래스의 메소드로 접근하지 못한다. 이때 RTTI를 쓴다. 
		cout << "width : " << crs.width() << ", height : " << crs.height() << ", ";
	} else if(typeid(rs) == typeid(Circle)){
		cout << "circle " << endl;
		// Circle *pCir = (Circle *)ps;
		// const Circle *pCir = dynamic_cast<const Circle *>(ps);
		// cout << "radius : " << pCir->radius();
	} // else {}
	cout << "area" << '\t' << " : "<< rs.area() << endl;
}

int main()
{
	Rectangle testRectangle(50, 30, 100, 100 );
	Shape& rTest = testRectangle;
	Circle testCircle(100, 300, 100 );

	Shape *shapes[5];
	shapes[0] = new Rectangle(50, 30, 100, 100 );
	shapes[1] = new Rectangle(0, 0, 200, 100 );
	shapes[2] = new Circle(100, 300, 100 );
	shapes[3] = new Rectangle(50, 50, 400, 100 );
	shapes[4] = new Circle(30, 500, 100 );

	for(int i=0;i<5;++i){
		printArea(shapes[i]);
	}
	printAreaR(testRectangle);
	printAreaR(testCircle);

	for(int i=0;i<5;++i){
		delete shapes[i];
	}
	return 0;
}
