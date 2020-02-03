#include<iostream>
#include"AbstractClass.h"
#include<typeinfo>
using namespace std;

int main()
{
	Shape* s = new Rectangle();
	s->Draw();
	cout << typeid(*s).name() << endl;

}