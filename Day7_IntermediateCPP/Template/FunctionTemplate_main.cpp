#include<iostream>
using namespace std;
#include"FunctionTemplate.h"


int main()
{
	int i = 0, j = 20;
	double x=10.1, y = 546.2;
	char a = 'x', b = 'z';

	cout << "Original is  " << i << " ::: " << j << endl;
	swapargs(i, j);
	cout << "Swapped is  " << i << " ::: " << j << endl << endl;

	cout << "Original is  " << x << " ::: " << y << endl;
	swapargs(x, y);
	cout << "Swapped is  " << x << " ::: " << y << endl << endl;

	cout << "Original is  " << a << " ::: " << b << endl;
	swapargs(a, b);
	cout << "Swapped is  " << a << " ::: " << b << endl << endl;
}