#include<bits/stdc++.h>
using namespace std;

void maxSumSubarray(int arr[], int k, int x, int n){
    int sum = 0, ans = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    if(sum < x)
        ans = sum;
    for (int i=k;i<n;i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];
        if(sum < x)
            ans = max(sum,ans);
    }
    cout<<"Maximum sum subarray (<x) : "<<ans<<"\n";
}

int main(){
    int arr[]={7, 5, 4, 6, 8, 9};
    int n = 6;
    int k = 3;
    int x = 20;
    maxSumSubarray(arr,k,x,n);
}