#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

template<typename type>
void PrintVector(const vector<type> &v)
{
	for (type t : v)
	{
		cout << t << "  ";
	}
	cout << endl;
}
int main()
{
	vector<int> iv1;

	//5 elements with 10 as value iv1[5]
	iv1.assign(5, 10);

	PrintVector(iv1);

	cout << "Add new wlwmenet at the end." << endl;
	iv1.push_back(100);

	PrintVector(iv1);

	cout << "Remove last element" << endl;
	iv1.pop_back();

	cout << "insert range based into a vecotr" << endl;
	iv1.insert(iv1.begin() + 2, 0);

	PrintVector(iv1);

	iv1.erase(iv1.begin());
	PrintVector(iv1);

	vector<int>iv2;
	iv2.swap(iv1);
	cout << "iv1111111111111111111" << endl;
	PrintVector(iv1);
	cout << "iv2222222222222222222" << endl;
	PrintVector(iv2);


	return 0;
}