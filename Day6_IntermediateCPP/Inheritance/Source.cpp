#include"Inheritance.h"
#include<iostream>
using namespace std;

int main()
{
	 Derived d;
	 cout << "Derived Size" << sizeof(Derived) << endl;	//24
	 cout << "Base Size" << sizeof(Base) << endl;				//12

	 //cout << "Base:k: " <<d.k << endl;
	 cout << "Derived:n: " << d.n << endl;
	 d.Display();
}