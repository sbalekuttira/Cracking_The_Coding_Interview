//Author: Somaiah Thimmaiah Balekuttira
//Date : 29/oct/2017
//Time : 8:01 AM
//CTC Chapter 4  (Question 4.1) Route between Nodes.



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



	void search_path(int source, int destination)
	{
		stack<int> st;
		
		
		for(int i=0;i<nodes;i++)
		{

			visited[i]=false;

		}

		int flag=0;	

		
		st.push(source);
		if(source==destination)
		{

			cout<<"Path between "<<source<<" and "<<destination<<" exists! "<<endl;
			flag=2;

		}

		st.push(source);
		list<int> :: iterator it;
		
		while(!st.empty() && flag!=2)
		{	flag=0;
			int current_node=st.top();
			
		for(it=adj[current_node].begin();it!=adj[current_node].end();it++)
			{

				if(*it==destination)
			{
				flag=2;
				cout<<"Path between "<<source<<" and "<<destination<<" exists! "<<endl;
				while(!st.empty())
						{
							st.pop();

						}

						break;


			}

			else if(visited[*it]==false)
				{	
					
						flag=1;
						visited[*it]=true;
						st.push(*it);
						break;
				}


			}

			if(flag==0)
			{

			st.pop();
			
			}
		}
		
		if(flag!=2)
		{	
		cout<<"Path between "<<source<<" and "<<destination<<" not found! "<<endl;
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
	

	g.search_path(3,1);
	g.search_path(3,0);
	g.search_path(0,3);





return 0;
}











