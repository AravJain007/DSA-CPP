#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> graph(n+1); // It is adjacency list only not some 3d data structure. Instead of int we store pair<int,int>
    vector<int> dist(n+1,inf);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int source;
    cin >> source;
    dist[source] = 0; // Remember to make the dist[source] 0 otherwise ntg will work;
    set<pair<int,int>> s;
    s.insert({0,source}); // {wt,v}
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second]){
            if(dist[it.first] > (dist[x.second] + it.second)){
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    for(auto i : dist){
        if(i < inf)
            cout << i << " ";
        else 
            cout << -1 << " ";
    }
    cout << endl;
    return 0;
}
/*
Input - 
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1 
 */