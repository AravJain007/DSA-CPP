#include <bits/stdc++.h>
using namespace std;
// So x is up and down the row and y is left and right of the column
bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)        // Be careful in the row and column part coz if u mess this up whole program becomes dog shit
        {
            return false;
        }
    }
    int row = x;
    int column = y;
    while (row >= 0 && column >= 0)
    {
        if (arr[row][column] == 1)
        {
            return false;
        }
        row--;
        column--;
    }
    row = x;
    column = y;
    while (row >= 0 && column < n)
    {
        if (arr[row][column] == 1)
        {
            return false;
        }
        row--;
        column++;
    }
    return true;
}

bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueen(arr, x + 1, n))  // We check if we can place anymore pieces 
            {
                return true;
            }
            arr[x][col] = 0; // This is backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}