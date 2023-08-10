#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

int get_components(int node)
{
    if (visited[node])
        return 0;
    visited[node] = true;
    int ans = 1;
    for (auto i : adj[node])
    {
        if(!visited[i]){
            ans += get_components(i);
            visited[i] = true;    
        }
    }
    return ans;
}

int main()
{
    int n, m;
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
    int answer = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            ans.push_back(get_components(i));
    }
    for (auto i : ans)
    {
        answer += i * (n - i);    // Basically the number of people in their group multiplied by number of people not in their group
    }                             // Ask why it cant be the multiplication of the numbers (i.e. , "ans *= i;")
    cout << (answer / 2) << "\n"; // ans/2 is done for the over counting since once it will be i and next time n-i
                                  // basically 3*2 and 2*3 hence we divide by 2
}