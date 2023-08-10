#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int k;
    cin>>k;
    vector<vector<int>> a(k);
    rep(i,0,k){
        int n;
        cin>>n;
        a[i] = vector<int>(n);
        rep(j,0,n)
            cin>>a[i][j];
    }
    vector<int> idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    rep(i,0,k){
        pq.push(make_pair(a[i][0],i));
    }
    vector<int> ans;
    while(!pq.empty()){
        pii x = pq.top();
        pq.pop();
        ans.push_back(x.ff);
        if(idx[x.ss]+1 < a[x.ss].size())
            pq.push(make_pair(a[x.ss][idx[x.ss]+1], x.ss));
        idx[x.ss] += 1;
    }
    rep(i,0,ans.size())
        cout<<ans[i]<<" ";
    cout<<"\n";
}