#include <iostream> 
#include "Employee.h"

#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

class SalariedEmployee: public Employee{
public:
	SalariedEmployee(long id,string last,string first,char initial,int dep,double salary);
	void display (ostream &out) const;
private:
	long myId;
	string myLast,myFirst;
	char myInitial;
	int myDep;
	double mySalary;
};

inline SalariedEmployee::SalariedEmployee(long id,string last,string first,char initial,int dep,double salary)
	:Employee(id,last,first,initial,dep),mySalary(salary)	{ };

inline void SalariedEmployee::display(ostream &out) const{
	Employee::display(out);
	out<<"$"<<mySalary<<endl;
}

#endif
