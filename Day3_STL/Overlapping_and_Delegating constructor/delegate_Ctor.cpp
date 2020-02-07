#include<iostream>
using namespace std;
#include<string>


//delegates:
//para ctor calls default ctor and also maintains the 
//state of the object. i.e x n y values
class Foo
{
	int x;
	int y;
public:
	Foo():x(99),y(77)
	{
		//code to do A
		cout << "Default" << endl;
		
	}

	Foo(int value):Foo()
	{
		cout << "Parametrised" << endl;
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
		//code to do B
	}

	
};

int main()
{
	Foo f1(10);

	return 0;
}