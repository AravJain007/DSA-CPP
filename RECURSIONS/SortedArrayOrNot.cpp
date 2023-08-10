#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1)
        return true;
    bool restArray=sorted(arr+1,n-1);
    return(restArray && arr[0]<arr[1]);
}

int main(){
    int arr[5]={1,2,3,4,5};
    sortedOrNot(arr,5);
}