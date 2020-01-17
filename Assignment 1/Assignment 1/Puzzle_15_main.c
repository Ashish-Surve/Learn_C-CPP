#include"Puzzle_15.h"
//ASK: should I include std here or in header file?
int main()
{
	int mat[4][4] = { 0 };
	initialize(mat);
	display(mat);
	while (!check(mat))
	{
		move(mat);
		display(mat);
	}

}
