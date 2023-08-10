#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        pq.push(x);
    }
    int sum = 0, count = 0;
    while (sum <= pq.size()){
        sum += pq.top();
        pq.pop();
        count ++;
    }
    cout << "Minimum Number of Steps needed to reach the end : " << count << "\n";
    return 0;
}