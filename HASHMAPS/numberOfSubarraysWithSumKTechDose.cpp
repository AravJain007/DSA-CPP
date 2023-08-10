#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;
    cin>>n;
    int k = 0;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    unordered_map<int,int> mymap;
    int prefsum=0,count=0;
    unordered_map<int,int> :: iterator it;
    rep(i,0,n){
        prefsum += a[i];
        if(prefsum == k)
            count++;
        if(mymap.find(prefsum-k) != mymap.end())
            count += mymap[prefsum-k];
        mymap[prefsum]++;
    }
    cout << count << "\n";
}