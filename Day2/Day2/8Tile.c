#include<stdio.h>
#include<stdlib.h>


void display(int a[4][4]);
void initialize(int a[4][4]);
void shuffle(int *array, int n);
void move(int a[4][4]);

int main()
{
	int mat[4][4] = { 0 };
	display(mat);
	initialize(mat);
	display(mat);

}

void shuffle(int *array, int n)
{
	if (n > 1)
	{
		size_t i;
		for (i = 0; i < n - 1; i++)
		{
			size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = array[j];
			array[j] = array[i];
			array[i] = t;
		}
	}
}
void display(int a[4][4])
{
	printf("\nOur Board:\n");

	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == -1)
			{
				printf("%6s"," __ ");
			}
			else
			{
				printf("%4d  ", a[i][j]);
			}
		
		}
		printf("\n");

	}
	printf("\n");
}

void initialize(int a[4][4])
{
	int i, j;


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = j + 4 * i;
		}
		printf("\n");

	}
	a[0][0] = -1;
	for (i = 0; i < 4; i++)
	{
		shuffle(a[i], 4);
	}
	
}

void move(int a[4][4])
{
	display(a);
	printf("Direction to move empty tile.\nUp:8\tDown:2\tLeft:4\tRight:6");
	int dir;
	scanf_s("%d", &dir);

}