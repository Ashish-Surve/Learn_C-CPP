#include<stdio.h>
#include<malloc.h>

#define SIZE 4

int main()
{
	//2-d array
	int** p = NULL;
	int i, j;
	p= (int**)malloc(sizeof(int*)*SIZE);
	for ( i = 0; i < SIZE; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * SIZE);
		for (j = 0; j < SIZE; j++)
		{
			p[i][j] = i;
		}
	}
	




	for (i = 0; i < SIZE; i++)
	{
		for ( j = 0; j < SIZE; j++)
		{
			printf("%d",p[i][j]);
		}
		printf("\n");
	}
}

