#include<iostream>		//to perform console I/O
#include<fstream>		//To perform File I/O

using namespace std;
int main1()
{
	//Input file class
	ifstream in;

	//Output sream class
	ofstream out;

	//Input and Output file class
	fstream io;

	in.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out);
	out.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out);
	io.open("filename", ios::app | ios::ate | ios::binary | ios::in | ios::out);

	if (!in) { cout << "cant open" << endl; return 0;};
	if (!out) { cout << "cant open" << endl;return 0;};
	if (!io) { cout << "cant open" << endl; return 0;};

	return 0;
}