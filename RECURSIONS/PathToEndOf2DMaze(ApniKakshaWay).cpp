#include<bits/stdc++.h>
using namespace std;

int pathToEnd(int n, int right,int down){
    if(right==(n-1) && down==(n-1))
        return 1;
    if(right>=n || down>=n)
        return 0;
    return pathToEnd(n,right+1,down)+pathToEnd(n,right,down+1);
}

int main(){
    int n;
    cin>>n;
    cout<<pathToEnd(n,0,0,n-1,n-1);
    return 0;
}