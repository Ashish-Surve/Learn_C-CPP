#pragma once
#include"Date.h"
#include"String.h"
class Employee
{
	int emp_id;
	String emp_name=String("SOME");
	Date emp_bod;

public:
	
	Employee();

	Employee(int id, String nm, Date dob);
	Employee(int id, const char * nm, int d,int m, int y);
	Employee(int id, const char * nm, Date dob);

	Employee(const Employee&);

	Employee operator=(const Employee& d);

	void Display();
};