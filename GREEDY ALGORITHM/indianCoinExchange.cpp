#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) // This array is for taking the input of the denominations (ie the division of money)
        cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        ans += k/a[i];
        k -= (k/a[i])*a[i];
    }
    cout << ans << "\n";
    return 0;
}