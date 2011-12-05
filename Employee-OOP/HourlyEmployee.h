//weeklyWage,hoursWorded
#include <iostream>
#include "Employee.h"

#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPOLYEE_H

class HourlyEmployee:public Employee{
public:
	HourlyEmployee(long id,string last,string first,char initial,int dep,double hourwage,double worktime);
	void display(ostream &out) const;
private:
	private:
	long myId;
	string myLast,myFirst;
	char myInitial;
	int myDep;
	double myHourwage,myHour;
};

inline HourlyEmployee::HourlyEmployee(long id,string last,string first,char initial,int dep,double hourwage,double worktime)
		:Employee(id,last,first,initial,dep),myHour(worktime),myHourwage(hourwage)	{ };

inline void HourlyEmployee::display(ostream &out) const{
	Employee::display(out);
	out<<"hour $"<<myHourwage<<endl;
	out<<myHour<<endl;
}



#endif