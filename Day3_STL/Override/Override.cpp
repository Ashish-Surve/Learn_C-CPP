#include<iostream>
using namespace std;
#include<string>

class Base
{
	virtual void f(int);
};

class Derived :public Base
{
	//virtual void f(float)override;		//Error
	virtual void f(int)override;
};