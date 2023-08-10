#include<iostream>
#include<cmath>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

void LongestArithematicSubarray(int arr[],int n){
    int count_primary=0;
    for (int i=0;i<n;i++){
        int diff;
        int count_secondary=1;
        diff=arr[i]-arr[i+1];
        for(int j=i;j<n;j++){
            if((arr[j]-arr[j+1])==diff){
                count_secondary+=1;
            }else{
                break;
            }
        }
        if(count_secondary>count_primary){
            count_primary=count_secondary;
        }
    }
    cout<<"Length of the longest arithmetic subarray:"<<count_primary;
}

int main(){
    int n;
    cout<<"Enter limit:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    LongestArithematicSubarray(arr,n);
}