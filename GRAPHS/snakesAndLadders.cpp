#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> lad;
    map<int, int> snak;
    int snakes, ladders;
    cin >> ladders;
    for (int i = 0; i < ladders; i++) // Inputting ladders
    {
        int u, v;
        cin >> u >> v;
        lad[u] = v;
    }
    cin >> snakes;
    for (int i = 0; i < snakes; i++) // Inputting snakes
    {
        int u, v;
        cin >> u >> v;
        snak[u] = v;
    }
    queue<int> q;
    vector<bool> vis(101, 0);
    q.push(1);
    vis[1] = true;
    bool found = false;
    int count = 0;
    while (!q.empty() && !found)
    {
        int size = q.size();
        while (size--)
        {
            int t = q.front();
            q.pop();
            for (int die = 1; die <= 6; die++)
            {
                if (t + die == 100)
                {
                    found = true;
                }
                else if (t + die <= 100 && !vis[lad[t + die]] && lad[t + die])
                {
                    vis[lad[t + die]] = true;
                    if (lad[t + die] == 100)
                        found = true;
                    q.push(lad[t + die]);
                }
                else if (t + die <= 100 && !vis[snak[t + die]] && snak[t + die])
                {
                    vis[snak[t + die]] = true;
                    if (t + die == 100)
                        found = true;
                    q.push(snak[t + die]);
                }
                else if (t + die <= 100 && !snak[t + die] && !lad[t + die] && !vis[t + die])
                {
                    vis[t + die] = true;
                    q.push(t + die);
                }
            }
        }
        count++;
    }
    if (found)
        cout << count << "\n";
    else
        cout << "No moves\n";
}