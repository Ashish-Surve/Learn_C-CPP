#include "Employee.h"
#include<iostream>

Employee::Employee():emp_id(0),emp_name(""),emp_bod(0,0,0)
{
	std::cout << "Inside Employee default ctor " << std::endl;
	//emp_id = 0;
	//emp_name = "";
	////create anonymous obj and assign
	//emp_bod =Date();
}

Employee::Employee(int id, String nm, Date dob):emp_id(id), emp_name(nm), emp_bod(dob)
{
	std::cout << "Inside Employee parameterised ctor " << std::endl;
	//emp_id = 0;
	////create anonymous obj and assign
	//emp_name = String(nm);
	//emp_bod = dob;
}

Employee::Employee(int id, const char * nm, int d, int m, int y) :emp_id(id), emp_name(nm), emp_bod(d,m,y)
{
	std::cout << "Inside Employee parameterised ctor " << std::endl;
	//emp_id = 0;
	////create anonymous obj and assign
	//emp_name = String(nm);
	////create anonymous obj and assign
	//emp_bod = Date(d,m,y);
}

Employee::Employee(int id, const char * nm, Date dob) :emp_id(id), emp_name(nm), emp_bod(dob)
{
	std::cout << "Inside Employee parameterised ctor " << std::endl;
	/*emp_id = e.emp_id;
emp_name = e.emp_name;
emp_bod = e.emp_bod;*/
}

Employee::Employee(const Employee &e):emp_id(e.emp_id), emp_name(e.emp_name), emp_bod(e.emp_bod)
{
	std::cout << "Inside Employee copy ctor " << std::endl;
	/*emp_id = e.emp_id;
	emp_name = e.emp_name;
	emp_bod = e.emp_bod;*/
}

Employee Employee::operator=(const Employee & d) 
{
	std::cout << "Inside Employee overloaded = " << std::endl;
	return Employee();
}

void Employee::Display()
{
	std::cout << "Employee Details :" << std::endl;
	std::cout <<"EmpID: " <<emp_id << std::endl;
	emp_name.Display();
	emp_bod.Display();
}
