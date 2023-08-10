#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){
    int xorsum;
    for (int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum;
    return 0;
}

int main(){
    int arr[7]={1,2,3,4,3,2,1};
    unique(arr,7);
    return 0;
}