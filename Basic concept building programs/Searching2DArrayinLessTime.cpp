#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(c>0 && r<n){
        if(arr[r][c]==x){
            found=true;
        }
        if(arr[r][c]>x)
            c--;
        else
            r++;
    }
    if (found)
        cout<<"Found";
    else
        cout<<"Element no exist";
    return 0;
}