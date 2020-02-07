//#include<iostream>
//using namespace std;
//#include<string>
//
//int getVal()
//{
//	int temp = 99;
//	return temp;
//}
//
//int main()
//{
//	cout << getVal();
//	// getval return rvalue hence reference cant take it.
//	// RULE** We can assign rvalue to a reference.
//	// this is where we use rvalue reference.
//	// direct ownership of literal is given to reference if rval ref used.
//	// no need of temporary variable
//	// basically used to init a ref with rvalue.
//
//	int data = 100;
//	int &ref = data;				// data is temp variable.
//
//	//int &val = getVal();			// error
//
//	int &&val = getVal();			//* getVal returns literal.
//	//int &&val1 = 100;				// 22 23 are same
//	//cout << val << endl;
//	val = 45;
//	cout << typeid(val).name() << endl;
//
//	return 0;
//}