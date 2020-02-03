#include<iostream>
using namespace std;
#include<string>
																									//Conversion Operator
class Test
{
private:
	int x;
	string d;
public:
	Test() :x(0),d("Ashish") {}
	explicit Test(int e,string rr) :x(e),d(rr) {}		
	int getVal()const { return x; }
	int setVal(int e) { x = e; }

																										//CODE FOR CONVERSION OPERATOR
																										operator string()
																										{
																											return d;
																										}
																										
	void Display() { cout << "X : " << x << endl; }
};
void foo(Test T)
{

}

int main()
{
	//create opbj of test.
	Test t1;
																							//convert from UDT to builtin type.
																							string x = t1;
	
	cout << "X : " << x << endl;
	return 0;
}