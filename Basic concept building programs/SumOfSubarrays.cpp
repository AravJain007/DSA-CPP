#include<bits/stdc++.h>
using namespace std;

void SumOfSubarrays(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}

int main(){
    int num;
    cout<<"Enter the limit";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    SumOfSubarrays(arr,num);
}