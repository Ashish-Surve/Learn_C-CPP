#include"FriendFunctionOverloading.h"
#include<iostream>

int main()
{
	Student s = Student();
	cin >> s;
	cout << s;
	cout << 9 + s<<endl;
	cout << ++s << endl;
	cout << s++;
}