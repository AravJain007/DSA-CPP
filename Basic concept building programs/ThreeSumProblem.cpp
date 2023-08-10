#include<bits/stdc++.h>
using namespace std;

bool ThreeSum(vector<int> arr,int k){
    bool flag = false;
    for(int i=0;i<(arr.size()-2);i++){
        int x = arr[i];
        int target = k-arr[i];
        int low = i+1 ,high = (arr.size()-1);
        while(low<high){
            int sum = arr[low]+arr[high];
            if(sum == target){
                return true;
                flag = true;
                break;
            }
            else if(sum<target){
                low++;
            }else{
                high--;
            }
        }
    }
    return false;
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    bool flag = false;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<ThreeSum(arr,k);
    return 0;
}