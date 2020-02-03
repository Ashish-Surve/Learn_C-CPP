#include "FriendFunctionOverloading.h"
#include<iostream>
using namespace std;
#include<string>
ostream & operator<<(ostream &o, const Student & s)
{
	o << "Name: " << s.Name << endl;
	o << "Marks: " << s.marks << endl;
	return o;
}

istream & operator>>(istream &i, Student &s)
{
	cout << "Enter Name: ";
	i >> s.Name;
	cout << endl << "Enter Marks: ";
	i >> s.marks;
	return i;
}
const int & operator+(int i, const Student & s)
{
	return i + s.marks;
}
const int & operator++(const Student & s)
{
	return 1+s;
}
const int & operator++(const Student & s,int i)
{
	return 1 + s;
}
Student::Student()
{
	Name = "";
	marks = 0;
}

