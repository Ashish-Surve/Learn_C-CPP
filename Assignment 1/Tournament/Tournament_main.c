#include<stdio.h>
#include"Player.h"
#include"Team.h"
#include<string.h>
int main()
{
	Team teams[T_SIZE];
	setUpTeam(teams);
	//displayTeamInfo(teams);
	srand(time(0));
	//shuffle the array to decide pre-quarter matches.
	int match_decide[T_SIZE] = { 0,1,2,3,4,5,6,7 };
	shuffle(match_decide,T_SIZE);
	//int i;
	//for (i = 0; i < T_SIZE; i++)
	//	printf("%d\t", match_decide[i]);

	//alternate teams have a match eg, team[0] vs team[1];
	int i,j;

	/*displayTeamInfo(teams[0]);
	displayTeamInfo(teams[1]);*/
	

	// loop for semi finals

		//match between alternate teams. 
		//  loop for quarter finals
		for (i = 0; i < T_SIZE; i += 2)
		{
			Team A = teams[match_decide[i]];
			Team B = teams[match_decide[i + 1]];

			int A_run = play(&A, &B);
			printf("\nTeam %c runs : %d\n", A.TeamName,A_run);
			displayTeamInfo(A);
			printf("\n");
			int B_run = play(&B, &A);
			printf("\nTeam %c runs : %d\n", B.TeamName, B_run);
			displayTeamInfo(B);

			printf("\n===============================================\n");

			if (A_run < B_run)
			{
				int temp = match_decide[i];
				match_decide[i] = match_decide[i + 1];
				match_decide[i + 1] = temp;
			}
		}

		printf("\nQuarter Finals over\n");
		//setting scores back to 0 for teams
		refreshScore(teams);
		// loop for semi finals
		for (i = 0;i < T_SIZE; i += 4)
		{
			Team A = teams[match_decide[i]];
			Team B = teams[match_decide[i + 2]];

			int A_run = play(&A, &B);
			printf("\nTeam %c runs : %d\n", A.TeamName, A_run);
			displayTeamInfo(A);
			//printf("\n");
			int B_run = play(&B, &A);
			printf("\nTeam %c runs : %d\n", B.TeamName, B_run);
			displayTeamInfo(B);

			printf("\n===============================================\n");

			if (A_run < B_run)
			{
				int temp = match_decide[i];
				match_decide[i] = match_decide[i + 2];
				match_decide[i + 2] = temp;
			}
		}

		printf("\nSemi Finals over\n");
		//setting scores back to 0 for teams
		refreshScore(teams);
		// for finals
			i = 0;
			Team A = teams[match_decide[i]];
			Team B = teams[match_decide[i + 4]];

			int A_run = play(&A, &B);
			printf("\nTeam %c runs : %d\n", A.TeamName, A_run);
			displayTeamInfo(A);
			//printf("\n");
			int B_run = play(&B, &A);
			printf("\nTeam %c runs : %d\n", B.TeamName, B_run);
			displayTeamInfo(B);

			printf("\n===============================================\n");

			if (A_run < B_run)
			{
				int temp = match_decide[i];
				match_decide[i] = match_decide[i + 4];
				match_decide[i + 4] = temp;
			}

			printf("\nFinals over\n");
			printf("\nTeam Won: %c", teams[match_decide[i]]);
}