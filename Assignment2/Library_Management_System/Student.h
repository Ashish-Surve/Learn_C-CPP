#pragma once
#include<string>
#include"Book.h"
using namespace std;

class Student
{
private:
	int studentID;
	string studentName; 
public:
	Student() :studentID(0), studentName("") {}
	Student(int x,string y) :studentID(x), studentName(y) {}

	void acceptStudentData();
	void displayStudentData();

	void ReadBookList();
	void RequestBook();

	int getStudentID();
	void setStudentID(int studentID);

	string getStudentName();
	int setStudentName(string studentName);

	friend ostream& operator<<(ostream&, const Student&);
};