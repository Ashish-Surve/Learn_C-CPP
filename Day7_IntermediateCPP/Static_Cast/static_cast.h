#pragma once
#include<iostream>
using namespace std;
class Shape
{

public:
	void Draw()const
	{
		cout << "Shape Draw" << endl;
	}
};

class Rectangle : public Shape
{
public:

	void Draw()const
	{
		cout << "Rectangle Draw" << endl;
	}
};

class Triangle : public Shape
{
public:

	void Draw()const
	{
		cout << "Triangle Draw" << endl;
	}
};
