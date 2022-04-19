#include<iostream>
#include<unordered_map>
#include <stack>
#include<vector>
using namespace std;

// DFS approach
void DFS_approach(vector<int>adj_list[],stack<int>&stack,vector<bool>&visited,int vertex){
    visited[vertex]=true;
    for(auto i:adj_list[vertex]){
         if(!visited[i]){
            DFS(adj_list,stack,visited,i);
        }
    }
    stack.push(vertex);
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
        
            cin>>destination;
        }
    }
    vector<bool>visited(node+1,false);
    stack<int>stack;
    for(int i=1;i<=node;i++){
        if(visited[i]==false){
            DFS_approach(adj_list,stack,visited,i);
        }
    }
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}

// BFS approach

#include<iostream>
#include<unordered_map>
#include <queue>
#include<vector>
using namespace std;

void BFS_approach(vector<int>adj_list[],unordered_map<int,int>&indegree,vector<int>&output,vector<bool>&visited,int n){
    queue<int>que;
    for(int i=1;i<=n;i++){
        if(indegree[i] == 0){
            que.push(i);
            visited[i] = true;
        } 
    }
    while(!que.empty()){
        int vertex = que.front();
        output.push_back(vertex);
        que.pop();
        for(int child : adj_list[vertex]){
            if(!visited[child]){
                indegree[child]--;
                if(indegree[child]== 0){
                    que.push(child);
                    visited[child]= true;
                }
            }
        }
    }
}





int main(){
    int vertex,destination,node;
    cin>>node;
    unordered_map<int,int>indegree;

    vector<int>adj_list[node+1];
    for(int i=0;i<node;++i){
        cin>>vertex;
        cin>>destination;
        while(destination!=(-1)){
            adj_list[vertex].push_back(destination);
            indegree[destination]++;    
            cin>>destination;
        }
    }
    vector<bool>visited(node+1,false);
    vector<int>output;
    BFS_approach(adj_list,indegree,output,visited,node);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    return 0;
}