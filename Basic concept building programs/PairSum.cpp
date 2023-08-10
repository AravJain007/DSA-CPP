#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    int n,givensum;
    cin>>n>>givensum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // This method is for sorted array only
    
    int low=0,high=n-1;
    
    while(high>low)
    {
        int sum=arr[high]+arr[low];
        if(sum==givensum){
            cout<<low<<"  "<<high;
            return 0;
        }else if(sum>givensum){
            high--;
        }else{
            low++;
        }
    }
    cout<<"No such pair sum!";
    return 0;
}