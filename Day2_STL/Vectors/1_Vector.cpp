#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;


int main1()

{
	class Student
	{

	};

	//vector declaration
	vector<int> iv1;
	vector<string>sv1;
	vector<class Student> clsv1;

	//vector init
	vector<int> iv2(5);
	vector<string>sv2(5);
	vector<class Student> clsv2(5);

	cout << "Size of vector is : " << endl;
	cout << "vector<int>iv1 : " << iv1.size() << endl;
	cout << "vector <string> sv1 " << sv1.size() << endl;
	cout << "vector<class Student> clsv1 : " << clsv1.size() << endl;

	//push elem into vectors
	iv1.push_back(10);
	iv1.push_back(10);
	iv1.push_back(10);
	iv1.push_back(10);
	iv1.push_back(10);

	//push elem into vectors
	iv2.push_back(10);
	iv2.push_back(10);
	iv2.push_back(10);
	iv2.push_back(10);
	iv2.push_back(10);

	cout << "Size of vector is : " << endl;
	cout << "vector<int>iv1 : " << iv1.size() << endl;
	cout << "vector <int> iv2 " << iv2.size() << endl;
	cout << "vector<class Student> clsv1 : " << clsv1.size() << endl;
	for (auto i : iv2)
	{
		cout << i << endl;
	}



	return 0;
}