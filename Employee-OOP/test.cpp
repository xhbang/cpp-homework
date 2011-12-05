#include <iostream>
using namespace std;
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

int main(){
	Employee a(1233,"Sonic","Xie",'A',5);
	HourlyEmployee b(1243,"Creiag","Tang",'D',34,45,54);
	SalariedEmployee c(3242,"HHAA","HUHU",'A',34,878998);

	a.display(cout);
	cout<<endl;
	b.display(cout);
	cout<<endl;
	c.display(cout);
	cout<<endl;

	return 0;
}
