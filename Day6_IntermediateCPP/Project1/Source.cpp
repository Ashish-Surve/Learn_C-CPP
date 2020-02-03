#include"Employee.h"
#include<iostream>
using namespace std;
//Always use Member Init List please... It more efficient
//Reduces memory overhead.
//
int main()
{
	{
		Employee emp(1, "Ashish", 13, 11, 1996);
	}
	return 0;
}