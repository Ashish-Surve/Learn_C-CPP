#include<stdio.h>
#include"Player.h"
#include"Team.h"
#include<string.h>
int main()
{
	Team teams[T_SIZE];
	setUpTeam(teams);
	displayTeamInfo(teams);
	
	//shuffle the array to decide pre-quarter matches.
	int match_decide[T_SIZE] = { 0,1,2,3,4,5,6,7 };
	shuffle(match_decide,T_SIZE);
	//int i;
	//for (i = 0; i < T_SIZE; i++)
	//	printf("%d\t", match_decide[i]);

	//alternate teams have a match eg, team[0] vs team[1];
	int i;
	for (i = 0; i < T_SIZE; i += 2)
	{
		Team A = teams[i];
		Team B = teams[i + 1];

		play(A, B);
	}

}