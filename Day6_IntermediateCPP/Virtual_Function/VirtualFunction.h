#pragma once
#include<iostream>
using namespace std;
class Shape
{
public:
	virtual void Display()
	{
		cout << "Inside Shape" << endl;
	}
};

class Circle : public Shape
{
public:
	void Display()
	{
		cout << "Inside Circle" << endl;
		Shape::Display();
	}
};

class Square : public Shape
{

public:
	void Display()
	{
		cout << "Inside Square" << endl;
		Shape::Display();
	}
};
class Triangle : public Shape
{

public:
	void Display()
	{
		cout << "Inside Triangle" << endl;
		Shape::Display();
	}
};