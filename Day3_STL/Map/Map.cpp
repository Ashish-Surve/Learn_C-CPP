#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	//2D key
	map <int, map<int, int>> m;

	map <int, map<int, int>>::iterator out_iter;
	map<int, int>::iterator in_iter;



	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			m[i][j] = i * 5 + j;
		}
	}

	for_each( m.begin(), m.end(), [](auto x)
	{
		cout << typeid(x).name() << endl;
		/*for_each(x.begin(), x.end(), [](auto z ) 
		{
			cout << typeid(z).name() << endl; 
		}*/
	 });

	return 0;

}