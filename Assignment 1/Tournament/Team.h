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
void displayTeamInfo(Team teams[T_SIZE]);
void shuffle(int *array, int n);

//returns wich team won 0-A won, 1- B won
int play(Team A, Team B);

//get index of Bowler who will ball.
int getBowler(Team A);
