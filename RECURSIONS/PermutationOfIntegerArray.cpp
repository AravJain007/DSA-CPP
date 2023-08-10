#include<bits/stdc++.h>
using namespace std;

int permutation(int arr[],int n,int i){
    if(i == n-1){
        return(arr[n-1]);
    }
    int x=arr[i];
    cout<<permutation(arr,n,i+1)<<x<<endl;
    cout<<x<<permutation(arr,n,i+1)<<endl;
    return (arr);
}

int main(){
    int arr[]={1,2,3};
    cout<<permutation(arr,3,0);
}