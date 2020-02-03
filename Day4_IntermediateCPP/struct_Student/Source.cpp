#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
	//Create Object of Class
	Complex C1;								//Static Object Creation

	C1.Display();

	cout << endl<< "----------------------------------------------------" << endl;
	C1.setImag(20);
	C1.setReal(10);
	C1.Display();
	cout << endl << "----------------------------------------------------" << endl;
	Complex C2(C1);					//call to Copy Constructor
	C2.Display();

	cout << endl << "----------------------------------------------------" << endl;

	Complex C3 = C2;					//calling overloaded assignment (=) operator.
	C3.Display();

	cout << endl << "----------------------------------------------------" << endl;

	Complex C4 = C3;					//Calling Copy Constructor.
	C4.Display();

	struct empty{};
	class Empty{};
	cout<<sizeof(Empty)<<endl;
	cout << sizeof(empty) << endl;
}