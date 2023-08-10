#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;
int dp[N];
const int MOD = 1e9;

int minSquares(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 0)
        return n;
    if (dp[n] != MOD)
        return dp[n];
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + minSquares(n - i * i));
    }
    return dp[n];
}

int main()
{
    for(int i=0;i<N;i++)
        dp[i] = MOD;
    int n;
    cin >> n;
    cout << minSquares(n) << "\n";
    return 0;
}