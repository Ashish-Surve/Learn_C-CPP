#include<iostream>
#include"Diamond.h"
#include"Diamond.h"
using namespace std;

int main()
{
	//call all using derived3
	Derived3 d3;


	//**INTERFACE=PURE ABSTRACT CLASS
	d3.Derived1::Display();				//Derived 1s Display
	d3.Derived2::Display();				//Derived2s Display
	d3.Derived2::Base::Display();		//Bases Display

	Derived2 d1;
	//check size of all
	cout << "Size : "<<sizeof(Base)<<endl;				//1000
	cout << "Size : "<< sizeof(Derived1) <<endl;	//2000
	cout << "Size : "<< sizeof(Derived2) <<endl;	//2000
	cout << "Size : "<< sizeof(Derived3) <<endl;	//5000

}