//#include<iostream>
//#include<typeinfo>
//#include<vector>
//#include<iterator>
//#include<string>
//#include<math.h>
//using namespace std;
////Unifrom Init.
//int main()
//{
//	//C++ has 4 diffrent init. notations.
//
//	//1st- Parenthesized init or constructor init.
//	string s("PSL Nagpur");
//	int iNum(100);
//	float f(1.2548);
//
//	string name = string("WAKAWAKA");
//	cout << s<<endl;
//	int val = int(200);
//
//	cout << "---------------------------------------------------";
//
//	//2nd way- using = 
//
//	string sname = "PSL";
//	int sval = 100;
//
//	cout << "---------------------------------------------------";
//
//	//3rd way- using braces
//
//	int arr[4] = { 0,1,2,3 };
//	int sx{ 4 };
//	int sx2 = { 5 };
//
//	cout << sx << endl;
//	cout << sx2 << endl;
//	cout << "---------------------------------------------------";
//
//	//4th way - use member init.
//
//	class Student {
//	public:
//		int roll_no=1;
//		int marks[5];
//		//remeber this
//		Student() :roll_no(2), marks{ 90,45,15,26,12 }{};
//	};
//
//	Student sss=Student();
//
//	cout << sss.roll_no << endl;
//
//
//	// g++ math.cpp -lm
//	//this is used to link math library so that we c can use sqrt() and pow()
//}