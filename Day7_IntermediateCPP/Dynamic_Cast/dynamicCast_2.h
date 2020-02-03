#include<iostream>
using namespace std;
class Shape
{

public:
	virtual void Draw()const = 0;
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

void Draw(Shape* sPtr)
{
	if (typeid(*sPtr) == typeid(Rectangle))
	{
		Rectangle *rPtr = dynamic_cast<Rectangle*>(sPtr);
		rPtr->Draw();
	}
	else if (typeid(*sPtr) == typeid(Triangle))
	{
		Triangle *tPtr = dynamic_cast<Triangle*>(sPtr);
		tPtr->Draw();
	}
}