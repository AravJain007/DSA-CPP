#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int currSum = 0, maxSumTillNow = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        currSum += a[i];
        maxSumTillNow = max(maxSumTillNow, currSum);
        if(currSum <= 0)
            currSum = 0;
    }
    cout << maxSumTillNow << "\n";
    return 0;
}