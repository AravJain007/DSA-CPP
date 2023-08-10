#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<int> adjacencyList[N];    // Array of Linked List but here we have taken Array of Vectors

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    cout << "Adjacency List of the above graph is given by : \n";
    for(int i=1;i<n;i++){
        cout << i << " -> ";
        vector<int> :: iterator it;
        for(it=adjacencyList[i].begin();it!=adjacencyList[i].end();it++)
            cout << *it << " ";
        cout << "\n";
    }
    return 0;
}
/*
input - 7   7  This is for inputting m and n.
        1   2
        2   4
        2   5
        2   6
        2   7
        1   3
        3   7
*/