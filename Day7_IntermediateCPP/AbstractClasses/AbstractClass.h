#pragma once
#include<iostream>
using namespace std;


class Shape
{
protected:
	int m_Width, m_Height;
public:
	Shape()
	{
		cout << "Shape Ctor" << endl;
	}
	void setHeight(int ht)
	{
		m_Height = ht;
	}
	void setWidth(int wt)
	{
		m_Width = wt;
	}

	virtual int getArea()const = 0;
	virtual void Draw()const = 0;
	
	void Display()
	{
		cout << getArea() << endl;
	}

};

class Rectangle : public Shape
{
public:
	int getArea()const
	{
		return m_Width * m_Height;
	}

	void Draw()const
	{
		cout<<"Rectangle Draw"<<endl;
	}
};

class Triangle : public Shape
{
public:
	int getArea()const
	{
		return int(m_Width * m_Height*0.5);
	}

	void Draw()const
	{
		cout << "Triangle Draw" << endl;
	}
};