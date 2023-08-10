#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> pq;  // This is the implementation of a maxHeap
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top()<<"\n";
    pq.pop();
    cout<<pq.top()<<"\n";

    priority_queue<int,vector<int>,greater<int>> pqm; // This is the STL implementation of a minHeap
    pqm.push(3);
    pqm.push(2);
    pqm.push(1);
    cout<<pqm.top()<<"\n";
    pqm.pop();
    cout<<pqm.top()<<"\n";
}