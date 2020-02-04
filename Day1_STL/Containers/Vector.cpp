#include<iostream>
using namespace std;
#include<vector>
#include<iterator>				//C++ 11x feature
#include<tuple>
int main()
{
	//vector element declaration

	vector<int> v1(10);
	for (auto i=0;i<10; i++)
	{
		v1.push_back(i);
	}
	
	for (auto i : v1)
	{
		cout << i << endl;
	}
	cout << v1.max_size() << endl;	//1GB Size 

	//vector init 
	vector<tuple<int, int, int>> Players = { make_tuple(10,20,30) };
	int x, y,z;
	tie(x, y, z) = Players[0];
	cout<<x<<" "<<y<<" "<<z<<endl;
	


}