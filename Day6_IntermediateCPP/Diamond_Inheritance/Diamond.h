#pragma once
#include<iostream>
using namespace std;
class Base
{
	char name[1000];
public:
	void Display()
	{
		cout << "Inside Base" << endl;
	}
};

class Derived1 :virtual public Base
{
	char name[1000];
	
public:
	void Display()
	{
		cout << "Inside Derived1" << endl;
		Base::Display();
	}
};
class Derived2 : virtual public Base
{
	char name[1000];
public:
	void Display()
	{
		cout << "Inside Derived2" << endl;
		Base::Display();
	}
};

class Derived3 :public  virtual Derived1, public virtual Derived2
{
	char name[1000];
public:
	void Display()
	{
		cout << "Inside Derived3" << endl;
		Derived1::Display();
		Derived1::Base::Display();
		Derived2::Display();
		Derived2::Base::Display();
		
	}
};