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
{ // Implemented using path compression O(Log N)
    if (parent[v] == v)
        return v;
    return parent[v] = find_set(parent[v]); // We will have to find the parent of our current element which might be a leader node.
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        size[a] += size[b];
        parent[b] = a;
    }
}

int main()
{
    // Here adjacency list is of no use and we have to use just the edges that we are given so no need to make adjacency list
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    bool cycle = false;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        edges.push_back({x, y});
        edges[i][0] = find_set(edges[i][0]);
        edges[i][1] = find_set(edges[i][1]);
        if (edges[i][0] == edges[i][1])
            cycle = true;
        else
            union_sets(edges[i][0], edges[i][1]);
    }
    if (cycle)
        cout << "Cycle is present\n";
    else
        cout << "Cycle is not present\n";
    return 0;
}