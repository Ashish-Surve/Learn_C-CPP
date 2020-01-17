#include"Student.h"
void acceptStudData(struct Student* s)
{
	printf("Enter you name?\n");
	scanf_s("%s", &s->name,10);
	printf("Enter you Rno?\n");
	scanf_s("%d", &s->roll_no);
	printf("Enter you percentage?\n");
	scanf_s("%f", &s->per);
	printf("Enter you Salary?\n");
	scanf_s("%f", &s->salary);

}
#undef fun
void displayStudData(struct Student s)
{
	printf("\nName: %s\n",s .name);
	printf("Roll No. : %d\n", s.roll_no);
	printf("Percentage: %f\n", s.per);
	printf("Salary: %f\n", s.salary);
}

void calculatePercentage(float* f)
{	
	*f = *f + *f / 10;
}