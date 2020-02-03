#include<iostream>
using namespace std;
#include"VirtualFunction.h"

int main()
{
	//create a pointer for Shape class
	Shape *bptr = new Shape();
	bptr->Display();

	//create an object of Circle class
	bptr = new Circle();
	bptr->Display();

	//create an object of Circle class
	bptr = new Triangle();
	bptr->Display();

	//create an object of Circle class
	bptr = new Square();
	bptr->Display();
	

	cout << "Square: " << sizeof(Square) << endl;
	cout << "Shape: " << sizeof(Shape) << endl;

	return 0;
}