#include <iostream>
using namespace std;

//define macro
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//class
class Employee{
//declear
public:
//constructor(id,last,first,initial,dep)
	Employee(long id,string last,string first,char initial,int dep);
//display
	void display(ostream &out) const;
//private data(myId,myLast,myFirst,myInitial,myDep)
	friend ostream& operator<<(ostream &,const Employee &);
private:
	long myId;
	string myLast,myFirst;
	char myInitial;
	int myDep;
};
//definition
inline Employee::Employee(long id,string last,string first,char initial,int dep):myId(id),myLast(last),myFirst(first),myInitial(initial),myDep(dep)	{ };

inline void Employee::display(ostream &out) const{
		out<<myId<<endl;
//		out<<myFirst<<"\t"<<myInitial<<"\t"<<myLast<<endl;
		out<<"department"<<" "<<myDep;
}
//operator <<
//i have difficult here ,but it's very important
/*
ostream& operator<<(ostream &out,const Employee &emp){
	emp.display(out);
	return out;
}
*/
#endif