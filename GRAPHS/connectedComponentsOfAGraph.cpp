#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;

int get_component(int node)
{
    if (visited[node])
        return 0;
    int ans = 1;
    visited[node] = true;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            ans += get_component(i);
            visited[i] = true;
        }
    }
    return ans;
}

int main()
{
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    visited = vector<bool>(n, false);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            answer.push_back(get_component(i));
        }
    }
    for (auto i : answer)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}