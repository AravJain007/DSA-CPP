#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}

int main(){
    int n;
    cout<<"Enter the limit";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
}