#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

// We can use unordered map over here as well and there wont be any difference in the output. IDK about the time complexity.

signed main(){
    int n;
    cin>>n;
    
    vi a(n);
    rep(i,0,n)
        cin >> a[i];
    
    map<int,int> freq;
    rep(i,0,n)
        freq[a[i]]++;
    
    map<int,int> :: iterator it;
    for(it=freq.begin();it!=freq.end();it++)
        cout << it->first << " : " << it->second << "\n";
    
    return 0;
}