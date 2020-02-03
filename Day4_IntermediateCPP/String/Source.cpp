#include<iostream>
#include"String.h"
using namespace std;
int main()
{
	String s = String("Ashish");
	String s1 = String();
	

	s.Display();
	s1.Display();
	cout << endl << "-----------------------------------------" << endl;

	String s3(s);
	s3.Display();
	cout << endl << "-----------------------------------------" << endl;

	s1 = s;
	s1.Display();
	cout << endl << "-----------------------------------------" << endl;

	//const String s4("PSL");
	//s4.Display();
	cout << sizeof(String);
}
//below problem resolved by explicit copy constructor.
//here we see s and s3 have default copy constructor hence when we call destructor 2 times
//on the same pointer and hence we face dangling pointer.