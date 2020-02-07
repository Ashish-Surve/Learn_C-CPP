#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>

int main()
{

	minus<int> intsub;		//Adds two string objects
	minus<> intsub1;		//default type is void,so templet specilzation
	minus<void> intsub3;	//template specilation used

	cout << intsub(1, 2)<< "\n";
	cout << intsub1(10, 20)<< "\n";
	cout << intsub3(1000, 2000)<< "\n";
}