#include<iostream>
using namespace std;
void Display(int x = 0, int y = 0, int z = 0)
{
	cout << "X " << x << " Y " << y << " Z " << z << endl;
}

int main()
{

	int **pint = new int*[4];

	for (int i = 0; i < 4; i++)
	{
		pint[i] = new int[4];
		for (int j = 0; j < 4; j++)
		{
			pint[i][j] = i*4 + j ;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout  <<pint[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		if(pint[i]!=nullptr)
		delete []pint[i];
	}

	delete []pint;
	//int k = 30;

	////this is interesting....
	//printf("%d %d %d %d", k = 90, k > 35, k == 90, k );
	//Display();

	//Display(10);
}

