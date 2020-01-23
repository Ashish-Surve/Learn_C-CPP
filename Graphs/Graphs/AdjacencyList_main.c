#include"AdjacencyList.h"
#include<stdio.h>
#define NO_VER 5

int main()
{
		GRAPH* g = CreateNewEdgeInGraph(NO_VER);
		AddNewEdgeInGraph(g, 1, 2);
		AddNewEdgeInGraph(g, 1, 3);
		AddNewEdgeInGraph(g, 2, 3);
		AddNewEdgeInGraph(g, 3, 4);
		DisplayGraphRepresentation(g);

		return 0;
}