#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)

bool compare(pii &a, pii &b){
    double v1 = (double) a.first / a.second;
    double v2 = (double) b.first / b.second;
    return v1 > v2;
}

int main(){
    int n;
    cin>>n;
    vii a(n);
    rep(i,0,n){
        cin>>a[i].first>>a[i].second;
    }
    int w;
    cin>>w;
    sort(a.begin(),a.end(),compare);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(w >= a[i].second){
            ans += a[i].first;
            w -= a[i].second;
            continue;
        }
        ans += (a[i].first/a[i].second) * w;
        w=0;
    }
    cout << "Max Loot : " << ans << "\n";
    return 0;
}