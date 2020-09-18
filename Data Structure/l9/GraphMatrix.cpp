#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#define NULL_VALUE -999999
#define INFINITY 999999
#define WHITE 1
#define GREY 2
#define BLACK 3

using namespace std;

//******************Graph class starts here**************************
class Graph
{
	int nVertices, nEdges ;
	bool directed ;
	int ** matrix ; //adjacency matrix to store the graph
	//define other variables required for bfs such as color, parent, and dist
	//you must use pointers and dynamic allocation
	int *color;
	int *parent;
	int *dist;

public:
	Graph(bool dir = false);
	~Graph();
	void setnVertices(int n);
	void addEdge(int u, int v);
	void removeEdge(int u, int v);
	bool isEdge(int u, int v);
    int getDegree(int u);
    void printAdjVertices(int u);
    bool hasCommonAdjacent(int u, int v);
    void printGraph();
};


Graph::Graph(bool dir)
{
	nVertices = 0 ;
	nEdges = 0 ;
	matrix = 0 ;
	directed = dir ; //set direction of the graph
	//define other variables to be initialized
}

void Graph::setnVertices(int n)
{
	this->nVertices = n ;

	//allocate space for the matrix
    matrix = new int*[nVertices];
    for(int i=0;i<nVertices;i++)
    {
        matrix[i] = new int[nVertices];
        for(int j=0;j<nVertices;j++)
            matrix[i][j] = 0; //initialize the matrix cells to 0
    }
    color = new int[nVertices];
    dist = new int[nVertices];
    parent = new int[nVertices];

}

void Graph::addEdge(int u, int v)
{
    //write your code here
    if(u<0 || u>=nVertices || v<0 || v>=nVertices) return;
    matrix[u][v] = 1;
    if(!directed) matrix[v][u] = 1;
    nEdges++;

}

void Graph::removeEdge(int u, int v)
{

    //write this function
    if(u<0 || u>=nVertices || v<0 || v>=nVertices) return;
    matrix[u][v] = 0;
    if(!directed) matrix[v][u] = 0;
    nEdges--;
}

bool Graph::isEdge(int u, int v)
{
    //returns true if (u,v) is an edge, otherwise should return false
    if(u<0 || u>=nVertices || v<0 || v>=nVertices) return 0;
    if(matrix[u][v] == 0) return 0;
    else return 1;
}

int Graph::getDegree(int u)
{
    int DegreeCount=0;
    //returns the degree of vertex u
    for(int i=0; i<nEdges; i++){
        if(matrix[u][i]==1)DegreeCount++;
    }
    return DegreeCount;
}

void Graph::printAdjVertices(int u)
{
    //returns the degree of vertex u
    for(int i=0; i<nEdges; i++){
        if(matrix[u][i]==1)cout<<u<<": "<< i<<" ";
    }
    cout<<endl;
}

bool Graph::hasCommonAdjacent(int u, int v)
{
    int flag=0;
    //returns true if vertices u and v have common adjacent vertices
    for(int i=0; i<nEdges; i++){
        if(matrix[u][i]==1 && matrix[v][i]==1){
                flag=1;
                return true;
                break;
        }
    }
    if(flag==0) return false;
}


void Graph::printGraph()
{
    printf("\nNumber of vertices: %d, Number of edges: %d\n", nVertices, nEdges);
    for(int i=0;i<nVertices;i++)
    {
        printf("%d:", i);
        for(int j=0; j<nVertices;j++)
        {
            if(matrix[i][j]==1)
                printf(" %d", j);
        }
        printf("\n");
    }
}

Graph::~Graph()
{
    //write your destructor here
    delete[] matrix;
    delete[] color;
    delete[] dist;
    delete[] parent;
}


//**********************Graph class ends here******************************


//******main function to test your code*************************
int main(void)
{
    int n;
    Graph g;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    g.setnVertices(n);

    while(1)
    {
        printf("1. Add edge. 2. Remove Edge 3.Check Edge\n");
        printf("4.Get Degree 5.Print Adjacent Vertices 6.Check Common Adjacent\n");
        printf("7. Print Graph  8. Exit.\n");

        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int u, v;
            scanf("%d%d", &u, &v);
            g.addEdge(u, v);
        }
        else if(ch==2)
        {
            int u, v;
            scanf("%d%d", &u, &v);
            g.removeEdge(u,v);
        }
        else if(ch==3)
        {
            int u, v;
            scanf("%d%d", &u, &v);
            if(g.isEdge(u,v)) printf("It's an Edge");
            else printf("Not an edge");
        }
        else if(ch==4)
        {
            int u;
            scanf("%d",&u);
            int degree = g.getDegree(u);
            printf("%d\n",degree);
        }
        else if(ch==5)
        {
            int u;
            scanf("%d",&u);
            g.printAdjVertices(u);
        }
        else if(ch==6)
        {
            int u, v;
            scanf("%d%d", &u, &v);
            if(g.hasCommonAdjacent(u,v)) printf("They have common adjacent\n");
            else printf("They don't have common adjacent");
        }
        else if(ch==7)
        {
            g.printGraph();
        }
        else if(ch==8)
        {
            break;
        }
    }

}
