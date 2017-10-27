#include <bits/stdc++.h>
#include <list>

using namespace std;


class graph 
{

int v;
list <int> *adj;


public:

graph(int v)
{

this->v=v;
adj=new list<int>[v];

}


void addedge(int v, int w)
{

adj[v].push_back(w);

}

void bfs(int s)
{

list <int> queue;
bool *visited=new bool[v];

	for(int i=0;i<v;i++)
		{

		visited[i]=false;



		}


visited[s]=true;
queue.push_back(s);
list<int> :: iterator it;

while(!queue.empty())
{

s=queue.front();
cout<<s<<" ";
queue.pop_front();
	
  for (it=adj[s].begin();it!=adj[s].end();it++)
	{
	
		if(!visited[*it])
			{
				queue.push_back(*it);
				visited[*it]=true;

			}



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
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}






	