#include<iostream>
using namespace std;
class Base
{
public:
	virtual void Display()
	{

	}
};
class Derived:public Base{};

//int main()
//{
//	Base*b = new Base();
//	Derived* d = dynamic_cast<Derived*>(b);
//	//Derived* d = (Derived*)b;							Don't Use.. bad bad bad....
//	if (d != nullptr)
//		cout << "WORKS" << endl;
//	else
//		cout << "Cant Cast" << endl;
//}