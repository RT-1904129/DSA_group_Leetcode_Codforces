// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<vector<int>> &adj, int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<vector<int>> &adj, int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

// Driver code
int main()
{
	int V = 5;
	vector<vector<int>>adj(V);
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
	return 0;
}

// Here adjaceny matrix is given see it carefully it start from 0 index thats why visited will have only n node;

// iterative dfs;
void dfs(vector<vector<int>>&adj){
	int n = adj.size();
	vector<bool>visited(n,false);
	for(int i=0;i<n;i++){
		if(visited[i]== false){
			dfs(adj,visited,i);
		}
	}
}

void dfs(vector<vector<int>>&adj,vector<bool>&visited,int vertex){
	stack<int>s;
	s.push(vertex);
	while(!s.empty()){
		int new_vertex = s.top();
		
		s.pop();
		while(auto vert : adj[new_vertex]){
			if(visited[vert]== false){
				s.push(vert);
				visited[vert]= true;
			}
		}

	}
}

// Here adjaceny matrix is given see it carefullyit start from 0 index thats why visited will have only n node;

// Recursive dfs;
void dfs(vector<vector<int>>&adj){
	int n = adj.size();
	vector<bool>visited(n,false);
	for(int i=0;i<n;i++){
		if(visited[i]== false){
			dfs(adj,visited,i);
		}
	}
}


void dfs(vector<vector<int>>&adj,vector<bool>&visited,int vertex){
	visited[vertex]= true;
	while(auto vert : adj[vertex]){
		if(visited[vert]== false){
			dfs(adj,visited,vert);
		}
	}
}

// Here adjaceny matrix is given see it carefully it start from 0 index thats why visited will have only n node;

// Recursive bfs;

void BFS(vector<int>adj_list[],queue<int>&queue,vector<bool>&visited){
    if(queue.empty())
        return;
    int vertex=queue.front();
    queue.pop();
    cout<<vertex<<" ";
    for(auto i:adj_list[vertex]){
        if(!visited[i]){
            queue.push(i);
			visited[vertex] =true ;
        }
    }
    BFS(adj_list,queue,visited);
}

// iterative method 
void BFS(vector<int>adj_list[],queue<int>&queue,vector<bool>&visited){
	while(!queue.empty()){
		int vertex = queue.top();
		
		queue.pop();
		for(auto veri : adj_list[vertex]){
			if(!visited[vertex] ){
				queue.push(vertex);
				visited[vertex]= true;
			}
		}
	}
}

int main(){
    int vertex,destination,node;
    cin>>node;
    vector<int>adj_list[node+1];
    for(int i=0;i<node;++i){
        cin>>vertex;
        cin>>destination;
        while(destination!=(-1)){
            adj_list[vertex].push_back(destination);
            adj_list[destination].push_back(vertex);
            cin>>destination;
        }
    }
    vector<bool>visited(node+1,false);
    queue<int>queue;
    queue.push(1);
    BFS(adj_list,queue,visited);
    return 0;
}
