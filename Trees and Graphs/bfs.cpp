//Author: Somaiah Thimmaiah Balekuttira
//Date : 29/oct/2017
//Time : 7:15 AM




#include <bits/stdc++.h>
#include <queue>
using namespace std;


class graph
{
int nodes;

list <int> *adj;
bool *visited;


public:

	graph(int nodes)
	{
		this->nodes=nodes;
		adj=new list<int>[nodes];
		visited=new bool[nodes];

	}

	void addedge(int v,int w)
	{
		adj[v].push_back(w);



	}



	void bfs(int start)
	{

		queue<int> qu;

		for(int i=0;i<nodes;i++)
				{
					visited[i]=false;


				}



		visited[start]=true;
		qu.push(start);
		
		list<int>::iterator it;
		while(!qu.empty())
		{
			start=qu.front();
			cout<<start<<" ";
			

			for(it=adj[start].begin();it!=adj[start].end();it++)
			{
				if(visited[*it]==false)
				{	
					visited[*it]=true;
					qu.push(*it);


				}


			}

			qu.pop();
			
		}

	}


};



int main()
{

	graph g(7);


	g.addedge(1,2);
	g.addedge(1,3);
	g.addedge(2,1);
	g.addedge(2,4);
	g.addedge(2,5);
	g.addedge(3,1);
	g.addedge(3,5);
	g.addedge(4,2);
	g.addedge(4,6);
	g.addedge(4,5);
	g.addedge(5,2);
	g.addedge(5,3);
	g.addedge(5,6);
	g.addedge(6,4);
	g.addedge(6,5);
	

	g.bfs(2);







}












