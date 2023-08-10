#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int x,int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = arr[x];
}

void dnfSort(int arr[],int n){
    int low=0,mid=0;
    int high = n;
    while (mid!=high){
        if(arr[mid]==0){
            swap(arr,mid,low);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){
    int arr[]={1,0,1,2,0,1,0,2,1};
    dnfSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i];
    }
    return 0;
}