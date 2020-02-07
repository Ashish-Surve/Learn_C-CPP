//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//class A
//{
//private:
//	int val;
//public:
//	A(int i) :val(i) {}
//	void operator()(int k)
//	{
//		cout << k+val << endl;
//	}
//};
//
//int main()
//{
//	vector<int> v = { 1,2,3,4,5,6 };
//
//	int val = 10;
//	cout << endl;
//	//Algorithm
//	cout << "Algorithms...............\n";
//	for_each(v.begin(), v.end(), A(val));
//	cout << "Lambda................\n";
//	//Lambda
//	for_each(v.begin(), v.end(), [](int x) {cout << x+10 << " " << endl; });
//}