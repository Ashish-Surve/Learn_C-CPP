#pragma once
#include"Player.h"

#define T_SIZE 8
#define OVERS 10

typedef struct Team
{
	char TeamName;
	Player *P;
}Team;


void setUpTeam(Team teams[T_SIZE]);

// Prints a team details. 
void displayTeamInfo(Team team);

//shuffles an array.
void shuffle(int *array, int n);

//returns which team won 0-A won, 1- B won
int play(Team* A, Team* B);

//get index of Bowler who will ball.
int getBowler(Team* A);

//set wickets and runs back to 0

void refreshScore(Team teams[T_SIZE]);
