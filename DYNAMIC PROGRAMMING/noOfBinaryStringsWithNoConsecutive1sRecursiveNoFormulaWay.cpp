#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int zero[N];
int one[N];

void binaryStrings(int n){
    if(n == 1){
        zero[n] = 1;
        one[n] = 1;
        return;
    }
    binaryStrings(n-1);
    one[n] = zero[n-1];
    zero[n] = one[n-1] + zero[n-1];
    return;
}

int main(){
    int n;
    cin >> n;
    binaryStrings(n);
    cout << "The number of binary strings wth no consecutive 1's : " << zero[n] + one[n] << "\n";
    return 0;
}