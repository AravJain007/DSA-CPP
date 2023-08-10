#include<bits/stdc++.h>
using namespace std;

int printAscending(int n){
    if(n==0)
        return 1;
    cout<<printAscending(n-1)<<" ";
    return n+1;
}

void printDescending(int n){
    if(n==0)
        return;
    cout<<n<<" ";
    printDescending(n-1);
}

int main(){
    int n;
    cin>>n;
    printAscending(n);
    cout<<endl;
    printDescending(n);
}