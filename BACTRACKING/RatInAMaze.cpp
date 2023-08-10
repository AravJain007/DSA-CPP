#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solArr))  // This is to check if we can move towards the right
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, solArr))  // This is to check if we can move towards the bottom
        {
            return true;
        }
        solArr[x][y] = 0; // This is called backtracking.
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    // dynamically assigning a 2-D array
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // dynamically assigning the 2-D soln array and putting every part of it as 0 so that compiler doesnt put garbage value in it
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
/* This is the input            // The 1 represent paths that the mouse can move on.
    1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1 */
/*  This is the output          // The 1 represent the path taken by the mouse to complete the maze.
    1 0 0 0 0                   
    1 1 1 1 0
    0 0 0 1 0
    0 0 0 1 1
    0 0 0 0 1  */
