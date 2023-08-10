// This solution takes O(N^2) and we can solve it using greedy in O(N)
#include<bits/stdc++.h>
using namespace std;

const int inf = 1e7;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i : arr){
        cin >> i;
    }
    vector<int> jumps(n,inf);
    if(arr[0] == 0){
        cout << "inf\n";
        return 0;
    }
    jumps[0] = 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i <= (j+arr[j])){
                jumps[i] = min(jumps[i], jumps[j]+1);
            }
        }
    }
    cout << jumps[n-1] << "\n";
    return 0;
}