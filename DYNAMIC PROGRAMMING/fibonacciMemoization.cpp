#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

void fib(int n){
    int fibo[N];
    fibo[1] = 0;
    fibo[2] = 1;
    for(int i=3;i<N;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n] << "\n";
}

int main(){
    int n;
    cin >> n;
    fib(n);
}