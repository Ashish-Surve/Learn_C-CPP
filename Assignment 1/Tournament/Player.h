#pragma once
#define C_LEN 20

typedef int Skill;
#define BATTER 0
#define BOWLER 1

typedef struct Player
{
	char Name[C_LEN];
	Skill Skills;
	int p_run;
	int wickets;
	int over;
}Player;


// play and return run in 1 ball
int playerBatting();

// 