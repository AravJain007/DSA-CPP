#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            int temp;
            if (arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
}