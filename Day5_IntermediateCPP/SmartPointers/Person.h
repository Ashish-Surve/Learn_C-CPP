#pragma once
#include<iostream>
using namespace std;
class Person
{
	int age;
	char*pName;
	const int x = 0;

public:
	//default
	Person():age(0)
	{
		pName = new char[1];
		*pName = '\0';
	}

	//parameterised
	Person(int a,const char*nm) :age(a)
	{
		pName = new char[strlen(nm)+1];
		strcpy_s(pName, strlen(nm) + 1, nm);
	}

	//destructor
	~Person()
	{
		if (pName)
		{
			delete[]pName;
		}
		cout << "Calling Destructor" << endl;
	}

	void Display()
	{
		cout << "Name: " << pName << "\tAge: " << age << endl;
	}
};