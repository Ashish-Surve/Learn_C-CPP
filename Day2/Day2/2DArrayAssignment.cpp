//#include<stdio.h>
//#include<malloc.h>
//
//#define SIZE 3
//
//int ** AllocateMemory(int ** );
//int ** acceptMatrix(int **);
//void freeMemory(int **);
//void display(int **);
//int main()
//{
//	//2-D array
//	int** p =NULL;
//
//	p = AllocateMemory(p);
//	p = acceptMatrix(p);
//	display(p);
//		freeMemory(p);
//}
//
//int ** AllocateMemory(int ** p)
//{
//	int i;
//	p = (int**)malloc(sizeof(int*)*SIZE);
//	printf("Allocating Memory");
//	p = (int**)malloc(sizeof(int*)*SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		p[i] = (int*)malloc(sizeof(int) * SIZE);
//		
//	}
//	return p;
//}
//
//int ** acceptMatrix(int ** p)
//{
//	int i, j;
//	printf("Enter data");
//	for (i = 0; i < SIZE; i++)
//	{
//		for (j = 0; j < SIZE; j++)
//		{
//			//Accept Matrix
//			scanf_s("%d", &p[i][j]);
//		}
//	}
//	return p;
//}
//
//void display(int ** p)
//{
//	int i, j;
//	for (i = 0; i < SIZE; i++)
//	{
//		for (j = 0; j < SIZE; j++)
//		{
//			printf("%d", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void freeMemory(int ** p)
//{
//	int i, j;
//	for (i = 0; i < SIZE; i++)
//	{
//		free(p[i]);
//	}
//	free(p);
//}