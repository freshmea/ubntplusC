#include "employee.h"
#define self	(*this)

std::ostream& operator<<(std::ostream& out, const Employee& rhs)
{
	if(rhs.isManager())
		out << rhs.getId() << ". " << rhs.getName() << " is boss";
	else
		out << rhs.getId() << ". " << rhs.getName() << "'s Manager is " << rhs.getManager()->getName() << ".";
	return out;
}

Employee::Employee(int id, String name, const Employee *pManager)
{
	self.id = id;
	self.name = name;
	self.pManager = (Employee *)pManager;
}

int Employee::getId() const
{
	return self.id;
}

String Employee::getName() const
{
	return self.name;
}

const Employee *Employee::getManager() const
{
	return self.pManager;
}

void Employee::setManager(const Employee *pManager) 	// const 선언을 해야 하는 이유?
{
	self.pManager = (Employee *)pManager;
}

bool Employee::isManager() const
{
	return self.pManager == NULL;
}

