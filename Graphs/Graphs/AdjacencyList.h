#pragma once
#include<stdio.h>

//Adjacent List

//Adjacnecy list nodes 
typedef struct AdjacencyNode
{
	int dest;
	struct AdjacencyNode *next;
}Adj_Node;

typedef struct AdjacencyList
{
	Adj_Node *head;
}Adj_List;

typedef struct GRAPH
{
	int v;			//source location
	Adj_List *ArrayOfPointer_AdjList;
}GRAPH;

GRAPH* CreateNewEdgeInGraph(int vertex);
void AddNewEdgeInGraph(GRAPH* ,int src,int dst);
void DisplayGraphRepresentation(GRAPH * graph);
void BreadthFirstSearch(Graph* g);