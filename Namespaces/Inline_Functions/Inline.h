#pragma once
#include<iostream>

class MyClass
{
public:
	inline void Display();
};

inline void MyClass::Display()
{
	cout << "Inside Inline Function" << endl;
}