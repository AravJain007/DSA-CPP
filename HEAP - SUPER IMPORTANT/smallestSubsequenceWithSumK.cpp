#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,8};
    int k = 14;
    priority_queue<int,vector<int>> pq;
    for(int i=0;i<5;i++)
        pq.push(arr[i]);
    int sum=0,ans=0;
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
        ans++;
        if(sum >= k){
            break;
        }
    }
    if(sum<k)
        cout << "No valid Answer\n";
    else
        cout << ans << "\n";
    return 0;
}