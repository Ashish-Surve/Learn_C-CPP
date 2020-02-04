//#include<iostream>
//using namespace std;
//#include<string>
//#include<tuple>
//
//int main()
//{
//	//tuple for integers
//	tuple<int, int,int> t1;
//
//	//tuple for int n strs
//	tuple<int, string, string> s1;
//
//	//insert values to p1
//	t1 = make_tuple(10, 20,30);
//
//	//insert values to s1
//	s1 = make_tuple(101, "PSL","Hakuna Matata");
//
//	//get values from tuple
//	int id; string cName, city;
//	tie(id, cName, city) = s1;
//
//	get<0>(s1) = 101;
//	get<1>(s1) = "Godzilla";
//	get<2>(s1) = "Goa";
//
//	cout << get<0>(s1) << endl;
//	cout << get<1>(s1) << endl;
//	cout << get<2>(s1) << endl;
//
//	return 0;
//}