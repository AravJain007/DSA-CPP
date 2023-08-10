#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main(){
    int n;
    cin>>n;
    vi a(n);
    int k = 0;
    for(int i=0;i<n;i++)   
        cin>>a[i];
    map<int,int> mymap;    // Key-element   Value-count
    int prefSum=0;
    for(int i=0;i<n;i++){
        prefSum += a[i];
        mymap[prefSum]++;
    }
    int ans = 0;
    map<int,int> :: iterator it;
    for(it=mymap.begin();it!=mymap.end();it++){   // Always remember that it is an iterator so we cant use '<' over here we use '!=' over here
        int c = it->second;
        ans += (c*(c-1))/2;
        if((it->first)-k == 0)
            ans += it->second;
    }
    cout << ans << "\n";
    return 0;
}