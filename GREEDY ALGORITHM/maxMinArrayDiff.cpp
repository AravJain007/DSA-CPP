#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    int maxArrayDiff = 0, minArrayDiff = 0;
    for(int i=0;i<n/2;i++){
        maxArrayDiff += abs(a[i+(n/2)]-a[i]);
        minArrayDiff += abs(a[(2*i)+1]-a[2*i]);
    }
    cout << maxArrayDiff << "   " << minArrayDiff << "\n";
    return 0;
}