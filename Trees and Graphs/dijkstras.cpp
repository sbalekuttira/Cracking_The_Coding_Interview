//Author: Somaiah Thimmaiah Balekuttira
//Date : 29/oct/2017
//Time : 12:26 PM
//Dijkstra’s shortest path algorithm


#include <bits/stdc++.h>

#define MAX 99999
#define V 9    //Number of vertices in the graph

using namespace std;
int min(int dist[],bool path[])
{
	int mins=MAX;
	int min_index;
	for(int i=0;i<V;i++)
	{
		if(dist[i]<=mins && path[i]==false)
		{
			mins=dist[i];
			min_index=i;


		}


	}

return min_index;

}


void Printdistance(int dist[],int source)
{

	for(int i=0;i<V;i++)
	{
		cout<<"Distance from source " << source << " to "<< i <<" :" <<dist[i]<<endl;


	}

}

void Dijkstras(int graph[V][V],int source)
{


	int dist[V];   //Min dist of each node from source;
	bool path[V];	//Already visited nodes or vertices 


	for (int i=0;i<V;i++)
	{
		dist[i]=MAX;
		path[i]=false;

	}

	dist[source]=0;

	for (int it=0;it<V-1;it++)
	{
		int current=min(dist,path);

		path[current]=true;


		for(int j=0 ; j<V ; j++)

		{	
			if(graph[current][j] && !path[j] && dist[current]!=MAX && dist[current] + graph[current][j] < dist[j] )
			{

				dist[j]=dist[current] + graph[current][j];
			}

		}

	}
Printdistance(dist,source);

}

int main()
{


	int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
	                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
	                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
	                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
	                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
	                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
	                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
	                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
	                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
	                     };
	  
	Dijkstras(graph, 0);
	  
	return 0;



}