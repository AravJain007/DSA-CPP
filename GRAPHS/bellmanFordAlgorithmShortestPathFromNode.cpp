#include<bits/stdc++.h>
using namespace std;

const int INF = 1e7;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> graph;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph.push_back({u,v,w});
    }
    int source;
    cin >> source;
    vector<int> dist(n,INF);
    dist[source] = 0;
    for(int i=0;i<n-1;i++){
        for(auto it : graph){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            dist[v] = min(dist[v], (w + dist[u]));
        }
    }
    for(auto i : dist)
        cout << i << " ";
    cout<<"\n";
}