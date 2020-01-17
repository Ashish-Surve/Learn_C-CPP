//pragma once - supported preprocessor directive designed to cause the 
//current source file to be included only once in a single compilation.
#pragma once
//set padding to 1 byte.
//#pragma pack(1)
#include<stdio.h>
struct Student
{
	int roll_no;
	char name[10];
	float per;
	float salary;
};
// no access specifier in c for structure security.

void acceptStudData(struct Student *);
void displayStudData(struct Student s);
void calculatePercentage(float *f);
