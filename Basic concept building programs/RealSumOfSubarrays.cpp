#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void SumOfSubarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<"Sum of Subarray "<<i<<" "<<j<<" ="<<sum<<endl;
        }
    }
}

int main(){
    int num;
    cout<<"Enter the limit";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    SumOfSubarrays(arr,num);
}