#include<bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n){
    int mid = low + (high-low)/2; // We use this way to calculate mid so that high + low doesnt exceed int ka constraints
    
    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;
    
    else if(mid>0 && (arr[mid-1] > arr[mid]))
        return findPeakElement(arr,low,mid-1,n);
    
    return findPeakElement(arr,mid+1,high,n);
}

int main(){
    int arr[]={0,6,8,5,7,9};
    int n = 6;
    cout << "The peak element is : " << findPeakElement(arr,0,n-1,n) << "\n";
    return 0;
}