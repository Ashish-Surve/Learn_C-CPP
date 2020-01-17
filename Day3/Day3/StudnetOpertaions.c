#include"Student.h"

int main()
{
	sizeof(struct Student);
	struct Student obj;
	acceptStudData(&obj);
	displayStudData(obj);
	//calculate new salary
	calculatePercentage(&obj.salary);
	printf("New Salary is : %f", obj.salary);
}