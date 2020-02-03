#pragma once
//friend function overloading is used when we need to overload
// builtintype DT (operator) User Defined DT for binary operator.
#include<iostream>
using namespace std;
class Student
{
	int marks;
	string Name;

public:
	Student();
	friend ostream &operator<<(ostream &o, const Student &s);
	friend istream &operator>>(istream &i,Student &s);
	friend const int &operator+(int i, const Student &s);
	friend const int &operator++(const Student &s);
	friend const int &operator++(const Student & s, int i);

};