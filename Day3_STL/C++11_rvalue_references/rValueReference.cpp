#include<iostream>
using namespace std;
#include<string>

void Display(int val)
{
	cout << "lvalue : value = " << val << endl;
}



int getVal()
{
	int temp = 99;
	return temp;
}

int main()
{
	//rvalue ref are declared with 2 && symbol
	int num = 100;


	//can be used to check if the input is rvalue or lvalue.
	// calls normal function
	Display(num);

	//calls r val ref fun
	int &&ref = getVal();
	ref = 66;
	Display(ref);
	return 0;
}