#include"TicTacToe.h"
//TODO: 
// add declarations of functions.
//add comments for usage.



//Player Move -- 1
//Computer move -- 0
void display(int a[SIZE][SIZE])
{
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (a[i][j] == -10)
			{
				printf("%3s", " _ ");
			}
			else
			{
				if(a[i][j]==1)
				printf("%3s"," X " );
				else
					printf("%3s", " O ");
			}
			
		}
		printf("\n");
	}
}

void get_computer_move(int a[SIZE][SIZE])
{
	int i, j;
	printf("Computer Move....");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (a[i][j] == -10)
			{
				a[i][j] = 0;
				// success finding unoccupied location.
				return ;
			}
		}
		
	}
	// 0 - draw game.
	return;
}

int get_player_move(int a[SIZE][SIZE])
{
	int i, j;
	printf("Player Move....");
	printf("Where you want to put X?");
	scanf_s("%d%d", &i, &j);
	if (a[i - 1][j - 1] == -10)
	{
		a[i - 1][j - 1] = 1;
	}
	else
	{
		printf("Invalid Position");
		return 1;
	}
	return 0;
}

int check(int a[SIZE][SIZE])
{
	int i, j;
	
	int flag = 0;
	int sum_1 = 0;
	int sum_0 = 0;
	//horizontal
	int h;
	for (h = 0; h < SIZE; h++) // all rows check
	{

		for (i = 0; i < SIZE; i++)
		{
			if (a[h][i] == 0)
			{
				sum_0 += 1;
			}
			else if (a[h][i] == 1)
			{
				sum_1 += 1;
			}
		}
		if (sum_0 == 3)
		{
			return 0; //o wins
		}
		else if (sum_1 == 3)
		{
			return 1; // 1 wins
		}
		
		sum_1 = 0;
		sum_0 = 0;
	}
	//Vertical
	int m;
	for (m = 0; m < SIZE; m++) // column movement
	{
		for (i = 0; i < SIZE; i++)
		{
			if (a[i][m] == 0)
			{
				sum_0 += 1;
			}
			else if (a[i][m] == 1)
			{
				sum_1 += 1;
			}
		}
		if (sum_0 == 3)
		{
			return 0; //o wins
		}
		else if (sum_1 == 3)
		{
			return 1; // 1 wins
		}

		sum_1 = 0;
		sum_0 = 0;
	}
	//diagonal
	for (i = 0; i < SIZE; i++)
	{
		if (a[i][i] == 0)
		{
			sum_0 += 1;
		}
		else if (a[i][i] == 1)
		{
			sum_1 += 1;
		}
	}
	if (sum_0 == 3)
	{
		return 0; //o wins
	}
	else if (sum_1 == 3)
	{
		return 1; // 1 wins
	}
	sum_1 = 0;
	sum_0 = 0;
	//Reverse Diagonal
	for (i = 0,j=SIZE-1; i < SIZE,j>=0; i++,j--)
	{
		if (a[i][j] == 0)
		{
			sum_0 += 1;
		}
		else if (a[i][j] == 1)
		{
			sum_1 += 1;
		}
	}
	if (sum_0 == 3)
	{
		return 0; //o wins
	}
	else if (sum_1 == 3)
	{
		return 1; // 1 wins
	}

	return -1; // draw situation
}


