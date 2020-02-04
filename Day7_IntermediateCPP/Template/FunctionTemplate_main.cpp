#include<iostream>
using namespace std;
#include"FunctionTemplate.h"


int main()
{
	int i = 0, j = 20;
	double x=10.1, y = 5.2;
	char a = 'x', b = 'z';

	cout << "Original is\t  " << i << " \t::: \t" << j << endl;
	swapargs(i, j);
	cout << "Swapped is\t  " << i << " \t::: \t" << j << endl << endl;

	cout << "Original is\t  " << x << " \t::: \t" << y << endl;
	swapargs(x, y);
	cout << "Swapped is\t  " << x << " \t::: \t" << y << endl << endl;

	cout << "Original is\t  " << a << " \t::: \t" << b << endl;
	swapargs(a, b);
	cout << "Swapped is\t  " << a << " \t::: \t" << b << endl << endl;
}