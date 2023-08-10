#include<bits/stdc++.h>
#include<climits>
#include<cmath>
#include<iostream>
using namespace std;

int RecordBreakingDays(int arr[],int n){
    int maxi=-1;
    int Days=0;
    int arr[n+1]=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j] > maxi && arr[j] > arr[j+1]){
            maxi=arr[j];
            Days++;
            cout<<"case 2";
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the limit";
    cin>>n;
    int arr[n+1];//n+1 so that we can assign an extra last variable to satisfy the last condition
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RecordBreakingDays(arr,n);
}