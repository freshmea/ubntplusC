#include <iostream>
#include "employee.h"
using std::cout;
using std::endl;
void printEmployee(const Employee *pEm)
{
	if(pEm->isManager())
		cout << pEm->getId() << ". " << pEm->getName() << " is boss" << endl;
	else
		cout << pEm->getId() << ". " << pEm->getName() << "'s Manager is " << pEm->getManager()->getName() << "." << endl;
}

int main()
{
	Employee e1(1, "Park Jung Seok", NULL);

	Employee *pEm1 = new Employee(1, "Park Jung Seok", NULL);

	cout << "name : " << pEm1->getName() << endl;
	cout << "id : " << pEm1->getId() << endl;

	printEmployee(pEm1);
	delete pEm1;

	Employee *pEmployees[10];
	pEmployees[0] = new Employee(1, "Park Jung Seok", NULL);
	pEmployees[1] = new Employee(2, "Sung Young Ho", pEmployees[0]);
	pEmployees[2] = new Employee(3, "Lee Young Jin", pEmployees[0]);
	pEmployees[3] = new Employee(4, "Sim Sung Suk", pEmployees[0]);
	pEmployees[4] = new Employee(5, "Ha Sung Ho", pEmployees[0]);

	for (int i = 0; i< 5; ++i){
		printEmployee(pEmployees[i]);
		cout << *pEmployees[i] << endl;
	}
	
	for (int i = 0; i< 5; ++i){
		delete pEmployees[i];
	}

	return 0;
}