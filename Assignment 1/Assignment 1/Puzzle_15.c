#include<stdio.h>
#include<stdlib.h>
#include"Puzzle_15.h"


void shuffle(int *array, int n)
{
	srand(time(0));
	if (n > 1)
	{
		int i;
		for (i = 0; i < n - 1; i++)
		{

			int j = i + rand() / (RAND_MAX / (n - i) + 1);
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
				printf("%6s", " __ ");
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
	//display(a);
	printf("Which tile to move?\t QUIT PROGRAM: 17.\n");
	int tile_no;
	scanf_s("%d", &tile_no);
	if (tile_no == 17)
	{
		exit(0);
	}
	int * xy = getTileXY(a, tile_no);
	if (xy == NULL)
	{
		printf("Wrong Value or Memory Error\n");
		return;
	}
	//printf("X: %d\tY:%d\n", *xy, *(xy + 1)); 
	printf("Direction to move empty tile.\nUp:8\tDown:2\tLeft:4\tRight:6\n");
	int dir;
	scanf_s("%d", &dir);

	//direction to move variables
	int x = *xy, y = *(xy+1);
	switch (dir)
	{
			case 2: if (x == 3 || a[x+1][y]!=-1)
			{
				printf("\n============\nCant Move!\n============\n");
			}
					else
			{
				swap(&a[x][y],& a[x + 1][y]);
			}

				break;
			case 4: if (y == 0 || a[x][y-1] != -1)
			{
				printf("\n============\nCant Move!\n============\n");
			}
					else
			{
				swap(&a[x][y] ,&a[x][y - 1]);
			}
				break;
			case 6: if (y == 3 || a[x][y+1] != -1)
			{
				printf("\n============\nCant Move!\n============\n");
			}
					else
			{
				swap(&a[x][y],&a[x][y + 1]);
			}
				break;
			case 8: if (x == 0 || a[x-1][y] != -1)
			{
				printf("\n============\nCant Move!\n============\n");
			}
					else
			{

				swap(&a[x][y] ,&a[x - 1][y]);
			}
				break;
				default:printf("\nWrong Input, try again...\n");
					break;
	}

}

int * getTileXY(int a[4][4], int find)
{
	//ASK : ask if this way is correct to use pointer
	//this has x and y coordinates of tile
	int * Tile_x_y = (int*)malloc(sizeof(int*) * 2);
	if (Tile_x_y == NULL)
	{
		printf("Memory Allocation error.");
		return NULL;
	}
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == find)
			{
				*Tile_x_y = i;
				*(Tile_x_y+1) = j;
				return Tile_x_y;
			}
		}
	}
	return NULL;
}

int check(int a[4][4])
{
	int i, j,count;
	for (i = 0; i < 4; i ++ )
	{
		for (j = 0; j < 4; j++)
		{
			count = 4 * i + j + 1;
			if (i == 3 && j == 3)
			{
				break;
			}
			else if (a[i][j] != count)
			{
				return 0;
			}
			//printf("%5d", count);
		}
		printf("\n");
	}
	return 1;
}

void swap(int *a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
