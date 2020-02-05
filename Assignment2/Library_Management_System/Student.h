#pragma once
#include<string>
using namespace std;

class Student
{
private:
	int studentID;
	string studentName;
public:
	Student() = default;
	Student() :studentID(0), studentName("") {}

	void acceptStudentData();
	void displayStudentData();

	void ReadBookList();
	void RequestBook();

	int getStudentID();
	void setStudentID(int studentID);

	string getStudentName();
	int setStudentName(string studentName);
};