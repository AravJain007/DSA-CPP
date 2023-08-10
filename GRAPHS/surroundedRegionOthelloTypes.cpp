#include <bits/stdc++.h>
using namespace std;

void change(vector<vector<char>> &a, int x, int y)
{
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    a[x][y] = '*';
    for (int i = 0; i < 4; i++)
    {
        int cx = x + dx[i];
        int cy = y + dy[i];
        if (cx >= 0 and cx < a.size() and cy >= 0 and cy < a.size() and a[cx][cy] == 'O')
            change(a, cx, cy);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                if (a[i][j] == 'O')
                    change(a, i, j); // We will convert it to *
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'O')
                cout << "X";
            else if (a[i][j] == '*')
                cout << "O";
            else
                cout << a[i][j];
        }
        cout << "\n";
    }
}