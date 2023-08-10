#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+2;
int dp[N];

int fib(int n){
    if(n == 0 || n == 1)
        return n;
    if(n == 2)
        return 1;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fib(n-1)+fib(n-2);
    return dp[n];
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << "The number of binary strings with no consecutive  1's : " << fib(n+2) << "\n";
}