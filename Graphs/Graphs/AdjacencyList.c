#include"AdjacencyList.h"

GRAPH* CreateNewEdgeInGraph(int vertex)
{
	GRAPH * g = (GRAPH*)malloc(sizeof(GRAPH));
	if (NULL == g)
	{
		printf("Error in memory allocation.");
		return NULL;
	}
	g->v = vertex;
	g->ArrayOfPointer_AdjList = (Adj_List*)malloc(sizeof(Adj_List)*vertex);
	if (NULL == g->ArrayOfPointer_AdjList)
	{
		printf("Error in memory allocation.");
		return NULL;
	}
	int i;
	for (i = 0; i < vertex; i++)
	{
		g->ArrayOfPointer_AdjList[i].head = NULL;
	}

	return g;
}
void AddNewEdgeInGraph(GRAPH* g, int src, int dst)
{
	
	Adj_Node* newnode = (Adj_Node*)malloc(sizeof(Adj_Node));
	newnode->dest = dst;
	newnode->next = g->ArrayOfPointer_AdjList[src].head;
	g->ArrayOfPointer_AdjList[src].head = newnode;

	//since graph is undirected. add node in src as well.
	Adj_Node* new_node = (Adj_Node*)malloc(sizeof(Adj_Node));
	new_node->dest = src;
	new_node->next = g->ArrayOfPointer_AdjList[dst].head;
	g->ArrayOfPointer_AdjList[dst].head = new_node;

}
void DisplayGraphRepresentation(GRAPH * g)
{
	int i;
	for (i = 0; i < g->v; i++)
	{
		Adj_Node*adjlist = g->ArrayOfPointer_AdjList[i].head;
		printf("%d", i);
		while (adjlist)
		{
			printf("--> %d ", adjlist->dest);
			adjlist = adjlist->next;
		}
		printf("\n");
	}
}

void BreadthFirstSearch(GRAPH* g)
{

}