#include<iostream>
using namespace std;
#include<string>


//Base can't be derived... 
class Base final			//identifiers to identify attrubutes of our program
{
	virtual void f(int);
};

class Derived :public Base			//Error
{

	virtual void f(int)override;
};