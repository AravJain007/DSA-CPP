#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    int rowstart=0,rowend=n-1,columnstart=0,columnend=m-1;
    while(columnstart<columnend && rowstart<rowend){
        //for printing rowstart
        for (int i=columnstart;i<=columnend;i++)
            cout<<arr[rowstart][i];
        rowstart++;

        //for printing columnend
        for(int i=rowstart;i<=rowend;i++)
            cout<<arr[i][columnend];
        columnend--;

        //for printing rowend
        for(int i=columnend;i>=columnstart;i--)
            cout<<arr[rowend][i];
        rowend--;

        //for printing columnstart
        for (int i=rowend;i>=rowstart ;i--)
            cout<<arr[i][columnstart];
        columnstart++;
    }
    return 0;
}