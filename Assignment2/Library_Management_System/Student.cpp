#include "Student.h"

void Student::acceptStudentData()
{
}

void Student::displayStudentData()
{
}

void Student::ReadBookList()
{
}

void Student::RequestBook()
{
	
}

int Student::getStudentID()
{
	return 0;
}

void Student::setStudentID(int studentID)
{
}

string Student::getStudentName()
{
	return string();
}

int Student::setStudentName(string studentName)
{
	return 0;
}

ostream & operator<<(ostream &o, const Student &s)
{
	o << s.studentID << "\t\t\t\t" << s.studentName << endl;
	return o;
}
