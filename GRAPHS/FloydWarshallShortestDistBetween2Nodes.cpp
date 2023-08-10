#include <bits/stdc++.h>
using namespace std;

const int INF = 1e7;

int main()
{
    // Adjecency List
    vector<vector<int>> adjacencyList = {{0, 5, INF, 10},
                                         {INF, 0, 3, INF},
                                         {INF, INF, 0, 1},
                                         {INF, INF, INF, 0}};
    int n = adjacencyList.size();
    vector<vector<int>> graph = adjacencyList;
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (graph[k][j] + graph[i][k] < graph[i][j])
                    graph[i][j] = graph[k][j] + graph[i][k];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
                cout << "INF ";
            else
                cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
}