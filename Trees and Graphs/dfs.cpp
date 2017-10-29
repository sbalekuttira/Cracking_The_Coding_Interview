//Author: Somaiah Thimmaiah Balekuttira
//Date : 29/oct/2017
//Time : 7:15 AM




#include <bits/stdc++.h>
#include <stack>
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
		adj=new list<int>[10];
		visited=new bool[nodes];

	}

	void addedge(int v,int w)
	{
		adj[v].push_back(w);



	}



	void dfs(int start)
	{

		stack<int> st;

		for(int i=0;i<nodes;i++)
				{
					visited[i]=false;


				}



		visited[start]=true;
		st.push(start);
		cout<<start<<" ";
		list<int>::iterator it;
		int flag=0;		
		while(!st.empty())
		{
			int current_node=st.top();
			flag=0;

			for(it=adj[current_node].begin();it!=adj[current_node].end();it++)
			{
				if(visited[*it]==false)
				{	flag=1;
					visited[*it]=true;
					cout<<*it<<" ";
					st.push(*it);
					break;

				}


			}

			if(flag==0)
			{

			st.pop();
			
			}
		}

	}


};



int main()
{

	graph g(4);


    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
	

	g.dfs(0);







}












