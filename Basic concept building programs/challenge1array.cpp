#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<climits>
using namespace std;

int MaxTillI(int arr[],int n){
    int mx=-1129132;
    for (int i=0;i<n;i++){
        mx = max(mx,arr[i]);;
        cout<<"Max from 0 to "<<i<<"="<<mx<<endl;
    }return 0;
}

int main(){
    int n;
    cout<<"Enter a limit";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    MaxTillI(arr,n);
    return 0;
}