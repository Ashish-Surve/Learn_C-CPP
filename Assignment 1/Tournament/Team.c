#include<stdio.h>
#include"Team.h"
#include<malloc.h>
#include<string.h>
#include<stdlib.h>

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


void setUpTeam(Team teams[T_SIZE])
{
	int i,j;
	srand(time(0));
	for (i = 0; i < T_SIZE; i++)
	{
		teams[i].TeamName= (char)'A'+i;
		teams[i].P = (Player *)malloc(sizeof(Player)*10);
		for (j = 0; j < 10; j++)
		{
			//SET NAME
			//*(teams[i].P[j]).Name = (char)'A'+(char)48+j;
			char ss[3] = { (char)'A' + i,(char)48+j,'\0' };
			strcpy_s((teams[i].P[j]).Name, 3, ss);
			//printf("String:%c%c\n", (teams[i].P[j]).Name[0], (teams[i].P[j]).Name[1]);


			//SET SKILL

			int x=rand() % 2;
			//x =0 means batter =1 means bowler. check Player.h
			(teams[i].P[j]).Skills = x;
			//printf("String:%c%c :%d \n", (teams[i].P[j]).Name[0], (teams[i].P[j]).Name[1], (teams[i].P[j]).Skills);

			(teams[i].P[j]).p_run = 0;
			(teams[i].P[j]).wickets = 0;
		}
		
	}
	
}

void displayTeamInfo(Team team)
{
	int  j;
	printf("\n============================================\n");
		printf("Team Name :%c\n", team.TeamName);
		for (j = 0; j < 10; j++)
		{
			//PRINT NAME
			printf("Player Name :%c%c\t", (team.P[j]).Name[0], (team.P[j]).Name[1]);

			//x =0 means batter =1 means bowler. check Player.h
			if ((team.P[j]).Skills == BATTER)
				printf("Skill:\t :Batter \t");
			else
				printf("Skill:\t :Bowler \t");

			//PRINT RUNS
			printf("Runs  :\t%d\t\n", (team.P[j]).p_run);

		}
		printf("\n============================================\n");

}

int play(Team* A, Team* B)
{
	int batsman_counter = 0;
	int ball_count = 0;
	Player* Bowler=NULL;
	Player* Batsman=NULL;
	int score=0;
	int wicket = 0;
	int bowler_counter=0;
	int run=0;
	int team_run = 0;

	printf("\nBatting : %c\tBowling : %c\n", A->TeamName, B->TeamName);
	for (ball_count = 0; ball_count < (6 * OVERS) && batsman_counter<10; ball_count++)
	{
		//get Bowler and Batsman
		bowler_counter = getBowler(B);
		Bowler = &B->P[bowler_counter];
		Batsman = &A->P[batsman_counter];
		// Batsman plays 
		run = playerBatting();
		if (run <= OUT)
		{
			batsman_counter++;
			Bowler->wickets++;
		}
		else
		{
			Batsman->p_run += run;
			team_run += run;
		}

		//printf("Bowler is : %d", B.P[bowler_counter].Name);
		
	}
	return team_run;
}

int getBowler(Team* A)
{
	{

		static int x = 0;
		int i;
		while ((*A).P[x].Skills != BOWLER)
		{
			x = (x + 1) % 10;
		}

		x = (x + 1) % 10;
		return x - 1;
	}
}

void refreshScore(Team teams[T_SIZE])
{

	int i, j;
	srand(time(0));
	for (i = 0; i < T_SIZE; i++)
	{
		for (j = 0; j < 10; j++)
		{
			(teams[i].P[j]).p_run = 0;
			(teams[i].P[j]).wickets = 0;
		}

	}
}

