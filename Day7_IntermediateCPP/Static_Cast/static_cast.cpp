#include<iostream>
using namespace std;
#include"static_cast.h"

int main()
{
	Shape *sPtr = nullptr;
	sPtr->Draw();

	sPtr = new Rectangle();
	static_cast<Rectangle*>(sPtr)->Draw();

	sPtr = new Triangle();
	static_cast<Triangle*>(sPtr)->Draw();

	return 0;
}