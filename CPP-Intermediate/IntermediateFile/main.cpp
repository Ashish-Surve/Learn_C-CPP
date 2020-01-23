#include"Header.h"
#include<iostream>
int main()
{
	Display();
	register int x = 5;
	//printing addres of register variable.
	std::cout << &x;
	return 0;
}