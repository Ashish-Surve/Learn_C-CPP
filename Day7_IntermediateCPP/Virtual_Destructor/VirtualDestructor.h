#pragma once
#include<iostream>
using namespace std;
class Base
{
public:
	 virtual void some()
	{
		cout << "SOME Base" << endl;
	}
	Base()
	{
		cout << "CTOR Base\n";
	}
	virtual ~Base()
	{
		cout << "DCTOR Base\n";
	}
	
};

class Derived : public Base
{
public:
	void some()
	{
		cout << "SOME Derived" << endl;
	}
	Derived()
	{
		cout << "CTOR Derived\n";
	}
	~Derived()
	{
		cout << "DCTOR Derived\n";
	}

};