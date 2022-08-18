#ifndef EMPTY_H
#define EMPTY_H

class Empty{


public:
	Empty() {}						//본체가 비어 있는 디폴트 생성자가 생성
	~Empty() {}						//본체가 비어 있는 소멸자가 생성.
	Empty(const Empty& rhs) {}	//자동으로 만들어짐.

	Empty& operator=(const Empty& rhs) {} //자동으로 만들어짐. 
	// Empty *operator&() {return this;}
	// const Empty *operator&() {return this;}

};

#endif