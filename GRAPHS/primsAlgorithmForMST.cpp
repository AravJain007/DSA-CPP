#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;
vector<vector<int>> g[N]; // Adjacency List
vector<bool> visited(N);
vector<int> dist(N), parent(N);
const int INF = 1e9;
int cost = 0;

void primsAlgo(int source)
{
    for (int i = 0; i < N; i++)
    {
        dist[i] = INF;
    }
    
    set<vector<int>> s; // We use sets here because they are in ascending order
    dist[source] = 0;
    s.insert({0, source});
    
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        visited[x[1]] = true;
        
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        
        //cout << u << " " << v << " " << w << "\n";
        cost += w;
        
        for (auto it : g[x[1]])
        {
            if (visited[it[0]])
                continue;
            
            if (dist[it[0]] > it[1])
            {
                s.erase({dist[it[0]], it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]] = x[0];
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int w, u, v;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    int source;
    cin >> source;
    primsAlgo(source);
    cout << cost << "\n";
    return 0;
}