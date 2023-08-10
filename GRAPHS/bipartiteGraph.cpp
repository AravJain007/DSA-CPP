#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> color;
bool bipart;

void bipartite(int node, int currColor){
    if(color[node]!=(-1) && color[node]!=currColor){
        bipart = false;
        return;
    }
    if(visited[node]){
        return;
    }
    visited[node] = true;
    color[node] = currColor;
    for(auto i : adj[node])
        bipartite(i,currColor xor 1);
        // 0 xor 1 = 1
        // 1 xor 1 = 0
        // This way the colors will keep altering;
}

int main(){
    int n,m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    visited = vector<bool>(n,false);
    color = vector<int>(n,-1);  // [red-1]   [blue-0]   [ntg-(-1)]
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bipart = true;
    for(int i=0;i<n;i++){
        if(!visited[i])
            bipartite(i,0);
    }

    if(bipart){
        cout << "It is a Bipartite Graph\n";   
    }
    else
        cout << "It is not a Bipartite Graph\n";
}