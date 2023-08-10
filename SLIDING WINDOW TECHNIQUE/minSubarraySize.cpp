#include<bits/stdc++.h>
using namespace std;

void minSubarraySize(int arr[],int x, int n){
    int sum = 0, ans = INT_MAX, k = 0;
    int end = 0,start = 0;
    while(end < n && sum < n){
        if(sum > x){
            ans = min (ans, end-start);
            sum = sum - arr[start];
            start++;
        }
        else{
            sum = sum + arr[end];
            end++;
        }
    }
    cout<<"The Minimum Size of Subarray to get sum > x : "<<ans<<"\n";
}

int main(){
    int arr[] = {1,4,45,6,10,19};
    int x = 51;
    int n = 6;
    minSubarraySize(arr,x,n);
    return 0;
}