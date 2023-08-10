#include<bits/stdc++.h>
using namespace std;

int pathToEnd(int n, int right,int down,int rightlimit,int downlimit){
    if(right==(n-1) && down==(n-1))
        return 1;
    if(right==rightlimit)
        rightlimit--;
    if(down==downlimit)
        downlimit--;
    int ans=0;
    if(right<=rightlimit)
        ans+=pathToEnd(n,right+1,down,rightlimit,downlimit);
    if(down<=downlimit)
        ans+=pathToEnd(n,right,down+1,rightlimit,downlimit);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<pathToEnd(n,0,0,n-1,n-1);
    return 0;
}