#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int num){
    int sum = 1;
    for(int i=2;i<sqrt(num);i++){
        if(num%i == 0){
            if(i == num/i)
                sum += i;
            else
                sum += i + (num/i);
        }
    }
    if(num == sum)
        return true;
    return false;
}

int maxSum(int arr[], int n, int k){
    int res = 0;
    for(int i = 0;i<k;i++){
        res += arr[i];
    }
    int sum = res;
    for(int i=k;i<n;i++){
        sum += arr[i]-arr[i-k];
        res = max(res,sum);
    }
    return res;
}

int maxNumberOfPerfect(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(isPerfect(arr[i]))
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    return maxSum(arr,n,k);
}

int main(){
    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    int n = 8;
    cout << maxNumberOfPerfect(arr,n,k) << "\n";
    return 0;
}