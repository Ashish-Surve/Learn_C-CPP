#include<iostream>
using namespace std;
#include<string>
#include<array>				//C++ 11x feature

int main()
{
	//init of an array element

	array<int, 10> arr{55};
	for (auto i : arr)
	{
		cout << i << endl;
	}
	cout << get<0>(arr) << endl;
}