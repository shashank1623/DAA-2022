
#include<bits/stdc++.h>
using namespace std;

// implement bfs on graphs
class Graph
{
	int V; // No. of vertices

	
	vector<list<int>> adj;
public:
	Graph(int V); 

	// function to add an edge to graph
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{

	vector<bool> visited;
	visited.resize(V,false);

	
	list<int> queue;

	
	visited[s] = true;
	queue.push_back(s);

	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		
		for (auto adjecent: adj[s])
		{
			if (!visited[adjecent])
			{
				visited[adjecent] = true;
				queue.push_back(adjecent);
			}
		}
	}
}


int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(1, 3);
	

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS(0);
	cout<<endl;
	g.BFS(1);
	cout<<endl;
	g.BFS(2);
	cout<<endl;
	g.BFS(3);

	return 0;
}
