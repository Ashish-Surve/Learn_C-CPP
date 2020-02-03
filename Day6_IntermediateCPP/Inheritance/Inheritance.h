#pragma once
#include<iostream>
class Base
{
private:
	int i = 1;
protected:
	int j = 2;
public:
	int k=0;
};

class Derived :protected Base
{
private:
	int l = 1;
protected:
	int m = 2;
public:
	int n=0;

	Derived() = default;

	void Display()
	{
		
		using namespace std;
		//cout << "i "<<i <<endl;
		cout << "j "<< j<<endl;
		cout << "k "<<k <<endl;
		cout << "l "<<l <<endl;
		cout << "m "<<m <<endl;
		cout << "n "<<n <<endl;
	}
	
};