#include<iostream>
using namespace std;

//logic for add of char, double, float is same but it is diffrent for string
//hence we need specilized template.

template<typename T>							//template func.
T add(T x, T y)				
{
	cout << "Normal Template";
	return x + y;
}

template<>										//function speclization.
char add<char>(char x, char y)
{
	cout << "Specilization " << endl;
	int i = x - '0';
	int j = y - '0';
	return i + j;
}