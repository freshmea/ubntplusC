#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include "string.h"
#include <iostream>

class Employee{
friend std::ostream& operator<< (std::ostream& out, const Employee& rhs);
private:
	int id;
	String name;
	// ???
	Employee *pManager;
	Employee(const Employee& rhs); // 멤버 초기화 를 사용 안함.
	Employee& operator=(const Employee& rhs); // 치환연산 을 사용 안함.
public:
	// Employee();
	// ~Employee();
	// Employee *operator&(){return this;}
	// const Employee *operator&() const {return this;}

	Employee(int id, String name, const Employee *pManager);	//디폴트 생성자가 만들어지지 않는다. 

	int getId() const;
	String getName() const;
	const Employee *getManager() const;

	void setManager(const Employee *pManager);
	bool isManager() const;
};

#endif
