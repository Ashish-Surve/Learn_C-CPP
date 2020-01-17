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

		}
		
	}
	
}

void displayTeamInfo(Team teams[T_SIZE])
{
	int i, j;

	for (i = 0; i < T_SIZE; i++)
	{
		printf("Team Name :%c\n", teams[i].TeamName);
		for (j = 0; j < 10; j++)
		{
			//SET NAME
			printf("Player Name :\t%c%c\t", (teams[i].P[j]).Name[0], (teams[i].P[j]).Name[1]);

			//x =0 means batter =1 means bowler. check Player.h
			if ((teams[i].P[j]).Skills == BATTER)
				printf("Skill:\t :Batter \n");
			else
				printf("Skill:\t :Bowler \n");

		}
		printf("\n");
	}
}

int play(Team A, Team B)
{
	int batsman_counter = 0;

	int ball_count = 0;
	Player Bowler;
	Player Batsman;
	int score=0;
	int wicket = 0;
	int bowler_counter;
	for (ball_count = 0; ball_count < 6 * OVERS, batsman_counter<10; ball_count++)
	{
		//get Bowler
		bowler_counter = getBowler(B);
		Bowler = B.P[bowler_counter];
		Batsman = A.P[batsman_counter];

		printf("Bowler is : %d", B.P[bowler_counter].Name);

	}
}

int getBowler(Team A)
{
	{

		static int x = 0;
		int i;
		while (A.P[x].Skills != BOWLER)
		{
			x = (x + 1) % 10;
		}

		x = (x + 1) % 10;
		return x - 1;
	}
}

