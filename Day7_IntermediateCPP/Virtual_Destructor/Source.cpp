#include<iostream>
#include"VirtualDestructor.h"
using namespace std;

int main()
{
	Base* b = new Derived();
	//cout << "Deleting the world\n" << endl;
	delete b;
	cout << "ENDS" << endl;
	return 0;
}