#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kadanes(int arr[],int n){
    int currentsum=0,maxSum=(-INT_MAX-1);
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxSum=max(currentsum,maxSum);
    }
    return currentsum;
}

int main(){
    int n,totalSum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum=0;
    int nonwrapsum=kadanes(arr,n);
    int b[n];
    for(int i=0;i<n;i++)
    {
        totalSum+=arr[i];
        b[i]=(-arr[i]);
        cout<<b[i]<<" ";
    }cout<<endl;
    cout<<totalSum<<endl;
    int x=kadanes(b,n);
    wrapsum=totalSum + x;
    cout<<x<<"   ";
    cout<<wrapsum<<"   "<<nonwrapsum<<"   ";
    cout<<max(nonwrapsum,wrapsum);
    return 0;
}