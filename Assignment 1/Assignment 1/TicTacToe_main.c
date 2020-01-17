#include "TicTacToe.h"
int main()
{
	int tic[SIZE][SIZE] = { { -10,-10,-10},{ -10,-10, -10},{ -10,-10, -10} };
	display(tic);
	int x;

	for (x = 0; x < 5; x++)
	{
		get_computer_move(tic);
		if ((x = check(tic)) == 0)
		{
			printf("Computer Wins");
			printf("\n");
			display(tic);
			printf("\n");
			break;
		}
		printf("\n");
		display(tic);
		printf("\n");

		while (get_player_move(tic));
		if ((x = check(tic)) == 1)
		{
			printf("Player Wins");
			printf("\n");
			display(tic);
			printf("\n");
			break;
		}
		printf("\n");
		display(tic);
		printf("\n");

	}

	printf("end of program");

}