#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int fibo[N];

int fib(int n){
    if(n == 0 || n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(fibo[n] != -1)
        return fibo[n];
    return (fibo[n] = fib(n-1)+fib(n-2));
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<N;i++){
        fibo[i] = -1;
    }
    cout << fib(n) << "\n";
}