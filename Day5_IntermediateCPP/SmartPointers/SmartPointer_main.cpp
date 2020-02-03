#include<iostream>
using namespace std;
#include"Person.h"
#include"SmartPointer.h"

int main()
{	//Block 1 Begin
	/*{
		Person *ptr = new Person(23, "Ashish");
		ptr->Display();

	delete ptr;*/
	//}//block 1 End.

	//block 2
	{
		SmartPointer sp(new Person(23, "Ashish"));
		sp->Display();
	}//block 2 ends
}