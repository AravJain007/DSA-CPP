#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> size(N);

void make_set(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, m, cost = 0;
    cin >> n >> m;
    for(int i=0;i<N;i++){
        make_set(i);
    }
    vector<vector<int>> edges; // [0-weight][1-first vertex][2-second vertex]
    for (int i = 0; i < m; i++)
    {
        int w, u, v;
        cin >> w >> u >> v;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
    for(auto i : edges){
        int u = i[1];
        int v = i[2];
        int w = i[0];
        int x = find_set(u);
        int y = find_set(v);
        if(x == y)
            continue;
        else{
            cout << x << " " << y << "\n";
            cost += w;
            union_set(x,y);
        }
    }
    cout << cost << "\n";
}
/*
Input :-
8 9
1 5 8
1 8 7
2 4 3
5 1 2
5 3 5
6 2 3
7 6 7
9 1 4
10 5 6
*/