//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    bool isSafe(bool graph[101][101],vector<int>&color,int m ,int n,int index,int i){
        for(int j=0;j<n;j++){
            if(j!= index && graph[index][j] == 1 && color[j]== i){
                return false;
            }
        }
        return true;
    }
    
    bool mColoringProblem(bool graph[101][101],vector<int>&color,int m ,int n ,int index){
        if(index == n) return true;
        for(int i=1;i<=m;i++){
            if(isSafe(graph,color,m,n,index,i)){
                color[index] = i;
                if(mColoringProblem(graph,color,m,n,index+1)) return true;
                color[index] = 0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int>color(n,0);
        return mColoringProblem(graph,color,m,n,0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends