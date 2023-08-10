#include<bits/stdc++.h>
using namespace std;

bool isCycle(int source, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &stack){
    stack[source] = true;
    if(!visited[source]){
        visited[source] = true;
        for(auto i : adj[source]){
            if(!visited[i] && isCycle(i,adj,visited,stack))
                return true;
            if(stack[i])
                return true;
        }
    }
    stack[source] = false;
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        // Since this is a directed graph
    }
    vector<bool> stack(n+1,false);
    vector<bool> visited(n+1,false);
    bool cycle = false;
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycle(i,adj,visited,stack)){
            cycle = true;
        }
    }
    if(cycle)
        cout << "Cycle is present\n";
    else
        cout << "Cycle is not present\n";
    return 0;
}