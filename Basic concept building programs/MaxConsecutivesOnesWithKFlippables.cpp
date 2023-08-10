#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int> a,int k){
    int zeroCount=0,i=0,ans=0;
    for(int j=0;j<a.size();j++){
        if(a[j]==0)
            zeroCount++;
        while(zeroCount>k){
            if(a[i]==0){
                zeroCount--;
            }
             i++;
        }
        ans = max(ans,(j-i+1));
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i : arr)
    {
        cin>>i;
    }
    cout<<consecutiveOnes(arr,k)<<endl;
    return 0;
}